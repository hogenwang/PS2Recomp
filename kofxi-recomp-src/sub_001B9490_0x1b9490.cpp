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

// Function: sub_001B9490
// Address: 0x1b9490 - 0x1b95a8
void sub_001B9490_0x1b9490(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001B9490_0x1b9490");
#endif

    switch (ctx->pc) {
        case 0x1b94d0u: goto label_1b94d0;
        case 0x1b94ecu: goto label_1b94ec;
        case 0x1b94f8u: goto label_1b94f8;
        case 0x1b9504u: goto label_1b9504;
        case 0x1b957cu: goto label_1b957c;
        case 0x1b958cu: goto label_1b958c;
        default: break;
    }

    ctx->pc = 0x1b9490u;

    // 0x1b9490: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1b9490u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1b9494: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1b9494u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1b9498: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1b9498u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b949c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1b949cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1b94a0: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1b94a0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b94a4: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1b94a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1b94a8: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x1b94a8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b94ac: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x1b94acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x1b94b0: 0x92020001  lbu         $v0, 0x1($s0)
    ctx->pc = 0x1b94b0u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1)));
    // 0x1b94b4: 0x21e00  sll         $v1, $v0, 24
    ctx->pc = 0x1b94b4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 24));
    // 0x1b94b8: 0x2442fffd  addiu       $v0, $v0, -0x3
    ctx->pc = 0x1b94b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967293));
    // 0x1b94bc: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x1b94bcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x1b94c0: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1B94C0u;
    {
        const bool branch_taken_0x1b94c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B94C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B94C0u;
        // 0x1b94c4: 0x31e03  sra         $v1, $v1, 24 (Delay Slot)
        SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b94c0) {
            ctx->pc = 0x1B94D8u;
            goto label_1b94d8;
        }
    }
    ctx->pc = 0x1B94C8u;
    // 0x1b94c8: 0xc06d2f2  jal         func_1B4BC8
    ctx->pc = 0x1B94C8u;
    SET_GPR_U32(ctx, 31, 0x1B94D0u);
    ctx->pc = 0x1B94CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B94C8u;
    // 0x1b94cc: 0x8e04000c  lw          $a0, 0xC($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B4BC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B4BC8u, 0x1B94C8u, 0x1B94D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B94D0u;
label_1b94d0:
    // 0x1b94d0: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x1B94D0u;
    {
        const bool branch_taken_0x1b94d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B94D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B94D0u;
        // 0x1b94d4: 0x8e030088  lw          $v1, 0x88($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 136)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b94d0) {
            ctx->pc = 0x1B9534u;
            goto label_1b9534;
        }
    }
    ctx->pc = 0x1B94D8u;
label_1b94d8:
    // 0x1b94d8: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x1b94d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1b94dc: 0x54620012  bnel        $v1, $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x1B94DCu;
    {
        const bool branch_taken_0x1b94dc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1b94dc) {
            ctx->pc = 0x1B94E0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1B94DCu;
            // 0x1b94e0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1B9528u;
            goto label_1b9528;
        }
    }
    ctx->pc = 0x1B94E4u;
    // 0x1b94e4: 0xc06d8b4  jal         func_1B62D0
    ctx->pc = 0x1B94E4u;
    SET_GPR_U32(ctx, 31, 0x1B94ECu);
    ctx->pc = 0x1B94E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B94E4u;
    // 0x1b94e8: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B62D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B62D0u, 0x1B94E4u, 0x1B94ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B94ECu;
label_1b94ec:
    // 0x1b94ec: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x1b94ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1b94f0: 0xc06d896  jal         func_1B6258
    ctx->pc = 0x1B94F0u;
    SET_GPR_U32(ctx, 31, 0x1B94F8u);
    ctx->pc = 0x1B94F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B94F0u;
    // 0x1b94f4: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B6258u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B6258u, 0x1B94F0u, 0x1B94F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B94F8u;
