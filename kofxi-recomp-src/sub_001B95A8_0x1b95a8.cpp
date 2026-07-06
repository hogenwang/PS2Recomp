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

// Function: sub_001B95A8
// Address: 0x1b95a8 - 0x1b96d8
void sub_001B95A8_0x1b95a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001B95A8_0x1b95a8");
#endif

    switch (ctx->pc) {
        case 0x1b95ecu: goto label_1b95ec;
        case 0x1b95f8u: goto label_1b95f8;
        case 0x1b9604u: goto label_1b9604;
        case 0x1b9614u: goto label_1b9614;
        case 0x1b964cu: goto label_1b964c;
        case 0x1b9658u: goto label_1b9658;
        case 0x1b9664u: goto label_1b9664;
        default: break;
    }

    ctx->pc = 0x1b95a8u;

    // 0x1b95a8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1b95a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1b95ac: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1b95acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1b95b0: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x1b95b0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b95b4: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1b95b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1b95b8: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x1b95b8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b95bc: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x1b95bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x1b95c0: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x1b95c0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b95c4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1b95c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1b95c8: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1b95c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1b95cc: 0x92420001  lbu         $v0, 0x1($s2)
    ctx->pc = 0x1b95ccu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 1)));
    // 0x1b95d0: 0x21e00  sll         $v1, $v0, 24
    ctx->pc = 0x1b95d0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 24));
    // 0x1b95d4: 0x2442fffd  addiu       $v0, $v0, -0x3
    ctx->pc = 0x1b95d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967293));
    // 0x1b95d8: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x1b95d8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x1b95dc: 0x10400016  beqz        $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x1B95DCu;
    {
        const bool branch_taken_0x1b95dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B95E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B95DCu;
        // 0x1b95e0: 0x31e03  sra         $v1, $v1, 24 (Delay Slot)
        SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b95dc) {
            ctx->pc = 0x1B9638u;
            goto label_1b9638;
        }
    }
    ctx->pc = 0x1B95E4u;
    // 0x1b95e4: 0xc06d896  jal         func_1B6258
    ctx->pc = 0x1B95E4u;
    SET_GPR_U32(ctx, 31, 0x1B95ECu);
    ctx->pc = 0x1B95E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B95E4u;
    // 0x1b95e8: 0x8e440004  lw          $a0, 0x4($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B6258u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B6258u, 0x1B95E4u, 0x1B95ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B95ECu;
label_1b95ec:
    // 0x1b95ec: 0x8e440004  lw          $a0, 0x4($s2)
    ctx->pc = 0x1b95ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x1b95f0: 0xc06d830  jal         func_1B60C0
    ctx->pc = 0x1B95F0u;
    SET_GPR_U32(ctx, 31, 0x1B95F8u);
    ctx->pc = 0x1B95F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B95F0u;
    // 0x1b95f4: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B60C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B60C0u, 0x1B95F0u, 0x1B95F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B95F8u;
label_1b95f8:
    // 0x1b95f8: 0x8e44000c  lw          $a0, 0xC($s2)
    ctx->pc = 0x1b95f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
    // 0x1b95fc: 0xc06d2f8  jal         func_1B4BE0
    ctx->pc = 0x1B95FCu;
    SET_GPR_U32(ctx, 31, 0x1B9604u);
    ctx->pc = 0x1B9600u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B95FCu;
    // 0x1b9600: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B4BE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B4BE0u, 0x1B95FCu, 0x1B9604u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B9604u;
label_1b9604:
    // 0x1b9604: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1b9604u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b9608: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1b9608u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b960c: 0xc06e9ee  jal         func_1BA7B8
    ctx->pc = 0x1B960Cu;
    SET_GPR_U32(ctx, 31, 0x1B9614u);
    ctx->pc = 0x1B9610u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B960Cu;
    // 0x1b9610: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BA7B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BA7B8u, 0x1B960Cu, 0x1B9614u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B9614u;
label_1b9614:
    // 0x1b9614: 0x8e4300a8  lw          $v1, 0xA8($s2)
    ctx->pc = 0x1b9614u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 168)));
    // 0x1b9618: 0x8e4400a4  lw          $a0, 0xA4($s2)
    ctx->pc = 0x1b9618u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 164)));
    // 0x1b961c: 0x2038023  subu        $s0, $s0, $v1
    ctx->pc = 0x1b961cu;
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x1b9620: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x1b9620u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x1b9624: 0x2308823  subu        $s1, $s1, $s0
    ctx->pc = 0x1b9624u;
    SET_GPR_S32(ctx, 17, (int32_t)SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 16)));
    // 0x1b9628: 0x2248821  addu        $s1, $s1, $a0
    ctx->pc = 0x1b9628u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
    // 0x1b962c: 0x1000001c  b           . + 4 + (0x1C << 2)
    ctx->pc = 0x1B962Cu;
    {
        const bool branch_taken_0x1b962c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B9630u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B962Cu;
        // 0x1b9630: 0xae710000  sw          $s1, 0x0($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b962c) {
            ctx->pc = 0x1B96A0u;
            goto label_1b96a0;
        }
    }
    ctx->pc = 0x1B9634u;
    // 0x1b9634: 0x0  nop
    ctx->pc = 0x1b9634u;
    // NOP
