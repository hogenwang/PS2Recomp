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

// Function: sub_001F3550
// Address: 0x1f3550 - 0x1f3808
void sub_001F3550_0x1f3550(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001F3550_0x1f3550");
#endif

    switch (ctx->pc) {
        case 0x1f35b0u: goto label_1f35b0;
        case 0x1f35ccu: goto label_1f35cc;
        case 0x1f35dcu: goto label_1f35dc;
        case 0x1f35e4u: goto label_1f35e4;
        case 0x1f35ecu: goto label_1f35ec;
        case 0x1f3600u: goto label_1f3600;
        case 0x1f3618u: goto label_1f3618;
        case 0x1f362cu: goto label_1f362c;
        case 0x1f3634u: goto label_1f3634;
        case 0x1f364cu: goto label_1f364c;
        case 0x1f3684u: goto label_1f3684;
        case 0x1f3694u: goto label_1f3694;
        case 0x1f36a4u: goto label_1f36a4;
        case 0x1f36c4u: goto label_1f36c4;
        case 0x1f36d0u: goto label_1f36d0;
        case 0x1f36e0u: goto label_1f36e0;
        case 0x1f3780u: goto label_1f3780;
        case 0x1f3790u: goto label_1f3790;
        case 0x1f37a4u: goto label_1f37a4;
        case 0x1f37b8u: goto label_1f37b8;
        case 0x1f37d0u: goto label_1f37d0;
        default: break;
    }

    ctx->pc = 0x1f3550u;

    // 0x1f3550: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x1f3550u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x1f3554: 0xffb40080  sd          $s4, 0x80($sp)
    ctx->pc = 0x1f3554u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 20));
    // 0x1f3558: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x1f3558u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f355c: 0xffb60090  sd          $s6, 0x90($sp)
    ctx->pc = 0x1f355cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 22));
    // 0x1f3560: 0x269609f8  addiu       $s6, $s4, 0x9F8
    ctx->pc = 0x1f3560u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 20), 2552));
    // 0x1f3564: 0xffb70098  sd          $s7, 0x98($sp)
    ctx->pc = 0x1f3564u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 152), GPR_U64(ctx, 23));
    // 0x1f3568: 0xa0b82d  daddu       $s7, $a1, $zero
    ctx->pc = 0x1f3568u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f356c: 0xffbe00a0  sd          $fp, 0xA0($sp)
    ctx->pc = 0x1f356cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 30));
    // 0x1f3570: 0x26820950  addiu       $v0, $s4, 0x950
    ctx->pc = 0x1f3570u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), 2384));
    // 0x1f3574: 0xffb00060  sd          $s0, 0x60($sp)
    ctx->pc = 0x1f3574u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 16));
    // 0x1f3578: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x1f3578u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f357c: 0xffb10068  sd          $s1, 0x68($sp)
    ctx->pc = 0x1f357cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 104), GPR_U64(ctx, 17));
    // 0x1f3580: 0x27a70040  addiu       $a3, $sp, 0x40
    ctx->pc = 0x1f3580u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x1f3584: 0xffb20070  sd          $s2, 0x70($sp)
    ctx->pc = 0x1f3584u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 18));
    // 0x1f3588: 0xffb30078  sd          $s3, 0x78($sp)
    ctx->pc = 0x1f3588u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 120), GPR_U64(ctx, 19));
    // 0x1f358c: 0xffb50088  sd          $s5, 0x88($sp)
    ctx->pc = 0x1f358cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 136), GPR_U64(ctx, 21));
    // 0x1f3590: 0xffbf00a8  sd          $ra, 0xA8($sp)
    ctx->pc = 0x1f3590u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 168), GPR_U64(ctx, 31));
    // 0x1f3594: 0x8e932018  lw          $s3, 0x2018($s4)
    ctx->pc = 0x1f3594u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8216)));
    // 0x1f3598: 0xafa2004c  sw          $v0, 0x4C($sp)
    ctx->pc = 0x1f3598u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 76), GPR_U32(ctx, 2));
    // 0x1f359c: 0x267e008c  addiu       $fp, $s3, 0x8C
    ctx->pc = 0x1f359cu;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 19), 140));
    // 0x1f35a0: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x1f35a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x1f35a4: 0x3c0282d  daddu       $a1, $fp, $zero
    ctx->pc = 0x1f35a4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f35a8: 0xc07ce02  jal         func_1F3808
    ctx->pc = 0x1F35A8u;
    SET_GPR_U32(ctx, 31, 0x1F35B0u);
    ctx->pc = 0x1F35ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F35A8u;
    // 0x1f35ac: 0xafa20050  sw          $v0, 0x50($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F3808u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F3808u, 0x1F35A8u, 0x1F35B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F35B0u;
