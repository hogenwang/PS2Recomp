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

// Function: sub_003366D0
// Address: 0x3366d0 - 0x3367c0
void sub_003366D0_0x3366d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003366D0_0x3366d0");
#endif

    switch (ctx->pc) {
        case 0x336748u: goto label_336748;
        default: break;
    }

    ctx->pc = 0x3366d0u;

    // 0x3366d0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x3366d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x3366d4: 0x61e3c  dsll32      $v1, $a2, 24
    ctx->pc = 0x3366d4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) << (32 + 24));
    // 0x3366d8: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x3366d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x3366dc: 0x31e3f  dsra32      $v1, $v1, 24
    ctx->pc = 0x3366dcu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 24));
    // 0x3366e0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x3366e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x3366e4: 0x30620001  andi        $v0, $v1, 0x1
    ctx->pc = 0x3366e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x3366e8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3366e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x3366ec: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3366ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x3366f0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x3366f0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3366f4: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x3366f4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3366f8: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x3366F8u;
    {
        const bool branch_taken_0x3366f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3366FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3366F8u;
        // 0x3366fc: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3366f8) {
            ctx->pc = 0x336710u;
            goto label_336710;
        }
    }
    ctx->pc = 0x336700u;
    // 0x336700: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x336700u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x336704: 0x9442ea26  lhu         $v0, -0x15DA($v0)
    ctx->pc = 0x336704u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 4294961702)));
    // 0x336708: 0x821025  or          $v0, $a0, $v0
    ctx->pc = 0x336708u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x33670c: 0x3044ffff  andi        $a0, $v0, 0xFFFF
    ctx->pc = 0x33670cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
label_336710:
    // 0x336710: 0x30620002  andi        $v0, $v1, 0x2
    ctx->pc = 0x336710u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
    // 0x336714: 0x50400006  beql        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x336714u;
    {
        const bool branch_taken_0x336714 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x336714) {
            ctx->pc = 0x336718u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x336714u;
            // 0x336718: 0x3092ffff  andi        $s2, $a0, 0xFFFF (Delay Slot)
            SET_GPR_U64(ctx, 18, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
            ctx->in_delay_slot = false;
            ctx->pc = 0x336730u;
            goto label_336730;
        }
    }
    ctx->pc = 0x33671Cu;
    // 0x33671c: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x33671cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x336720: 0x9442ea32  lhu         $v0, -0x15CE($v0)
    ctx->pc = 0x336720u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 4294961714)));
    // 0x336724: 0x821025  or          $v0, $a0, $v0
    ctx->pc = 0x336724u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x336728: 0x3044ffff  andi        $a0, $v0, 0xFFFF
    ctx->pc = 0x336728u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x33672c: 0x3092ffff  andi        $s2, $a0, 0xFFFF
    ctx->pc = 0x33672cu;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
label_336730:
    // 0x336730: 0x324200a0  andi        $v0, $s2, 0xA0
    ctx->pc = 0x336730u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)160);
    // 0x336734: 0x5040001c  beql        $v0, $zero, . + 4 + (0x1C << 2)
    ctx->pc = 0x336734u;
    {
        const bool branch_taken_0x336734 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x336734) {
            ctx->pc = 0x336738u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x336734u;
            // 0x336738: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3367A8u;
            goto label_3367a8;
        }
    }
    ctx->pc = 0x33673Cu;
    // 0x33673c: 0x24040125  addiu       $a0, $zero, 0x125
    ctx->pc = 0x33673cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 293));
    // 0x336740: 0xc0538fc  jal         func_14E3F0
    ctx->pc = 0x336740u;
    SET_GPR_U32(ctx, 31, 0x336748u);
    ctx->pc = 0x336744u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x336740u;
    // 0x336744: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14E3F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14E3F0u, 0x336740u, 0x336748u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x336748u;