label_1b9638:
    // 0x1b9638: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x1b9638u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1b963c: 0x54620016  bnel        $v1, $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x1B963Cu;
    {
        const bool branch_taken_0x1b963c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1b963c) {
            ctx->pc = 0x1B9640u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1B963Cu;
            // 0x1b9640: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1B9698u;
            goto label_1b9698;
        }
    }
    ctx->pc = 0x1B9644u;
    // 0x1b9644: 0xc06d8b4  jal         func_1B62D0
    ctx->pc = 0x1B9644u;
    SET_GPR_U32(ctx, 31, 0x1B964Cu);
    ctx->pc = 0x1B9648u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B9644u;
    // 0x1b9648: 0x8e440004  lw          $a0, 0x4($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B62D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B62D0u, 0x1B9644u, 0x1B964Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B964Cu;
label_1b964c:
    // 0x1b964c: 0x8e440004  lw          $a0, 0x4($s2)
    ctx->pc = 0x1b964cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x1b9650: 0xc06d896  jal         func_1B6258
    ctx->pc = 0x1B9650u;
    SET_GPR_U32(ctx, 31, 0x1B9658u);
    ctx->pc = 0x1B9654u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B9650u;
    // 0x1b9654: 0xae620000  sw          $v0, 0x0($s3) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B6258u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B6258u, 0x1B9650u, 0x1B9658u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B9658u;
label_1b9658:
    // 0x1b9658: 0x8e440004  lw          $a0, 0x4($s2)
    ctx->pc = 0x1b9658u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x1b965c: 0xc06d8a2  jal         func_1B6288
    ctx->pc = 0x1B965Cu;
    SET_GPR_U32(ctx, 31, 0x1B9664u);
    ctx->pc = 0x1B9660u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B965Cu;
    // 0x1b9660: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B6288u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B6288u, 0x1B965Cu, 0x1B9664u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B9664u;
label_1b9664:
    // 0x1b9664: 0x24030010  addiu       $v1, $zero, 0x10
    ctx->pc = 0x1b9664u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x1b9668: 0x62001a  div         $zero, $v1, $v0
    ctx->pc = 0x1b9668u;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x1b966c: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x1B966Cu;
    {
        const bool branch_taken_0x1b966c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b966c) {
            ctx->pc = 0x1B9670u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1B966Cu;
            // 0x1b9670: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x1B9674u;
            goto label_1b9674;
        }
    }
    ctx->pc = 0x1B9674u;
label_1b9674:
    // 0x1b9674: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x1b9674u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x1b9678: 0x1812  mflo        $v1
    ctx->pc = 0x1b9678u;
    SET_GPR_U64(ctx, 3, ctx->lo);
    // 0x1b967c: 0x431018  mult        $v0, $v0, $v1
    ctx->pc = 0x1b967cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x1b9680: 0xae620000  sw          $v0, 0x0($s3)
    ctx->pc = 0x1b9680u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
    // 0x1b9684: 0x8e4300a4  lw          $v1, 0xA4($s2)
    ctx->pc = 0x1b9684u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 164)));
    // 0x1b9688: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1b9688u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1b968c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1B968Cu;
    {
        const bool branch_taken_0x1b968c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B9690u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B968Cu;
        // 0x1b9690: 0xae620000  sw          $v0, 0x0($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b968c) {
            ctx->pc = 0x1B96A0u;
            goto label_1b96a0;
        }
    }
    ctx->pc = 0x1B9694u;
    // 0x1b9694: 0x0  nop
    ctx->pc = 0x1b9694u;
    // NOP
label_1b9698:
    // 0x1b9698: 0xae600000  sw          $zero, 0x0($s3)
    ctx->pc = 0x1b9698u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 0));
    // 0x1b969c: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x1b969cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_1b96a0:
    // 0x1b96a0: 0x8e420088  lw          $v0, 0x88($s2)
    ctx->pc = 0x1b96a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 136)));
    // 0x1b96a4: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x1b96a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x1b96a8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1b96a8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b96ac: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1b96acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1b96b0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1b96b0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1b96b4: 0x28640000  slti        $a0, $v1, 0x0
    ctx->pc = 0x1b96b4u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x1b96b8: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1b96b8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b96bc: 0x4180b  movn        $v1, $zero, $a0
    ctx->pc = 0x1b96bcu;
    if (GPR_U64(ctx, 4) != 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 0));
    // 0x1b96c0: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1b96c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1b96c4: 0xae630000  sw          $v1, 0x0($s3)
    ctx->pc = 0x1b96c4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 3));
    // 0x1b96c8: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1b96c8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1b96cc: 0x3e00008  jr          $ra
    ctx->pc = 0x1B96CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B96D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B96CCu;
        // 0x1b96d0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B96CCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B96D4u;
    // 0x1b96d4: 0x0  nop
    ctx->pc = 0x1b96d4u;
    // NOP
    if (ctx->pc == 0x1b96d4u) { ctx->pc = 0x1b96d8u; }
}