label_1f35b0:
    // 0x1f35b0: 0x54400088  bnel        $v0, $zero, . + 4 + (0x88 << 2)
    ctx->pc = 0x1F35B0u;
    {
        const bool branch_taken_0x1f35b0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1f35b0) {
            ctx->pc = 0x1F35B4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F35B0u;
            // 0x1f35b4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F37D4u;
            goto label_1f37d4;
        }
    }
    ctx->pc = 0x1F35B8u;
    // 0x1f35b8: 0x27a60044  addiu       $a2, $sp, 0x44
    ctx->pc = 0x1f35b8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 68));
    // 0x1f35bc: 0x27a70048  addiu       $a3, $sp, 0x48
    ctx->pc = 0x1f35bcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 72));
    // 0x1f35c0: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1f35c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f35c4: 0xc07cec4  jal         func_1F3B10
    ctx->pc = 0x1F35C4u;
    SET_GPR_U32(ctx, 31, 0x1F35CCu);
    ctx->pc = 0x1F35C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F35C4u;
    // 0x1f35c8: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F3B10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F3B10u, 0x1F35C4u, 0x1F35CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F35CCu;
label_1f35cc:
    // 0x1f35cc: 0x2665108c  addiu       $a1, $s3, 0x108C
    ctx->pc = 0x1f35ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 4236));
    // 0x1f35d0: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x1f35d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1f35d4: 0xc07d024  jal         func_1F4090
    ctx->pc = 0x1F35D4u;
    SET_GPR_U32(ctx, 31, 0x1F35DCu);
    ctx->pc = 0x1F35D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F35D4u;
    // 0x1f35d8: 0x8c440054  lw          $a0, 0x54($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 84)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4090u, 0x1F35D4u, 0x1F35DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F35DCu;
label_1f35dc:
    // 0x1f35dc: 0xc07cee6  jal         func_1F3B98
    ctx->pc = 0x1F35DCu;
    SET_GPR_U32(ctx, 31, 0x1F35E4u);
    ctx->pc = 0x1F35E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F35DCu;
    // 0x1f35e0: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F3B98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F3B98u, 0x1F35DCu, 0x1F35E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F35E4u;
label_1f35e4:
    // 0x1f35e4: 0xc07f446  jal         func_1FD118
    ctx->pc = 0x1F35E4u;
    SET_GPR_U32(ctx, 31, 0x1F35ECu);
    ctx->pc = 0x1FD118u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD118u, 0x1F35E4u, 0x1F35ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F35ECu;
label_1f35ec:
    // 0x1f35ec: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x1f35ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f35f0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1f35f0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f35f4: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1f35f4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1f35f8: 0xc072ff8  jal         func_1CBFE0
    ctx->pc = 0x1F35F8u;
    SET_GPR_U32(ctx, 31, 0x1F3600u);
    ctx->pc = 0x1F35FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F35F8u;
    // 0x1f35fc: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CBFE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CBFE0u, 0x1F35F8u, 0x1F3600u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F3600u;
label_1f3600:
    // 0x1f3600: 0x2e0282d  daddu       $a1, $s7, $zero
    ctx->pc = 0x1f3600u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f3604: 0x8fa40050  lw          $a0, 0x50($sp)
    ctx->pc = 0x1f3604u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1f3608: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x1f3608u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f360c: 0x280382d  daddu       $a3, $s4, $zero
    ctx->pc = 0x1f360cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f3610: 0xc07db2e  jal         func_1F6CB8
    ctx->pc = 0x1F3610u;
    SET_GPR_U32(ctx, 31, 0x1F3618u);
    ctx->pc = 0x1F3614u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F3610u;
    // 0x1f3614: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F6CB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F6CB8u, 0x1F3610u, 0x1F3618u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F3618u;
label_1f3618:
    // 0x1f3618: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x1f3618u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f361c: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1f361cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1f3620: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1f3620u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f3624: 0xc072ff8  jal         func_1CBFE0
    ctx->pc = 0x1F3624u;
    SET_GPR_U32(ctx, 31, 0x1F362Cu);
    ctx->pc = 0x1F3628u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F3624u;
    // 0x1f3628: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CBFE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CBFE0u, 0x1F3624u, 0x1F362Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F362Cu;
