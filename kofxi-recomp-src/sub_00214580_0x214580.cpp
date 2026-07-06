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

// Function: sub_00214580
// Address: 0x214580 - 0x214790
void sub_00214580_0x214580(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00214580_0x214580");
#endif

    switch (ctx->pc) {
        case 0x21459cu: goto label_21459c;
        case 0x2145acu: goto label_2145ac;
        case 0x2145bcu: goto label_2145bc;
        case 0x2145ccu: goto label_2145cc;
        case 0x214634u: goto label_214634;
        case 0x214648u: goto label_214648;
        case 0x21465cu: goto label_21465c;
        case 0x214670u: goto label_214670;
        case 0x214680u: goto label_214680;
        case 0x214698u: goto label_214698;
        case 0x214704u: goto label_214704;
        case 0x214718u: goto label_214718;
        case 0x21472cu: goto label_21472c;
        case 0x214740u: goto label_214740;
        case 0x214750u: goto label_214750;
        case 0x214764u: goto label_214764;
        default: break;
    }

    ctx->pc = 0x214580u;

label_214580:
    // 0x214580: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x214580u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x214584: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x214584u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x214588: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x214588u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x21458c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x21458cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x214590: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x214590u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    // 0x214594: 0xc043e52  jal         func_10F948
    ctx->pc = 0x214594u;
    SET_GPR_U32(ctx, 31, 0x21459Cu);
    ctx->pc = 0x214598u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x214594u;
    // 0x214598: 0x248408a8  addiu       $a0, $a0, 0x8A8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2216));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F948u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F948u, 0x214594u, 0x21459Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21459Cu;
label_21459c:
    // 0x21459c: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x21459cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2145a0: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x2145a0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    // 0x2145a4: 0xc043e52  jal         func_10F948
    ctx->pc = 0x2145A4u;
    SET_GPR_U32(ctx, 31, 0x2145ACu);
    ctx->pc = 0x2145A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2145A4u;
    // 0x2145a8: 0x248408c8  addiu       $a0, $a0, 0x8C8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2248));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F948u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F948u, 0x2145A4u, 0x2145ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2145ACu;
label_2145ac:
    // 0x2145ac: 0x8e050004  lw          $a1, 0x4($s0)
    ctx->pc = 0x2145acu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x2145b0: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x2145b0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    // 0x2145b4: 0xc043e52  jal         func_10F948
    ctx->pc = 0x2145B4u;
    SET_GPR_U32(ctx, 31, 0x2145BCu);
    ctx->pc = 0x2145B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2145B4u;
    // 0x2145b8: 0x248408d8  addiu       $a0, $a0, 0x8D8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2264));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F948u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F948u, 0x2145B4u, 0x2145BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2145BCu;
label_2145bc:
    // 0x2145bc: 0x8e050008  lw          $a1, 0x8($s0)
    ctx->pc = 0x2145bcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x2145c0: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x2145c0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    // 0x2145c4: 0xc043e52  jal         func_10F948
    ctx->pc = 0x2145C4u;
    SET_GPR_U32(ctx, 31, 0x2145CCu);
    ctx->pc = 0x2145C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2145C4u;
    // 0x2145c8: 0x248408e8  addiu       $a0, $a0, 0x8E8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2280));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F948u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F948u, 0x2145C4u, 0x2145CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2145CCu;
label_2145cc:
    // 0x2145cc: 0x2610000c  addiu       $s0, $s0, 0xC
    ctx->pc = 0x2145ccu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
    // 0x2145d0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2145d0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2145d4: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x2145d4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2145d8: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x2145d8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    // 0x2145dc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2145dcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2145e0: 0x248408f8  addiu       $a0, $a0, 0x8F8
    ctx->pc = 0x2145e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2296));
    // 0x2145e4: 0x8043e52  j           func_10F948
    ctx->pc = 0x2145E4u;
    ctx->pc = 0x2145E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2145E4u;
    // 0x2145e8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F948u;
    sub_0010F948_0x10f948(rdram, ctx, runtime); return;
    ctx->pc = 0x2145ECu;
    // 0x2145ec: 0x0  nop
    ctx->pc = 0x2145ecu;
    // NOP
    // 0x2145f0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2145f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2145f4: 0x3c0f003a  lui         $t7, 0x3A
    ctx->pc = 0x2145f4u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)58 << 16));
    // 0x2145f8: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x2145f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x2145fc: 0xade0ab58  sw          $zero, -0x54A8($t7)
    ctx->pc = 0x2145fcu;
    WRITE32(ADD32(GPR_U32(ctx, 15), 4294945624), GPR_U32(ctx, 0));
    // 0x214600: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x214600u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x214604: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x214604u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x214608: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x214608u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x21460c: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x21460cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x214610: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x214610u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x214614: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x214614u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x214618: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x214618u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x21461c: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x21461cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x214620: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x214620u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x214624: 0x8cd40000  lw          $s4, 0x0($a2)
    ctx->pc = 0x214624u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x214628: 0x8cb20000  lw          $s2, 0x0($a1)
    ctx->pc = 0x214628u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x21462c: 0xc0844dc  jal         func_211370
    ctx->pc = 0x21462Cu;
    SET_GPR_U32(ctx, 31, 0x214634u);
    ctx->pc = 0x214630u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21462Cu;
    // 0x214630: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x211370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x211370u, 0x21462Cu, 0x214634u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x214634u;
