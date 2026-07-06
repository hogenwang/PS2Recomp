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

// Function: sub_0033A5F0
// Address: 0x33a5f0 - 0x33a6f0
void sub_0033A5F0_0x33a5f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0033A5F0_0x33a5f0");
#endif

    switch (ctx->pc) {
        case 0x33a60cu: goto label_33a60c;
        case 0x33a614u: goto label_33a614;
        case 0x33a678u: goto label_33a678;
        default: break;
    }

    ctx->pc = 0x33a5f0u;

    // 0x33a5f0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x33a5f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x33a5f4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x33a5f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x33a5f8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x33a5f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x33a5fc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x33a5fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x33a600: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x33a600u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33a604: 0x3c10009c  lui         $s0, 0x9C
    ctx->pc = 0x33a604u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)156 << 16));
    // 0x33a608: 0x2610db50  addiu       $s0, $s0, -0x24B0
    ctx->pc = 0x33a608u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294957904));
label_33a60c:
    // 0x33a60c: 0xc05c6b4  jal         func_171AD0
    ctx->pc = 0x33A60Cu;
    SET_GPR_U32(ctx, 31, 0x33A614u);
    ctx->pc = 0x33A610u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33A60Cu;
    // 0x33a610: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x171AD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x171AD0u, 0x33A60Cu, 0x33A614u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33A614u;
label_33a614:
    // 0x33a614: 0xae000064  sw          $zero, 0x64($s0)
    ctx->pc = 0x33a614u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 0));
    // 0x33a618: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x33a618u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33a61c: 0xae000068  sw          $zero, 0x68($s0)
    ctx->pc = 0x33a61cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 104), GPR_U32(ctx, 0));
    // 0x33a620: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x33a620u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33a624: 0xae00006c  sw          $zero, 0x6C($s0)
    ctx->pc = 0x33a624u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 108), GPR_U32(ctx, 0));
    // 0x33a628: 0xae000078  sw          $zero, 0x78($s0)
    ctx->pc = 0x33a628u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 120), GPR_U32(ctx, 0));
    // 0x33a62c: 0xae000140  sw          $zero, 0x140($s0)
    ctx->pc = 0x33a62cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 320), GPR_U32(ctx, 0));
    // 0x33a630: 0xae000070  sw          $zero, 0x70($s0)
    ctx->pc = 0x33a630u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 112), GPR_U32(ctx, 0));
    // 0x33a634: 0xae00007c  sw          $zero, 0x7C($s0)
    ctx->pc = 0x33a634u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 124), GPR_U32(ctx, 0));
    // 0x33a638: 0xae000144  sw          $zero, 0x144($s0)
    ctx->pc = 0x33a638u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 324), GPR_U32(ctx, 0));
    // 0x33a63c: 0xae000074  sw          $zero, 0x74($s0)
    ctx->pc = 0x33a63cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 116), GPR_U32(ctx, 0));
    // 0x33a640: 0xae000080  sw          $zero, 0x80($s0)
    ctx->pc = 0x33a640u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 128), GPR_U32(ctx, 0));
    // 0x33a644: 0xae000148  sw          $zero, 0x148($s0)
    ctx->pc = 0x33a644u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 328), GPR_U32(ctx, 0));
    // 0x33a648: 0xae000090  sw          $zero, 0x90($s0)
    ctx->pc = 0x33a648u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 144), GPR_U32(ctx, 0));
    // 0x33a64c: 0xae0000a8  sw          $zero, 0xA8($s0)
    ctx->pc = 0x33a64cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 168), GPR_U32(ctx, 0));
    // 0x33a650: 0xae000094  sw          $zero, 0x94($s0)
    ctx->pc = 0x33a650u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 148), GPR_U32(ctx, 0));
    // 0x33a654: 0xae0000ac  sw          $zero, 0xAC($s0)
    ctx->pc = 0x33a654u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 172), GPR_U32(ctx, 0));
    // 0x33a658: 0xae000098  sw          $zero, 0x98($s0)
    ctx->pc = 0x33a658u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 152), GPR_U32(ctx, 0));
    // 0x33a65c: 0xae0000b0  sw          $zero, 0xB0($s0)
    ctx->pc = 0x33a65cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 176), GPR_U32(ctx, 0));
    // 0x33a660: 0xae00009c  sw          $zero, 0x9C($s0)
    ctx->pc = 0x33a660u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 156), GPR_U32(ctx, 0));
    // 0x33a664: 0xae0000b4  sw          $zero, 0xB4($s0)
    ctx->pc = 0x33a664u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 180), GPR_U32(ctx, 0));
    // 0x33a668: 0xae0000a0  sw          $zero, 0xA0($s0)
    ctx->pc = 0x33a668u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 160), GPR_U32(ctx, 0));
    // 0x33a66c: 0xae0000b8  sw          $zero, 0xB8($s0)
    ctx->pc = 0x33a66cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 184), GPR_U32(ctx, 0));
    // 0x33a670: 0xae0000a4  sw          $zero, 0xA4($s0)
    ctx->pc = 0x33a670u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 164), GPR_U32(ctx, 0));
    // 0x33a674: 0xae0000bc  sw          $zero, 0xBC($s0)
    ctx->pc = 0x33a674u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 188), GPR_U32(ctx, 0));