label_1f362c:
    // 0x1f362c: 0xc07f446  jal         func_1FD118
    ctx->pc = 0x1F362Cu;
    SET_GPR_U32(ctx, 31, 0x1F3634u);
    ctx->pc = 0x1F3630u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F362Cu;
    // 0x1f3630: 0x50a823  subu        $s5, $v0, $s0 (Delay Slot)
    SET_GPR_S32(ctx, 21, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD118u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD118u, 0x1F362Cu, 0x1F3634u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F3634u;
label_1f3634:
    // 0x1f3634: 0x8fc40018  lw          $a0, 0x18($fp)
    ctx->pc = 0x1f3634u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 24)));
    // 0x1f3638: 0x52282f  dsubu       $a1, $v0, $s2
    ctx->pc = 0x1f3638u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) - GPR_U64(ctx, 18));
    // 0x1f363c: 0x42140  sll         $a0, $a0, 5
    ctx->pc = 0x1f363cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 5));
    // 0x1f3640: 0x2842021  addu        $a0, $s4, $a0
    ctx->pc = 0x1f3640u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 4)));
    // 0x1f3644: 0xc07f486  jal         func_1FD218
    ctx->pc = 0x1F3644u;
    SET_GPR_U32(ctx, 31, 0x1F364Cu);
    ctx->pc = 0x1F3648u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F3644u;
    // 0x1f3648: 0x24843718  addiu       $a0, $a0, 0x3718 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 14104));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD218u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD218u, 0x1F3644u, 0x1F364Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F364Cu;
label_1f364c:
    // 0x1f364c: 0x8ec2000c  lw          $v0, 0xC($s6)
    ctx->pc = 0x1f364cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 12)));
    // 0x1f3650: 0x8fa60038  lw          $a2, 0x38($sp)
    ctx->pc = 0x1f3650u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1f3654: 0x3c07ff00  lui         $a3, 0xFF00
    ctx->pc = 0x1f3654u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)65280 << 16));
    // 0x1f3658: 0x8fa8003c  lw          $t0, 0x3C($sp)
    ctx->pc = 0x1f3658u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x1f365c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1f365cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f3660: 0x8ec30010  lw          $v1, 0x10($s6)
    ctx->pc = 0x1f3660u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 16)));
    // 0x1f3664: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x1f3664u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x1f3668: 0xaec2000c  sw          $v0, 0xC($s6)
    ctx->pc = 0x1f3668u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 12), GPR_U32(ctx, 2));
    // 0x1f366c: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1f366cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f3670: 0x681821  addu        $v1, $v1, $t0
    ctx->pc = 0x1f3670u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
    // 0x1f3674: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x1f3674u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f3678: 0xaec30010  sw          $v1, 0x10($s6)
    ctx->pc = 0x1f3678u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 16), GPR_U32(ctx, 3));
    // 0x1f367c: 0xc07c61c  jal         func_1F1870
    ctx->pc = 0x1F367Cu;
    SET_GPR_U32(ctx, 31, 0x1F3684u);
    ctx->pc = 0x1F3680u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F367Cu;
    // 0x1f3680: 0x34e70f06  ori         $a3, $a3, 0xF06 (Delay Slot)
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)3846);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F1870u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F1870u, 0x1F367Cu, 0x1F3684u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F3684u;
label_1f3684:
    // 0x1f3684: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1f3684u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f3688: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1f3688u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f368c: 0xc07c5f2  jal         func_1F17C8
    ctx->pc = 0x1F368Cu;
    SET_GPR_U32(ctx, 31, 0x1F3694u);
    ctx->pc = 0x1F3690u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F368Cu;
    // 0x1f3690: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F17C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F17C8u, 0x1F368Cu, 0x1F3694u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F3694u;
label_1f3694:
    // 0x1f3694: 0x12000006  beqz        $s0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1F3694u;
    {
        const bool branch_taken_0x1f3694 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f3694) {
            ctx->pc = 0x1F36B0u;
            goto label_1f36b0;
        }
    }
    ctx->pc = 0x1F369Cu;
    // 0x1f369c: 0xc07d4f2  jal         func_1F53C8
    ctx->pc = 0x1F369Cu;
    SET_GPR_U32(ctx, 31, 0x1F36A4u);
    ctx->pc = 0x1F36A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F369Cu;
    // 0x1f36a0: 0x8fa40040  lw          $a0, 0x40($sp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F53C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F53C8u, 0x1F369Cu, 0x1F36A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F36A4u;