label_214634:
    // 0x214634: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x214634u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x214638: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x214638u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21463c: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x21463cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x214640: 0xc0844dc  jal         func_211370
    ctx->pc = 0x214640u;
    SET_GPR_U32(ctx, 31, 0x214648u);
    ctx->pc = 0x214644u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x214640u;
    // 0x214644: 0x260382d  daddu       $a3, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x211370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x211370u, 0x214640u, 0x214648u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x214648u;
label_214648:
    // 0x214648: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x214648u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21464c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x21464cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x214650: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x214650u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x214654: 0xc0844dc  jal         func_211370
    ctx->pc = 0x214654u;
    SET_GPR_U32(ctx, 31, 0x21465Cu);
    ctx->pc = 0x214658u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x214654u;
    // 0x214658: 0x260382d  daddu       $a3, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x211370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x211370u, 0x214654u, 0x21465Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21465Cu;
label_21465c:
    // 0x21465c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x21465cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x214660: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x214660u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x214664: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x214664u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x214668: 0xc08449a  jal         func_211268
    ctx->pc = 0x214668u;
    SET_GPR_U32(ctx, 31, 0x214670u);
    ctx->pc = 0x21466Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x214668u;
    // 0x21466c: 0x24060040  addiu       $a2, $zero, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x211268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x211268u, 0x214668u, 0x214670u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x214670u;
label_214670:
    // 0x214670: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x214670u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x214674: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x214674u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x214678: 0xc0849ec  jal         func_2127B0
    ctx->pc = 0x214678u;
    SET_GPR_U32(ctx, 31, 0x214680u);
    ctx->pc = 0x21467Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x214678u;
    // 0x21467c: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2127B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2127B0u, 0x214678u, 0x214680u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x214680u;