label_1b94f8:
    // 0x1b94f8: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x1b94f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1b94fc: 0xc06d8a2  jal         func_1B6288
    ctx->pc = 0x1B94FCu;
    SET_GPR_U32(ctx, 31, 0x1B9504u);
    ctx->pc = 0x1B9500u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B94FCu;
    // 0x1b9500: 0xae420000  sw          $v0, 0x0($s2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B6288u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B6288u, 0x1B94FCu, 0x1B9504u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B9504u;
label_1b9504:
    // 0x1b9504: 0x24030010  addiu       $v1, $zero, 0x10
    ctx->pc = 0x1b9504u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x1b9508: 0x62001a  div         $zero, $v1, $v0
    ctx->pc = 0x1b9508u;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x1b950c: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x1B950Cu;
    {
        const bool branch_taken_0x1b950c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b950c) {
            ctx->pc = 0x1B9510u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1B950Cu;
            // 0x1b9510: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x1B9514u;
            goto label_1b9514;
        }
    }
    ctx->pc = 0x1B9514u;
label_1b9514:
    // 0x1b9514: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x1b9514u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1b9518: 0x1812  mflo        $v1
    ctx->pc = 0x1b9518u;
    SET_GPR_U64(ctx, 3, ctx->lo);
    // 0x1b951c: 0x431018  mult        $v0, $v0, $v1
    ctx->pc = 0x1b951cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x1b9520: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1B9520u;
    {
        const bool branch_taken_0x1b9520 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B9524u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B9520u;
        // 0x1b9524: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b9520) {
            ctx->pc = 0x1B9530u;
            goto label_1b9530;
        }
    }
    ctx->pc = 0x1B9528u;
label_1b9528:
    // 0x1b9528: 0xae200000  sw          $zero, 0x0($s1)
    ctx->pc = 0x1b9528u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
    // 0x1b952c: 0xae420000  sw          $v0, 0x0($s2)
    ctx->pc = 0x1b952cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
label_1b9530:
    // 0x1b9530: 0x8e030088  lw          $v1, 0x88($s0)
    ctx->pc = 0x1b9530u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 136)));
label_1b9534:
    // 0x1b9534: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x1b9534u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1b9538: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1b9538u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b953c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1b953cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1b9540: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1b9540u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b9544: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x1b9544u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x1b9548: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x1b9548u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1b954c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1b954cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1b9550: 0x3e00008  jr          $ra
    ctx->pc = 0x1B9550u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B9554u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B9550u;
        // 0x1b9554: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B9550u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B9558u;
    // 0x1b9558: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1b9558u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1b955c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1b955cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1b9560: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1b9560u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b9564: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1b9564u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1b9568: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1b9568u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b956c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1b956cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1b9570: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x1b9570u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x1b9574: 0xc06b49a  jal         func_1AD268
    ctx->pc = 0x1B9574u;
    SET_GPR_U32(ctx, 31, 0x1B957Cu);
    ctx->pc = 0x1B9578u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B9574u;
    // 0x1b9578: 0xc0902d  daddu       $s2, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AD268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AD268u, 0x1B9574u, 0x1B957Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B957Cu;
label_1b957c:
    // 0x1b957c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1b957cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b9580: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1b9580u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b9584: 0xc06e56a  jal         func_1B95A8
    ctx->pc = 0x1B9584u;
    SET_GPR_U32(ctx, 31, 0x1B958Cu);
    ctx->pc = 0x1B9588u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B9584u;
    // 0x1b9588: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B95A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B95A8u, 0x1B9584u, 0x1B958Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B958Cu;
label_1b958c:
    // 0x1b958c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1b958cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b9590: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1b9590u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1b9594: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1b9594u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b9598: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x1b9598u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1b959c: 0x806b49c  j           func_1AD270
    ctx->pc = 0x1B959Cu;
    ctx->pc = 0x1B95A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B959Cu;
    // 0x1b95a0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AD270u;
    sub_001AD270_0x1ad270(rdram, ctx, runtime); return;
    ctx->pc = 0x1B95A4u;
    // 0x1b95a4: 0x0  nop
    ctx->pc = 0x1b95a4u;
    // NOP
}
