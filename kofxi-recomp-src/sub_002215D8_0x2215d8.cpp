#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002215D8
// Address: 0x2215d8 - 0x221660
void sub_002215D8_0x2215d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002215D8_0x2215d8");
#endif

    switch (ctx->pc) {
        case 0x2215d8u: goto label_2215d8;
        case 0x2215dcu: goto label_2215dc;
        case 0x2215e0u: goto label_2215e0;
        case 0x2215e4u: goto label_2215e4;
        case 0x2215e8u: goto label_2215e8;
        case 0x2215ecu: goto label_2215ec;
        case 0x2215f0u: goto label_2215f0;
        case 0x2215f4u: goto label_2215f4;
        case 0x2215f8u: goto label_2215f8;
        case 0x2215fcu: goto label_2215fc;
        case 0x221600u: goto label_221600;
        case 0x221604u: goto label_221604;
        case 0x221608u: goto label_221608;
        case 0x22160cu: goto label_22160c;
        case 0x221610u: goto label_221610;
        case 0x221614u: goto label_221614;
        case 0x221618u: goto label_221618;
        case 0x22161cu: goto label_22161c;
        case 0x221620u: goto label_221620;
        case 0x221624u: goto label_221624;
        case 0x221628u: goto label_221628;
        case 0x22162cu: goto label_22162c;
        case 0x221630u: goto label_221630;
        case 0x221634u: goto label_221634;
        case 0x221638u: goto label_221638;
        case 0x22163cu: goto label_22163c;
        case 0x221640u: goto label_221640;
        case 0x221644u: goto label_221644;
        case 0x221648u: goto label_221648;
        case 0x22164cu: goto label_22164c;
        case 0x221650u: goto label_221650;
        case 0x221654u: goto label_221654;
        case 0x221658u: goto label_221658;
        case 0x22165cu: goto label_22165c;
        default: break;
    }

    ctx->pc = 0x2215d8u;

label_2215d8:
    // 0x2215d8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2215d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_2215dc:
    // 0x2215dc: 0xe0602d  daddu       $t4, $a3, $zero
    ctx->pc = 0x2215dcu;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_2215e0:
    // 0x2215e0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2215e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_2215e4:
    // 0x2215e4: 0x1480000b  bnez        $a0, . + 4 + (0xB << 2)
label_2215e8:
    if (ctx->pc == 0x2215E8u) {
        ctx->pc = 0x2215E8u;
            // 0x2215e8: 0x2407d8ef  addiu       $a3, $zero, -0x2711 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294957295));
        ctx->pc = 0x2215ECu;
        goto label_2215ec;
    }
    ctx->pc = 0x2215E4u;
    {
        const bool branch_taken_0x2215e4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x2215E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2215E4u;
            // 0x2215e8: 0x2407d8ef  addiu       $a3, $zero, -0x2711 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294957295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2215e4) {
            ctx->pc = 0x221614u;
            goto label_221614;
        }
    }
    ctx->pc = 0x2215ECu;
label_2215ec:
    // 0x2215ec: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x2215ecu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
label_2215f0:
    // 0x2215f0: 0x3c08003f  lui         $t0, 0x3F
    ctx->pc = 0x2215f0u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)63 << 16));
label_2215f4:
    // 0x2215f4: 0x248429f0  addiu       $a0, $a0, 0x29F0
    ctx->pc = 0x2215f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 10736));
label_2215f8:
    // 0x2215f8: 0x25082a00  addiu       $t0, $t0, 0x2A00
    ctx->pc = 0x2215f8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 10752));
label_2215fc:
    // 0x2215fc: 0x24050018  addiu       $a1, $zero, 0x18
    ctx->pc = 0x2215fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
label_221600:
    // 0x221600: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x221600u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_221604:
    // 0x221604: 0x0  nop
    ctx->pc = 0x221604u;
    // NOP
label_221608:
    // 0x221608: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x221608u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_22160c:
    // 0x22160c: 0x8089794  j           func_225E50