label_33a678:
    // 0x33a678: 0xac8000c0  sw          $zero, 0xC0($a0)
    ctx->pc = 0x33a678u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 192), GPR_U32(ctx, 0));
    // 0x33a67c: 0xac800100  sw          $zero, 0x100($a0)
    ctx->pc = 0x33a67cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 256), GPR_U32(ctx, 0));
    // 0x33a680: 0x24a50008  addiu       $a1, $a1, 0x8
    ctx->pc = 0x33a680u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
    // 0x33a684: 0xac8000c4  sw          $zero, 0xC4($a0)
    ctx->pc = 0x33a684u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 196), GPR_U32(ctx, 0));
    // 0x33a688: 0x28a30010  slti        $v1, $a1, 0x10
    ctx->pc = 0x33a688u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)16) ? 1 : 0);
    // 0x33a68c: 0xac800104  sw          $zero, 0x104($a0)
    ctx->pc = 0x33a68cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 260), GPR_U32(ctx, 0));
    // 0x33a690: 0xac8000c8  sw          $zero, 0xC8($a0)
    ctx->pc = 0x33a690u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 200), GPR_U32(ctx, 0));
    // 0x33a694: 0xac800108  sw          $zero, 0x108($a0)
    ctx->pc = 0x33a694u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 264), GPR_U32(ctx, 0));
    // 0x33a698: 0xac8000cc  sw          $zero, 0xCC($a0)
    ctx->pc = 0x33a698u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 204), GPR_U32(ctx, 0));
    // 0x33a69c: 0xac80010c  sw          $zero, 0x10C($a0)
    ctx->pc = 0x33a69cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 268), GPR_U32(ctx, 0));
    // 0x33a6a0: 0xac8000d0  sw          $zero, 0xD0($a0)
    ctx->pc = 0x33a6a0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 208), GPR_U32(ctx, 0));
    // 0x33a6a4: 0xac800110  sw          $zero, 0x110($a0)
    ctx->pc = 0x33a6a4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 272), GPR_U32(ctx, 0));
    // 0x33a6a8: 0xac8000d4  sw          $zero, 0xD4($a0)
    ctx->pc = 0x33a6a8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 212), GPR_U32(ctx, 0));
    // 0x33a6ac: 0xac800114  sw          $zero, 0x114($a0)
    ctx->pc = 0x33a6acu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 276), GPR_U32(ctx, 0));
    // 0x33a6b0: 0xac8000d8  sw          $zero, 0xD8($a0)
    ctx->pc = 0x33a6b0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 216), GPR_U32(ctx, 0));
    // 0x33a6b4: 0xac800118  sw          $zero, 0x118($a0)
    ctx->pc = 0x33a6b4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 280), GPR_U32(ctx, 0));
    // 0x33a6b8: 0xac8000dc  sw          $zero, 0xDC($a0)
    ctx->pc = 0x33a6b8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 220), GPR_U32(ctx, 0));
    // 0x33a6bc: 0xac80011c  sw          $zero, 0x11C($a0)
    ctx->pc = 0x33a6bcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 284), GPR_U32(ctx, 0));
    // 0x33a6c0: 0x1460ffed  bnez        $v1, . + 4 + (-0x13 << 2)
    ctx->pc = 0x33A6C0u;
    {
        const bool branch_taken_0x33a6c0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x33A6C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33A6C0u;
        // 0x33a6c4: 0x24840020  addiu       $a0, $a0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33a6c0) {
            ctx->pc = 0x33A678u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_33a678;
        }
    }
    ctx->pc = 0x33A6C8u;
    // 0x33a6c8: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x33a6c8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x33a6cc: 0x2a230004  slti        $v1, $s1, 0x4
    ctx->pc = 0x33a6ccu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x33a6d0: 0x1460ffce  bnez        $v1, . + 4 + (-0x32 << 2)
    ctx->pc = 0x33A6D0u;
    {
        const bool branch_taken_0x33a6d0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x33A6D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33A6D0u;
        // 0x33a6d4: 0x26100248  addiu       $s0, $s0, 0x248 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 584));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33a6d0) {
            ctx->pc = 0x33A60Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_33a60c;
        }
    }
    ctx->pc = 0x33A6D8u;
    // 0x33a6d8: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x33a6d8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x33a6dc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x33a6dcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x33a6e0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x33a6e0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x33a6e4: 0x3e00008  jr          $ra
    ctx->pc = 0x33A6E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x33A6E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33A6E4u;
        // 0x33a6e8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x33A6E4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x33A6ECu;
    // 0x33a6ec: 0x0  nop
    ctx->pc = 0x33a6ecu;
    // NOP
}