label_1f36a4:
    // 0x1f36a4: 0x1000004b  b           . + 4 + (0x4B << 2)
    ctx->pc = 0x1F36A4u;
    {
        const bool branch_taken_0x1f36a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F36A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F36A4u;
        // 0x1f36a8: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f36a4) {
            ctx->pc = 0x1F37D4u;
            goto label_1f37d4;
        }
    }
    ctx->pc = 0x1F36ACu;
    // 0x1f36ac: 0x0  nop
    ctx->pc = 0x1f36acu;
    // NOP
label_1f36b0:
    // 0x1f36b0: 0x5aa00043  blezl       $s5, . + 4 + (0x43 << 2)
    ctx->pc = 0x1F36B0u;
    {
        const bool branch_taken_0x1f36b0 = (GPR_S32(ctx, 21) <= 0);
        if (branch_taken_0x1f36b0) {
            ctx->pc = 0x1F36B4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F36B0u;
            // 0x1f36b4: 0x8e620168  lw          $v0, 0x168($s3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 360)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F37C0u;
            goto label_1f37c0;
        }
    }
    ctx->pc = 0x1F36B8u;
    // 0x1f36b8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1f36b8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f36bc: 0xc07d4a4  jal         func_1F5290
    ctx->pc = 0x1F36BCu;
    SET_GPR_U32(ctx, 31, 0x1F36C4u);
    ctx->pc = 0x1F36C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F36BCu;
    // 0x1f36c0: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F5290u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F5290u, 0x1F36BCu, 0x1F36C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F36C4u;
label_1f36c4:
    // 0x1f36c4: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1f36c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f36c8: 0xc07cf2c  jal         func_1F3CB0
    ctx->pc = 0x1F36C8u;
    SET_GPR_U32(ctx, 31, 0x1F36D0u);
    ctx->pc = 0x1F36CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F36C8u;
    // 0x1f36cc: 0x8fa50040  lw          $a1, 0x40($sp) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F3CB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F3CB0u, 0x1F36C8u, 0x1F36D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F36D0u;
label_1f36d0:
    // 0x1f36d0: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1f36d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f36d4: 0x8fa50040  lw          $a1, 0x40($sp)
    ctx->pc = 0x1f36d4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1f36d8: 0xc07cf9c  jal         func_1F3E70
    ctx->pc = 0x1F36D8u;
    SET_GPR_U32(ctx, 31, 0x1F36E0u);
    ctx->pc = 0x1F36DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F36D8u;
    // 0x1f36dc: 0x2e0302d  daddu       $a2, $s7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F3E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F3E70u, 0x1F36D8u, 0x1F36E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F36E0u;
label_1f36e0:
    // 0x1f36e0: 0x8e640088  lw          $a0, 0x88($s3)
    ctx->pc = 0x1f36e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 136)));
    // 0x1f36e4: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x1f36e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1f36e8: 0x24070003  addiu       $a3, $zero, 0x3
    ctx->pc = 0x1f36e8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1f36ec: 0x8fc60038  lw          $a2, 0x38($fp)
    ctx->pc = 0x1f36ecu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 56)));
    // 0x1f36f0: 0xac640048  sw          $a0, 0x48($v1)
    ctx->pc = 0x1f36f0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 72), GPR_U32(ctx, 4));
    // 0x1f36f4: 0x8fa30044  lw          $v1, 0x44($sp)
    ctx->pc = 0x1f36f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 68)));
    // 0x1f36f8: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1f36f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1f36fc: 0x8e650174  lw          $a1, 0x174($s3)
    ctx->pc = 0x1f36fcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 372)));
    // 0x1f3700: 0x8fa40040  lw          $a0, 0x40($sp)
    ctx->pc = 0x1f3700u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1f3704: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1f3704u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1f3708: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x1f3708u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x1f370c: 0xac820040  sw          $v0, 0x40($a0)
    ctx->pc = 0x1f370cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 64), GPR_U32(ctx, 2));
    // 0x1f3710: 0x8fa3003c  lw          $v1, 0x3C($sp)
    ctx->pc = 0x1f3710u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x1f3714: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x1f3714u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1f3718: 0x8fa40040  lw          $a0, 0x40($sp)
    ctx->pc = 0x1f3718u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1f371c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1f371cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1f3720: 0x10c70007  beq         $a2, $a3, . + 4 + (0x7 << 2)
    ctx->pc = 0x1F3720u;
    {
        const bool branch_taken_0x1f3720 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 7));
        ctx->pc = 0x1F3724u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F3720u;
        // 0x1f3724: 0xac830044  sw          $v1, 0x44($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 68), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f3720) {
            ctx->pc = 0x1F3740u;
            goto label_1f3740;
        }
    }
    ctx->pc = 0x1F3728u;
    // 0x1f3728: 0x8e620168  lw          $v0, 0x168($s3)
    ctx->pc = 0x1f3728u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 360)));
    // 0x1f372c: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x1F372Cu;
    {
        const bool branch_taken_0x1f372c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1f372c) {
            ctx->pc = 0x1F3730u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F372Cu;
            // 0x1f3730: 0xae600168  sw          $zero, 0x168($s3) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 19), 360), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F3744u;
            goto label_1f3744;
        }
    }
    ctx->pc = 0x1F3734u;
    // 0x1f3734: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x1f3734u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1f3738: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1F3738u;
    {
        const bool branch_taken_0x1f3738 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F373Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F3738u;
        // 0x1f373c: 0xae620168  sw          $v0, 0x168($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 360), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f3738) {
            ctx->pc = 0x1F3744u;
            goto label_1f3744;
        }
    }
    ctx->pc = 0x1F3740u;