label_214680:
    // 0x214680: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x214680u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x214684: 0x4400005  bltz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x214684u;
    {
        const bool branch_taken_0x214684 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x214688u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x214684u;
        // 0x214688: 0x782d  daddu       $t7, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 15, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x214684) {
            ctx->pc = 0x21469Cu;
            goto label_21469c;
        }
    }
    ctx->pc = 0x21468Cu;
    // 0x21468c: 0x8e6f0000  lw          $t7, 0x0($s3)
    ctx->pc = 0x21468cu;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x214690: 0xc085160  jal         func_214580
    ctx->pc = 0x214690u;
    SET_GPR_U32(ctx, 31, 0x214698u);
    ctx->pc = 0x214694u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x214690u;
    // 0x214694: 0x28fa023  subu        $s4, $s4, $t7 (Delay Slot)
    SET_GPR_S32(ctx, 20, (int32_t)SUB32(GPR_U32(ctx, 20), GPR_U32(ctx, 15)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x214580u;
    goto label_214580;
    ctx->pc = 0x214698u;
label_214698:
    // 0x214698: 0x280782d  daddu       $t7, $s4, $zero
    ctx->pc = 0x214698u;
    SET_GPR_U64(ctx, 15, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_21469c:
    // 0x21469c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x21469cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2146a0: 0x1e0102d  daddu       $v0, $t7, $zero
    ctx->pc = 0x2146a0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 15) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2146a4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2146a4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2146a8: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x2146a8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2146ac: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x2146acu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2146b0: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x2146b0u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2146b4: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x2146b4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2146b8: 0x3e00008  jr          $ra
    ctx->pc = 0x2146B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2146BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2146B8u;
        // 0x2146bc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2146B8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2146C0u;
    // 0x2146c0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2146c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2146c4: 0x3c0f003a  lui         $t7, 0x3A
    ctx->pc = 0x2146c4u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)58 << 16));
    // 0x2146c8: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x2146c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x2146cc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2146ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2146d0: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2146d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2146d4: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x2146d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x2146d8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2146d8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2146dc: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x2146dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x2146e0: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x2146e0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2146e4: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x2146e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x2146e8: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x2146e8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2146ec: 0xade0ab5c  sw          $zero, -0x54A4($t7)
    ctx->pc = 0x2146ecu;
    WRITE32(ADD32(GPR_U32(ctx, 15), 4294945628), GPR_U32(ctx, 0));
    // 0x2146f0: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x2146f0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2146f4: 0x8c920000  lw          $s2, 0x0($a0)
    ctx->pc = 0x2146f4u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2146f8: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x2146f8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2146fc: 0xc084612  jal         func_211848
    ctx->pc = 0x2146FCu;
    SET_GPR_U32(ctx, 31, 0x214704u);
    ctx->pc = 0x214700u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2146FCu;
    // 0x214700: 0x8cb40000  lw          $s4, 0x0($a1) (Delay Slot)
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x211848u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x211848u, 0x2146FCu, 0x214704u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x214704u;
label_214704:
    // 0x214704: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x214704u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x214708: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x214708u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21470c: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x21470cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x214710: 0xc084612  jal         func_211848
    ctx->pc = 0x214710u;
    SET_GPR_U32(ctx, 31, 0x214718u);
    ctx->pc = 0x214714u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x214710u;
    // 0x214714: 0x220382d  daddu       $a3, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x211848u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x211848u, 0x214710u, 0x214718u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x214718u;
label_214718:
    // 0x214718: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x214718u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21471c: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x21471cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x214720: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x214720u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x214724: 0xc084612  jal         func_211848
    ctx->pc = 0x214724u;
    SET_GPR_U32(ctx, 31, 0x21472Cu);
    ctx->pc = 0x214728u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x214724u;
    // 0x214728: 0x220382d  daddu       $a3, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x211848u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x211848u, 0x214724u, 0x21472Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21472Cu;
label_21472c:
    // 0x21472c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x21472cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x214730: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x214730u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x214734: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x214734u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x214738: 0xc0845c2  jal         func_211708
    ctx->pc = 0x214738u;
    SET_GPR_U32(ctx, 31, 0x214740u);
    ctx->pc = 0x21473Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x214738u;
    // 0x21473c: 0x24060040  addiu       $a2, $zero, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x211708u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x211708u, 0x214738u, 0x214740u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x214740u;
label_214740:
    // 0x214740: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x214740u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x214744: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x214744u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x214748: 0xc084a6a  jal         func_2129A8
    ctx->pc = 0x214748u;
    SET_GPR_U32(ctx, 31, 0x214750u);
    ctx->pc = 0x21474Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x214748u;
    // 0x21474c: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2129A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2129A8u, 0x214748u, 0x214750u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x214750u;
label_214750:
    // 0x214750: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x214750u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x214754: 0x4400005  bltz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x214754u;
    {
        const bool branch_taken_0x214754 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x214758u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x214754u;
        // 0x214758: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x214754) {
            ctx->pc = 0x21476Cu;
            goto label_21476c;
        }
    }
    ctx->pc = 0x21475Cu;
    // 0x21475c: 0xc085160  jal         func_214580
    ctx->pc = 0x21475Cu;
    SET_GPR_U32(ctx, 31, 0x214764u);
    ctx->pc = 0x214580u;
    goto label_214580;
    ctx->pc = 0x214764u;
label_214764:
    // 0x214764: 0x8e6f0000  lw          $t7, 0x0($s3)
    ctx->pc = 0x214764u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x214768: 0x1f42823  subu        $a1, $t7, $s4
    ctx->pc = 0x214768u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 15), GPR_U32(ctx, 20)));
label_21476c:
    // 0x21476c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x21476cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x214770: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x214770u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x214774: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x214774u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x214778: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x214778u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x21477c: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x21477cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x214780: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x214780u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x214784: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x214784u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x214788: 0x3e00008  jr          $ra
    ctx->pc = 0x214788u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21478Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x214788u;
        // 0x21478c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x214788u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x214790u;
}