label_221610:
    if (ctx->pc == 0x221610u) {
        ctx->pc = 0x221610u;
            // 0x221610: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x221614u;
        goto label_221614;
    }
    ctx->pc = 0x22160Cu;
    ctx->pc = 0x221610u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x22160Cu;
            // 0x221610: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x225E50u;
    if (runtime->hasFunction(0x225E50u)) {
        auto targetFn = runtime->lookupFunction(0x225E50u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_00225E50_0x225e50(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x221614u;
label_221614:
    // 0x221614: 0x8c8e0004  lw          $t6, 0x4($a0)
    ctx->pc = 0x221614u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_221618:
    // 0x221618: 0x240f0001  addiu       $t7, $zero, 0x1
    ctx->pc = 0x221618u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_22161c:
    // 0x22161c: 0x11cf0008  beq         $t6, $t7, . + 4 + (0x8 << 2)
label_221620:
    if (ctx->pc == 0x221620u) {
        ctx->pc = 0x221620u;
            // 0x221620: 0x3c08003f  lui         $t0, 0x3F (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)63 << 16));
        ctx->pc = 0x221624u;
        goto label_221624;
    }
    ctx->pc = 0x22161Cu;
    {
        const bool branch_taken_0x22161c = (GPR_U64(ctx, 14) == GPR_U64(ctx, 15));
        ctx->pc = 0x221620u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22161Cu;
            // 0x221620: 0x3c08003f  lui         $t0, 0x3F (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)63 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22161c) {
            ctx->pc = 0x221640u;
            goto label_221640;
        }
    }
    ctx->pc = 0x221624u;
label_221624:
    // 0x221624: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x221624u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
label_221628:
    // 0x221628: 0x248429f0  addiu       $a0, $a0, 0x29F0
    ctx->pc = 0x221628u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 10736));
label_22162c:
    // 0x22162c: 0x25082a18  addiu       $t0, $t0, 0x2A18
    ctx->pc = 0x22162cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 10776));
label_221630:
    // 0x221630: 0x2405001b  addiu       $a1, $zero, 0x1B
    ctx->pc = 0x221630u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 27));
label_221634:
    // 0x221634: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x221634u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_221638:
    // 0x221638: 0x1000fff3  b           . + 4 + (-0xD << 2)
label_22163c:
    if (ctx->pc == 0x22163Cu) {
        ctx->pc = 0x22163Cu;
            // 0x22163c: 0x2407d8ee  addiu       $a3, $zero, -0x2712 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294957294));
        ctx->pc = 0x221640u;
        goto label_221640;
    }
    ctx->pc = 0x221638u;
    {
        const bool branch_taken_0x221638 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22163Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x221638u;
            // 0x22163c: 0x2407d8ee  addiu       $a3, $zero, -0x2712 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294957294));
        ctx->in_delay_slot = false;
        if (branch_taken_0x221638) {
            ctx->pc = 0x221608u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_221608;
        }
    }
    ctx->pc = 0x221640u;
label_221640:
    // 0x221640: 0x240f0800  addiu       $t7, $zero, 0x800
    ctx->pc = 0x221640u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
label_221644:
    // 0x221644: 0xac8c0020  sw          $t4, 0x20($a0)
    ctx->pc = 0x221644u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 32), GPR_U32(ctx, 12));
label_221648:
    // 0x221648: 0x8c820030  lw          $v0, 0x30($a0)
    ctx->pc = 0x221648u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 48)));
label_22164c:
    // 0x22164c: 0x40f809  jalr        $v0
label_221650:
    if (ctx->pc == 0x221650u) {
        ctx->pc = 0x221650u;
            // 0x221650: 0xac8f0018  sw          $t7, 0x18($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 24), GPR_U32(ctx, 15));
        ctx->pc = 0x221654u;
        goto label_221654;
    }
    ctx->pc = 0x22164Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x221654u);
        ctx->pc = 0x221650u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22164Cu;
            // 0x221650: 0xac8f0018  sw          $t7, 0x18($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 24), GPR_U32(ctx, 15));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x221654u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x221654u; }
            if (ctx->pc != 0x221654u) { return; }
        }
        }
    }
    ctx->pc = 0x221654u;
label_221654:
    // 0x221654: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x221654u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_221658:
    // 0x221658: 0x3e00008  jr          $ra
label_22165c:
    if (ctx->pc == 0x22165Cu) {
        ctx->pc = 0x22165Cu;
            // 0x22165c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x221660u;
        goto label_fallthrough_0x221658;
    }
    ctx->pc = 0x221658u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x22165Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x221658u;
            // 0x22165c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x221658:
    ctx->pc = 0x221660u;
    ctx->pc = 0x221660u;
}