label_1f3740:
    // 0x1f3740: 0xae600168  sw          $zero, 0x168($s3)
    ctx->pc = 0x1f3740u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 360), GPR_U32(ctx, 0));
label_1f3744:
    // 0x1f3744: 0x8e620168  lw          $v0, 0x168($s3)
    ctx->pc = 0x1f3744u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 360)));
    // 0x1f3748: 0xae60016c  sw          $zero, 0x16C($s3)
    ctx->pc = 0x1f3748u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 364), GPR_U32(ctx, 0));
    // 0x1f374c: 0x14400016  bnez        $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x1F374Cu;
    {
        const bool branch_taken_0x1f374c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F3750u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F374Cu;
        // 0x1f3750: 0xae600170  sw          $zero, 0x170($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 368), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f374c) {
            ctx->pc = 0x1F37A8u;
            goto label_1f37a8;
        }
    }
    ctx->pc = 0x1F3754u;
    // 0x1f3754: 0x8e830038  lw          $v1, 0x38($s4)
    ctx->pc = 0x1f3754u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 56)));
    // 0x1f3758: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x1f3758u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1f375c: 0x1462000a  bne         $v1, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x1F375Cu;
    {
        const bool branch_taken_0x1f375c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1f375c) {
            ctx->pc = 0x1F3788u;
            goto label_1f3788;
        }
    }
    ctx->pc = 0x1F3764u;
    // 0x1f3764: 0x8fc20018  lw          $v0, 0x18($fp)
    ctx->pc = 0x1f3764u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 24)));
    // 0x1f3768: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1f3768u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1f376c: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x1f376cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x1f3770: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1F3770u;
    {
        const bool branch_taken_0x1f3770 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f3770) {
            ctx->pc = 0x1F3788u;
            goto label_1f3788;
        }
    }
    ctx->pc = 0x1F3778u;
    // 0x1f3778: 0xc07d4fc  jal         func_1F53F0
    ctx->pc = 0x1F3778u;
    SET_GPR_U32(ctx, 31, 0x1F3780u);
    ctx->pc = 0x1F377Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F3778u;
    // 0x1f377c: 0x8fa40040  lw          $a0, 0x40($sp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F53F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F53F0u, 0x1F3778u, 0x1F3780u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F3780u;
label_1f3780:
    // 0x1f3780: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1F3780u;
    {
        const bool branch_taken_0x1f3780 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F3784u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F3780u;
        // 0x1f3784: 0x8fa2004c  lw          $v0, 0x4C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f3780) {
            ctx->pc = 0x1F3794u;
            goto label_1f3794;
        }
    }
    ctx->pc = 0x1F3788u;
label_1f3788:
    // 0x1f3788: 0xc07d4f6  jal         func_1F53D8
    ctx->pc = 0x1F3788u;
    SET_GPR_U32(ctx, 31, 0x1F3790u);
    ctx->pc = 0x1F378Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F3788u;
    // 0x1f378c: 0x8fa40040  lw          $a0, 0x40($sp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F53D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F53D8u, 0x1F3788u, 0x1F3790u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F3790u;
