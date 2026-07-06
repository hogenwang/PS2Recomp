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

// Function: sub_001E9FD0
// Address: 0x1e9fd0 - 0x1ea108
void sub_001E9FD0_0x1e9fd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001E9FD0_0x1e9fd0");
#endif

    switch (ctx->pc) {
        case 0x1ea008u: goto label_1ea008;
        case 0x1ea038u: goto label_1ea038;
        case 0x1ea058u: goto label_1ea058;
        case 0x1ea078u: goto label_1ea078;
        case 0x1ea094u: goto label_1ea094;
        case 0x1ea0a8u: goto label_1ea0a8;
        case 0x1ea0c0u: goto label_1ea0c0;
        case 0x1ea0d4u: goto label_1ea0d4;
        case 0x1ea0e8u: goto label_1ea0e8;
        default: break;
    }

    ctx->pc = 0x1e9fd0u;

    // 0x1e9fd0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1e9fd0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1e9fd4: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x1e9fd4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    // 0x1e9fd8: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x1e9fd8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e9fdc: 0xffb10028  sd          $s1, 0x28($sp)
    ctx->pc = 0x1e9fdcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 17));
    // 0x1e9fe0: 0x26110008  addiu       $s1, $s0, 0x8
    ctx->pc = 0x1e9fe0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
    // 0x1e9fe4: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x1e9fe4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x1e9fe8: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x1e9fe8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e9fec: 0xffb30038  sd          $s3, 0x38($sp)
    ctx->pc = 0x1e9fecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 19));
    // 0x1e9ff0: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x1e9ff0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e9ff4: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x1e9ff4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x1e9ff8: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1e9ff8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e9ffc: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1e9ffcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ea000: 0xc07a842  jal         func_1EA108
    ctx->pc = 0x1EA000u;
    SET_GPR_U32(ctx, 31, 0x1EA008u);
    ctx->pc = 0x1EA004u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EA000u;
    // 0x1ea004: 0x8e060004  lw          $a2, 0x4($s0) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EA108u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EA108u, 0x1EA000u, 0x1EA008u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EA008u;
label_1ea008:
    // 0x1ea008: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x1ea008u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1ea00c: 0x8e020028  lw          $v0, 0x28($s0)
    ctx->pc = 0x1ea00cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
    // 0x1ea010: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1ea010u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ea014: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x1ea014u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ea018: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x1ea018u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ea01c: 0x62001a  div         $zero, $v1, $v0
    ctx->pc = 0x1ea01cu;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x1ea020: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1ea020u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ea024: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x1EA024u;
    {
        const bool branch_taken_0x1ea024 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ea024) {
            ctx->pc = 0x1EA028u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1EA024u;
            // 0x1ea028: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x1EA02Cu;
            goto label_1ea02c;
        }
    }
    ctx->pc = 0x1EA02Cu;
label_1ea02c:
    // 0x1ea02c: 0x4010  mfhi        $t0
    ctx->pc = 0x1ea02cu;
    SET_GPR_U64(ctx, 8, ctx->hi);
    // 0x1ea030: 0xc07a852  jal         func_1EA148
    ctx->pc = 0x1EA030u;
    SET_GPR_U32(ctx, 31, 0x1EA038u);
    ctx->pc = 0x1EA148u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EA148u, 0x1EA030u, 0x1EA038u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EA038u;
label_1ea038:
    // 0x1ea038: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1ea038u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ea03c: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x1ea03cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ea040: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x1ea040u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ea044: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1ea044u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ea048: 0x14400028  bnez        $v0, . + 4 + (0x28 << 2)
    ctx->pc = 0x1EA048u;
    {
        const bool branch_taken_0x1ea048 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1EA04Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EA048u;
        // 0x1ea04c: 0x24080800  addiu       $t0, $zero, 0x800 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ea048) {
            ctx->pc = 0x1EA0ECu;
            goto label_1ea0ec;
        }
    }
    ctx->pc = 0x1EA050u;
    // 0x1ea050: 0xc07a852  jal         func_1EA148
    ctx->pc = 0x1EA050u;
    SET_GPR_U32(ctx, 31, 0x1EA058u);
    ctx->pc = 0x1EA148u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EA148u, 0x1EA050u, 0x1EA058u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EA058u;