label_336748:
    // 0x336748: 0x26230001  addiu       $v1, $s1, 0x1
    ctx->pc = 0x336748u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x33674c: 0x32420080  andi        $v0, $s2, 0x80
    ctx->pc = 0x33674cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)128);
    // 0x336750: 0x38e3c  dsll32      $s1, $v1, 24
    ctx->pc = 0x336750u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 3) << (32 + 24));
    // 0x336754: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x336754u;
    {
        const bool branch_taken_0x336754 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x336758u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x336754u;
        // 0x336758: 0x118e3f  dsra32      $s1, $s1, 24 (Delay Slot)
        SET_GPR_S64(ctx, 17, GPR_S64(ctx, 17) >> (32 + 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x336754) {
            ctx->pc = 0x336768u;
            goto label_336768;
        }
    }
    ctx->pc = 0x33675Cu;
    // 0x33675c: 0x2622fffe  addiu       $v0, $s1, -0x2
    ctx->pc = 0x33675cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967294));
    // 0x336760: 0x28e3c  dsll32      $s1, $v0, 24
    ctx->pc = 0x336760u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) << (32 + 24));
    // 0x336764: 0x118e3f  dsra32      $s1, $s1, 24
    ctx->pc = 0x336764u;
    SET_GPR_S64(ctx, 17, GPR_S64(ctx, 17) >> (32 + 24));
label_336768:
    // 0x336768: 0x111e3c  dsll32      $v1, $s1, 24
    ctx->pc = 0x336768u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) << (32 + 24));
    // 0x33676c: 0x31e3f  dsra32      $v1, $v1, 24
    ctx->pc = 0x33676cu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 24));
    // 0x336770: 0x4630007  bgezl       $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x336770u;
    {
        const bool branch_taken_0x336770 = (GPR_S32(ctx, 3) >= 0);
        if (branch_taken_0x336770) {
            ctx->pc = 0x336774u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x336770u;
            // 0x336774: 0x10163c  dsll32      $v0, $s0, 24 (Delay Slot)
            SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 24));
            ctx->in_delay_slot = false;
            ctx->pc = 0x336790u;
            goto label_336790;
        }
    }
    ctx->pc = 0x336778u;
    // 0x336778: 0x10163c  dsll32      $v0, $s0, 24
    ctx->pc = 0x336778u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 24));
    // 0x33677c: 0x2163f  dsra32      $v0, $v0, 24
    ctx->pc = 0x33677cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 24));
    // 0x336780: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x336780u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x336784: 0x28e3c  dsll32      $s1, $v0, 24
    ctx->pc = 0x336784u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) << (32 + 24));
    // 0x336788: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x336788u;
    {
        const bool branch_taken_0x336788 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x33678Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x336788u;
        // 0x33678c: 0x118e3f  dsra32      $s1, $s1, 24 (Delay Slot)
        SET_GPR_S64(ctx, 17, GPR_S64(ctx, 17) >> (32 + 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x336788) {
            ctx->pc = 0x3367A4u;
            goto label_3367a4;
        }
    }
    ctx->pc = 0x336790u;
label_336790:
    // 0x336790: 0x2163f  dsra32      $v0, $v0, 24
    ctx->pc = 0x336790u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 24));
    // 0x336794: 0x62102a  slt         $v0, $v1, $v0
    ctx->pc = 0x336794u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x336798: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x336798u;
    {
        const bool branch_taken_0x336798 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x336798) {
            ctx->pc = 0x3367A4u;
            goto label_3367a4;
        }
    }
    ctx->pc = 0x3367A0u;
    // 0x3367a0: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x3367a0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3367a4:
    // 0x3367a4: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x3367a4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3367a8:
    // 0x3367a8: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x3367a8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3367ac: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x3367acu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3367b0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3367b0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3367b4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3367b4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3367b8: 0x3e00008  jr          $ra
    ctx->pc = 0x3367B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3367BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3367B8u;
        // 0x3367bc: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3367B8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3367C0u;
}