label_1f3790:
    // 0x1f3790: 0x8fa2004c  lw          $v0, 0x4C($sp)
    ctx->pc = 0x1f3790u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
label_1f3794:
    // 0x1f3794: 0x8fa40050  lw          $a0, 0x50($sp)
    ctx->pc = 0x1f3794u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1f3798: 0x2446000c  addiu       $a2, $v0, 0xC
    ctx->pc = 0x1f3798u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 12));
    // 0x1f379c: 0xc07705c  jal         func_1DC170
    ctx->pc = 0x1F379Cu;
    SET_GPR_U32(ctx, 31, 0x1F37A4u);
    ctx->pc = 0x1F37A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F379Cu;
    // 0x1f37a0: 0x24450008  addiu       $a1, $v0, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DC170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DC170u, 0x1F379Cu, 0x1F37A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F37A4u;
label_1f37a4:
    // 0x1f37a4: 0xae600084  sw          $zero, 0x84($s3)
    ctx->pc = 0x1f37a4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 132), GPR_U32(ctx, 0));
label_1f37a8:
    // 0x1f37a8: 0x8fc60018  lw          $a2, 0x18($fp)
    ctx->pc = 0x1f37a8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 24)));
    // 0x1f37ac: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1f37acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f37b0: 0xc07e2ae  jal         func_1F8AB8
    ctx->pc = 0x1F37B0u;
    SET_GPR_U32(ctx, 31, 0x1F37B8u);
    ctx->pc = 0x1F37B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F37B0u;
    // 0x1f37b4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F8AB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F8AB8u, 0x1F37B0u, 0x1F37B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F37B8u;
label_1f37b8:
    // 0x1f37b8: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x1F37B8u;
    {
        const bool branch_taken_0x1f37b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F37BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F37B8u;
        // 0x1f37bc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f37b8) {
            ctx->pc = 0x1F37D4u;
            goto label_1f37d4;
        }
    }
    ctx->pc = 0x1F37C0u;
label_1f37c0:
    // 0x1f37c0: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x1F37C0u;
    {
        const bool branch_taken_0x1f37c0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1f37c0) {
            ctx->pc = 0x1F37C4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F37C0u;
            // 0x1f37c4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F37D4u;
            goto label_1f37d4;
        }
    }
    ctx->pc = 0x1F37C8u;
    // 0x1f37c8: 0xc07d4f2  jal         func_1F53C8
    ctx->pc = 0x1F37C8u;
    SET_GPR_U32(ctx, 31, 0x1F37D0u);
    ctx->pc = 0x1F37CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F37C8u;
    // 0x1f37cc: 0x8fa40040  lw          $a0, 0x40($sp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F53C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F53C8u, 0x1F37C8u, 0x1F37D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F37D0u;
label_1f37d0:
    // 0x1f37d0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1f37d0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1f37d4:
    // 0x1f37d4: 0xdfb00060  ld          $s0, 0x60($sp)
    ctx->pc = 0x1f37d4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1f37d8: 0xdfb10068  ld          $s1, 0x68($sp)
    ctx->pc = 0x1f37d8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1f37dc: 0xdfb20070  ld          $s2, 0x70($sp)
    ctx->pc = 0x1f37dcu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1f37e0: 0xdfb30078  ld          $s3, 0x78($sp)
    ctx->pc = 0x1f37e0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x1f37e4: 0xdfb40080  ld          $s4, 0x80($sp)
    ctx->pc = 0x1f37e4u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1f37e8: 0xdfb50088  ld          $s5, 0x88($sp)
    ctx->pc = 0x1f37e8u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x1f37ec: 0xdfb60090  ld          $s6, 0x90($sp)
    ctx->pc = 0x1f37ecu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1f37f0: 0xdfb70098  ld          $s7, 0x98($sp)
    ctx->pc = 0x1f37f0u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x1f37f4: 0xdfbe00a0  ld          $fp, 0xA0($sp)
    ctx->pc = 0x1f37f4u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x1f37f8: 0xdfbf00a8  ld          $ra, 0xA8($sp)
    ctx->pc = 0x1f37f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x1f37fc: 0x3e00008  jr          $ra
    ctx->pc = 0x1F37FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F3800u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F37FCu;
        // 0x1f3800: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F37FCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F3804u;
    // 0x1f3804: 0x0  nop
    ctx->pc = 0x1f3804u;
    // NOP
}