label_1ea058:
    // 0x1ea058: 0x54400025  bnel        $v0, $zero, . + 4 + (0x25 << 2)
    ctx->pc = 0x1EA058u;
    {
        const bool branch_taken_0x1ea058 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ea058) {
            ctx->pc = 0x1EA05Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1EA058u;
            // 0x1ea05c: 0xdfb00020  ld          $s0, 0x20($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1EA0F0u;
            goto label_1ea0f0;
        }
    }
    ctx->pc = 0x1EA060u;
    // 0x1ea060: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1ea060u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ea064: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x1ea064u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ea068: 0x24070002  addiu       $a3, $zero, 0x2
    ctx->pc = 0x1ea068u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1ea06c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1ea06cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ea070: 0xc07a852  jal         func_1EA148
    ctx->pc = 0x1EA070u;
    SET_GPR_U32(ctx, 31, 0x1EA078u);
    ctx->pc = 0x1EA074u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EA070u;
    // 0x1ea074: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EA148u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EA148u, 0x1EA070u, 0x1EA078u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EA078u;
label_1ea078:
    // 0x1ea078: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1ea078u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ea07c: 0x24080003  addiu       $t0, $zero, 0x3
    ctx->pc = 0x1ea07cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1ea080: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x1ea080u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ea084: 0x14400019  bnez        $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x1EA084u;
    {
        const bool branch_taken_0x1ea084 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1EA088u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EA084u;
        // 0x1ea088: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ea084) {
            ctx->pc = 0x1EA0ECu;
            goto label_1ea0ec;
        }
    }
    ctx->pc = 0x1EA08Cu;
    // 0x1ea08c: 0xc07a8d2  jal         func_1EA348
    ctx->pc = 0x1EA08Cu;
    SET_GPR_U32(ctx, 31, 0x1EA094u);
    ctx->pc = 0x1EA090u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EA08Cu;
    // 0x1ea090: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EA348u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EA348u, 0x1EA08Cu, 0x1EA094u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EA094u;
label_1ea094:
    // 0x1ea094: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1ea094u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ea098: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x1ea098u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ea09c: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x1ea09cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ea0a0: 0xc07a900  jal         func_1EA400
    ctx->pc = 0x1EA0A0u;
    SET_GPR_U32(ctx, 31, 0x1EA0A8u);
    ctx->pc = 0x1EA0A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EA0A0u;
    // 0x1ea0a4: 0x24070004  addiu       $a3, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EA400u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EA400u, 0x1EA0A0u, 0x1EA0A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EA0A8u;
label_1ea0a8:
    // 0x1ea0a8: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1ea0a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ea0ac: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x1ea0acu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ea0b0: 0x24080005  addiu       $t0, $zero, 0x5
    ctx->pc = 0x1ea0b0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1ea0b4: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1ea0b4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ea0b8: 0xc07a8d2  jal         func_1EA348
    ctx->pc = 0x1EA0B8u;
    SET_GPR_U32(ctx, 31, 0x1EA0C0u);
    ctx->pc = 0x1EA0BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EA0B8u;
    // 0x1ea0bc: 0x220382d  daddu       $a3, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EA348u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EA348u, 0x1EA0B8u, 0x1EA0C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EA0C0u;
label_1ea0c0:
    // 0x1ea0c0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1ea0c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ea0c4: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x1ea0c4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ea0c8: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x1ea0c8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ea0cc: 0xc07a900  jal         func_1EA400
    ctx->pc = 0x1EA0CCu;
    SET_GPR_U32(ctx, 31, 0x1EA0D4u);
    ctx->pc = 0x1EA0D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EA0CCu;
    // 0x1ea0d0: 0x24070006  addiu       $a3, $zero, 0x6 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EA400u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EA400u, 0x1EA0CCu, 0x1EA0D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EA0D4u;
label_1ea0d4:
    // 0x1ea0d4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1ea0d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ea0d8: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x1ea0d8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ea0dc: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x1ea0dcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ea0e0: 0xc07a94a  jal         func_1EA528
    ctx->pc = 0x1EA0E0u;
    SET_GPR_U32(ctx, 31, 0x1EA0E8u);
    ctx->pc = 0x1EA0E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EA0E0u;
    // 0x1ea0e4: 0x24070007  addiu       $a3, $zero, 0x7 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EA528u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EA528u, 0x1EA0E0u, 0x1EA0E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EA0E8u;
label_1ea0e8:
    // 0x1ea0e8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1ea0e8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1ea0ec:
    // 0x1ea0ec: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x1ea0ecu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_1ea0f0:
    // 0x1ea0f0: 0xdfb10028  ld          $s1, 0x28($sp)
    ctx->pc = 0x1ea0f0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1ea0f4: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x1ea0f4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1ea0f8: 0xdfb30038  ld          $s3, 0x38($sp)
    ctx->pc = 0x1ea0f8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1ea0fc: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x1ea0fcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1ea100: 0x3e00008  jr          $ra
    ctx->pc = 0x1EA100u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1EA104u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EA100u;
        // 0x1ea104: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1EA100u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1EA108u;
}
