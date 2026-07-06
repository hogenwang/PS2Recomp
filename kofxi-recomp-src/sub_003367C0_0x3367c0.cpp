#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_003367C0
// Address: 0x3367c0 - 0x336880
void sub_003367C0_0x3367c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003367C0_0x3367c0");
#endif

    switch (ctx->pc) {
        case 0x336808u: goto label_336808;
        default: break;
    }

    ctx->pc = 0x3367c0u;

    // 0x3367c0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x3367c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x3367c4: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x3367c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x3367c8: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x3367c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x3367cc: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x3367ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x3367d0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3367d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x3367d4: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3367d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x3367d8: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x3367d8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3367dc: 0x9443ea26  lhu         $v1, -0x15DA($v0)
    ctx->pc = 0x3367dcu;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 4294961702)));
    // 0x3367e0: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x3367e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x3367e4: 0x9442ea32  lhu         $v0, -0x15CE($v0)
    ctx->pc = 0x3367e4u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 4294961714)));
    // 0x3367e8: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x3367e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x3367ec: 0x3052ffff  andi        $s2, $v0, 0xFFFF
    ctx->pc = 0x3367ecu;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x3367f0: 0x324200a0  andi        $v0, $s2, 0xA0
    ctx->pc = 0x3367f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)160);
    // 0x3367f4: 0x1040001b  beqz        $v0, . + 4 + (0x1B << 2)
    ctx->pc = 0x3367F4u;
    {
        const bool branch_taken_0x3367f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3367F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3367F4u;
        // 0x3367f8: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3367f4) {
            ctx->pc = 0x336864u;
            goto label_336864;
        }
    }
    ctx->pc = 0x3367FCu;
    // 0x3367fc: 0x24040125  addiu       $a0, $zero, 0x125
    ctx->pc = 0x3367fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 293));
    // 0x336800: 0xc0538fc  jal         func_14E3F0
    ctx->pc = 0x336800u;
    SET_GPR_U32(ctx, 31, 0x336808u);
    ctx->pc = 0x336804u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x336800u;
    // 0x336804: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14E3F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14E3F0u, 0x336800u, 0x336808u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x336808u;
label_336808:
    // 0x336808: 0x26230001  addiu       $v1, $s1, 0x1
    ctx->pc = 0x336808u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x33680c: 0x32420080  andi        $v0, $s2, 0x80
    ctx->pc = 0x33680cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)128);
    // 0x336810: 0x38e3c  dsll32      $s1, $v1, 24
    ctx->pc = 0x336810u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 3) << (32 + 24));
    // 0x336814: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x336814u;
    {
        const bool branch_taken_0x336814 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x336818u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x336814u;
        // 0x336818: 0x118e3f  dsra32      $s1, $s1, 24 (Delay Slot)
        SET_GPR_S64(ctx, 17, GPR_S64(ctx, 17) >> (32 + 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x336814) {
            ctx->pc = 0x336828u;
            goto label_336828;
        }
    }
    ctx->pc = 0x33681Cu;
    // 0x33681c: 0x2622fffe  addiu       $v0, $s1, -0x2
    ctx->pc = 0x33681cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967294));
    // 0x336820: 0x28e3c  dsll32      $s1, $v0, 24
    ctx->pc = 0x336820u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) << (32 + 24));
    // 0x336824: 0x118e3f  dsra32      $s1, $s1, 24
    ctx->pc = 0x336824u;
    SET_GPR_S64(ctx, 17, GPR_S64(ctx, 17) >> (32 + 24));
label_336828:
    // 0x336828: 0x111e3c  dsll32      $v1, $s1, 24
    ctx->pc = 0x336828u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) << (32 + 24));
    // 0x33682c: 0x31e3f  dsra32      $v1, $v1, 24
    ctx->pc = 0x33682cu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 24));
    // 0x336830: 0x4630007  bgezl       $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x336830u;
    {
        const bool branch_taken_0x336830 = (GPR_S32(ctx, 3) >= 0);
        if (branch_taken_0x336830) {
            ctx->pc = 0x336834u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x336830u;
            // 0x336834: 0x10163c  dsll32      $v0, $s0, 24 (Delay Slot)
            SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 24));
            ctx->in_delay_slot = false;
            ctx->pc = 0x336850u;
            goto label_336850;
        }
    }
    ctx->pc = 0x336838u;
    // 0x336838: 0x10163c  dsll32      $v0, $s0, 24
    ctx->pc = 0x336838u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 24));
    // 0x33683c: 0x2163f  dsra32      $v0, $v0, 24
    ctx->pc = 0x33683cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 24));
    // 0x336840: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x336840u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x336844: 0x28e3c  dsll32      $s1, $v0, 24
    ctx->pc = 0x336844u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) << (32 + 24));
    // 0x336848: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x336848u;
    {
        const bool branch_taken_0x336848 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x33684Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x336848u;
        // 0x33684c: 0x118e3f  dsra32      $s1, $s1, 24 (Delay Slot)
        SET_GPR_S64(ctx, 17, GPR_S64(ctx, 17) >> (32 + 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x336848) {
            ctx->pc = 0x336864u;
            goto label_336864;
        }
    }
    ctx->pc = 0x336850u;
label_336850:
    // 0x336850: 0x2163f  dsra32      $v0, $v0, 24
    ctx->pc = 0x336850u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 24));
    // 0x336854: 0x62102a  slt         $v0, $v1, $v0
    ctx->pc = 0x336854u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x336858: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x336858u;
    {
        const bool branch_taken_0x336858 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x336858) {
            ctx->pc = 0x33685Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x336858u;
            // 0x33685c: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x336868u;
            goto label_336868;
        }
    }
    ctx->pc = 0x336860u;
    // 0x336860: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x336860u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_336864:
    // 0x336864: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x336864u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_336868:
    // 0x336868: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x336868u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x33686c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x33686cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x336870: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x336870u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x336874: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x336874u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x336878: 0x3e00008  jr          $ra
    ctx->pc = 0x336878u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x33687Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x336878u;
        // 0x33687c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x336878u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x336880u;
}
