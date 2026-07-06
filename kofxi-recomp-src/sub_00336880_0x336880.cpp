#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00336880
// Address: 0x336880 - 0x336920
void sub_00336880_0x336880(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00336880_0x336880");
#endif

    switch (ctx->pc) {
        case 0x33690cu: goto label_33690c;
        default: break;
    }

    ctx->pc = 0x336880u;

    // 0x336880: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x336880u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x336884: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x336884u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x336888: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x336888u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x33688c: 0x9466ea26  lhu         $a2, -0x15DA($v1)
    ctx->pc = 0x33688cu;
    SET_GPR_U32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 4294961702)));
    // 0x336890: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x336890u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x336894: 0x9465ea32  lhu         $a1, -0x15CE($v1)
    ctx->pc = 0x336894u;
    SET_GPR_U32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 4294961714)));
    // 0x336898: 0x3c03009d  lui         $v1, 0x9D
    ctx->pc = 0x336898u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)157 << 16));
    // 0x33689c: 0x8064b26b  lb          $a0, -0x4D95($v1)
    ctx->pc = 0x33689cu;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 4294947435)));
    // 0x3368a0: 0xc51825  or          $v1, $a2, $a1
    ctx->pc = 0x3368a0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) | GPR_U64(ctx, 5));
    // 0x3368a4: 0x3065ffff  andi        $a1, $v1, 0xFFFF
    ctx->pc = 0x3368a4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x3368a8: 0x30a300a0  andi        $v1, $a1, 0xA0
    ctx->pc = 0x3368a8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)160);
    // 0x3368ac: 0x50600018  beql        $v1, $zero, . + 4 + (0x18 << 2)
    ctx->pc = 0x3368ACu;
    {
        const bool branch_taken_0x3368ac = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x3368ac) {
            ctx->pc = 0x3368B0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3368ACu;
            // 0x3368b0: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x336910u;
            goto label_336910;
        }
    }
    ctx->pc = 0x3368B4u;
    // 0x3368b4: 0x24830001  addiu       $v1, $a0, 0x1
    ctx->pc = 0x3368b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x3368b8: 0x30a20080  andi        $v0, $a1, 0x80
    ctx->pc = 0x3368b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)128);
    // 0x3368bc: 0x31e3c  dsll32      $v1, $v1, 24
    ctx->pc = 0x3368bcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 24));
    // 0x3368c0: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3368C0u;
    {
        const bool branch_taken_0x3368c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3368C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3368C0u;
            // 0x3368c4: 0x31e3f  dsra32      $v1, $v1, 24 (Delay Slot)
        SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3368c0) {
            ctx->pc = 0x3368D4u;
            goto label_3368d4;
        }
    }
    ctx->pc = 0x3368C8u;
    // 0x3368c8: 0x2462fffe  addiu       $v0, $v1, -0x2
    ctx->pc = 0x3368c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967294));
    // 0x3368cc: 0x21e3c  dsll32      $v1, $v0, 24
    ctx->pc = 0x3368ccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 24));
    // 0x3368d0: 0x31e3f  dsra32      $v1, $v1, 24
    ctx->pc = 0x3368d0u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 24));
label_3368d4:
    // 0x3368d4: 0x3163c  dsll32      $v0, $v1, 24
    ctx->pc = 0x3368d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) << (32 + 24));
    // 0x3368d8: 0x2163f  dsra32      $v0, $v0, 24
    ctx->pc = 0x3368d8u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 24));
    // 0x3368dc: 0x4430003  bgezl       $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x3368DCu;
    {
        const bool branch_taken_0x3368dc = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x3368dc) {
            ctx->pc = 0x3368E0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3368DCu;
            // 0x3368e0: 0x28420008  slti        $v0, $v0, 0x8 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)8) ? 1 : 0);
        ctx->in_delay_slot = false;
            ctx->pc = 0x3368ECu;
            goto label_3368ec;
        }
    }
    ctx->pc = 0x3368E4u;
    // 0x3368e4: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x3368E4u;
    {
        const bool branch_taken_0x3368e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3368E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3368E4u;
            // 0x3368e8: 0x24030007  addiu       $v1, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3368e4) {
            ctx->pc = 0x3368F8u;
            goto label_3368f8;
        }
    }
    ctx->pc = 0x3368ECu;
label_3368ec:
    // 0x3368ec: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x3368ECu;
    {
        const bool branch_taken_0x3368ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3368ec) {
            ctx->pc = 0x3368F8u;
            goto label_3368f8;
        }
    }
    ctx->pc = 0x3368F4u;
    // 0x3368f4: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x3368f4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3368f8:
    // 0x3368f8: 0x3c02009d  lui         $v0, 0x9D
    ctx->pc = 0x3368f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)157 << 16));
    // 0x3368fc: 0x24040125  addiu       $a0, $zero, 0x125
    ctx->pc = 0x3368fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 293));
    // 0x336900: 0xa043b26b  sb          $v1, -0x4D95($v0)
    ctx->pc = 0x336900u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 4294947435), (uint8_t)GPR_U32(ctx, 3));
    // 0x336904: 0xc0538fc  jal         func_14E3F0
    ctx->pc = 0x336904u;
    SET_GPR_U32(ctx, 31, 0x33690Cu);
    ctx->pc = 0x336908u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x336904u;
            // 0x336908: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14E3F0u;
    if (runtime->hasFunction(0x14E3F0u)) {
        auto targetFn = runtime->lookupFunction(0x14E3F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33690Cu; }
        if (ctx->pc != 0x33690Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0014E3F0_0x14e3f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33690Cu; }
        if (ctx->pc != 0x33690Cu) { return; }
    }
    ctx->pc = 0x33690Cu;
label_33690c:
    // 0x33690c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x33690cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_336910:
    // 0x336910: 0x3e00008  jr          $ra
    ctx->pc = 0x336910u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x336914u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x336910u;
            // 0x336914: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x336918u;
    // 0x336918: 0x0  nop
    ctx->pc = 0x336918u;
    // NOP
    // 0x33691c: 0x0  nop
    ctx->pc = 0x33691cu;
    // NOP
    ctx->pc = 0x336920u;
}
