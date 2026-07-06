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

// Function: sub_0018F5F0
// Address: 0x18f5f0 - 0x18f790
void sub_0018F5F0_0x18f5f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0018F5F0_0x18f5f0");
#endif

    switch (ctx->pc) {
        case 0x18f660u: goto label_18f660;
        case 0x18f66cu: goto label_18f66c;
        case 0x18f6e4u: goto label_18f6e4;
        case 0x18f6fcu: goto label_18f6fc;
        case 0x18f70cu: goto label_18f70c;
        case 0x18f714u: goto label_18f714;
        case 0x18f72cu: goto label_18f72c;
        case 0x18f758u: goto label_18f758;
        case 0x18f760u: goto label_18f760;
        default: break;
    }

    ctx->pc = 0x18f5f0u;

    // 0x18f5f0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x18f5f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x18f5f4: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x18f5f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x18f5f8: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x18f5f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x18f5fc: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x18f5fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x18f600: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x18f600u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x18f604: 0x9043ced0  lbu         $v1, -0x3130($v0)
    ctx->pc = 0x18f604u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294954704)));
    // 0x18f608: 0x24020040  addiu       $v0, $zero, 0x40
    ctx->pc = 0x18f608u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x18f60c: 0x50620058  beql        $v1, $v0, . + 4 + (0x58 << 2)
    ctx->pc = 0x18F60Cu;
    {
        const bool branch_taken_0x18f60c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x18f60c) {
            ctx->pc = 0x18F610u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x18F60Cu;
            // 0x18f610: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x18F770u;
            goto label_18f770;
        }
    }
    ctx->pc = 0x18F614u;
    // 0x18f614: 0x24020030  addiu       $v0, $zero, 0x30
    ctx->pc = 0x18f614u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x18f618: 0x50620042  beql        $v1, $v0, . + 4 + (0x42 << 2)
    ctx->pc = 0x18F618u;
    {
        const bool branch_taken_0x18f618 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x18f618) {
            ctx->pc = 0x18F61Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x18F618u;
            // 0x18f61c: 0x24040005  addiu       $a0, $zero, 0x5 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
            ctx->in_delay_slot = false;
            ctx->pc = 0x18F724u;
            goto label_18f724;
        }
    }
    ctx->pc = 0x18F620u;
    // 0x18f620: 0x24020022  addiu       $v0, $zero, 0x22
    ctx->pc = 0x18f620u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 34));
    // 0x18f624: 0x10620033  beq         $v1, $v0, . + 4 + (0x33 << 2)
    ctx->pc = 0x18F624u;
    {
        const bool branch_taken_0x18f624 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x18f624) {
            ctx->pc = 0x18F6F4u;
            goto label_18f6f4;
        }
    }
    ctx->pc = 0x18F62Cu;
    // 0x18f62c: 0x24080021  addiu       $t0, $zero, 0x21
    ctx->pc = 0x18f62cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 33));
    // 0x18f630: 0x10680029  beq         $v1, $t0, . + 4 + (0x29 << 2)
    ctx->pc = 0x18F630u;
    {
        const bool branch_taken_0x18f630 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 8));
        if (branch_taken_0x18f630) {
            ctx->pc = 0x18F6D8u;
            goto label_18f6d8;
        }
    }
    ctx->pc = 0x18F638u;
    // 0x18f638: 0x24020020  addiu       $v0, $zero, 0x20
    ctx->pc = 0x18f638u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x18f63c: 0x10620014  beq         $v1, $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x18F63Cu;
    {
        const bool branch_taken_0x18f63c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x18f63c) {
            ctx->pc = 0x18F690u;
            goto label_18f690;
        }
    }
    ctx->pc = 0x18F644u;
    // 0x18f644: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x18F644u;
    {
        const bool branch_taken_0x18f644 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x18f644) {
            ctx->pc = 0x18F654u;
            goto label_18f654;
        }
    }
    ctx->pc = 0x18F64Cu;
    // 0x18f64c: 0x10000048  b           . + 4 + (0x48 << 2)
    ctx->pc = 0x18F64Cu;
    {
        const bool branch_taken_0x18f64c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18F650u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18F64Cu;
        // 0x18f650: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18f64c) {
            ctx->pc = 0x18F770u;
            goto label_18f770;
        }
    }
    ctx->pc = 0x18F654u;
label_18f654:
    // 0x18f654: 0x3c10009c  lui         $s0, 0x9C
    ctx->pc = 0x18f654u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)156 << 16));
    // 0x18f658: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x18f658u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18f65c: 0x2610cee0  addiu       $s0, $s0, -0x3120
    ctx->pc = 0x18f65cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294954720));
label_18f660:
    // 0x18f660: 0x26250001  addiu       $a1, $s1, 0x1
    ctx->pc = 0x18f660u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x18f664: 0xc0cb22c  jal         func_32C8B0
    ctx->pc = 0x18F664u;
    SET_GPR_U32(ctx, 31, 0x18F66Cu);
    ctx->pc = 0x18F668u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18F664u;
    // 0x18f668: 0x24040005  addiu       $a0, $zero, 0x5 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32C8B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32C8B0u, 0x18F664u, 0x18F66Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18F66Cu;
label_18f66c:
    // 0x18f66c: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x18f66cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x18f670: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x18f670u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x18f674: 0x2a220004  slti        $v0, $s1, 0x4
    ctx->pc = 0x18f674u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x18f678: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x18F678u;
    {
        const bool branch_taken_0x18f678 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x18F67Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18F678u;
        // 0x18f67c: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18f678) {
            ctx->pc = 0x18F660u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_18f660;
        }
    }
    ctx->pc = 0x18F680u;
    // 0x18f680: 0x24030020  addiu       $v1, $zero, 0x20
    ctx->pc = 0x18f680u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x18f684: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x18f684u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x18f688: 0x10000038  b           . + 4 + (0x38 << 2)
    ctx->pc = 0x18F688u;
    {
        const bool branch_taken_0x18f688 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18F68Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18F688u;
        // 0x18f68c: 0xa043ced0  sb          $v1, -0x3130($v0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 2), 4294954704), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18f688) {
            ctx->pc = 0x18F76Cu;
            goto label_18f76c;
        }
    }
    ctx->pc = 0x18F690u;
label_18f690:
    // 0x18f690: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x18f690u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x18f694: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x18f694u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x18f698: 0x8c47cee0  lw          $a3, -0x3120($v0)
    ctx->pc = 0x18f698u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294954720)));
    // 0x18f69c: 0x3c04009c  lui         $a0, 0x9C
    ctx->pc = 0x18f69cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)156 << 16));
    // 0x18f6a0: 0x3c05009c  lui         $a1, 0x9C
    ctx->pc = 0x18f6a0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)156 << 16));
    // 0x18f6a4: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x18f6a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x18f6a8: 0xac87cef8  sw          $a3, -0x3108($a0)
    ctx->pc = 0x18f6a8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4294954744), GPR_U32(ctx, 7));
    // 0x18f6ac: 0x8c46cee4  lw          $a2, -0x311C($v0)
    ctx->pc = 0x18f6acu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294954724)));
    // 0x18f6b0: 0x3c04009c  lui         $a0, 0x9C
    ctx->pc = 0x18f6b0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)156 << 16));
    // 0x18f6b4: 0xac66cf04  sw          $a2, -0x30FC($v1)
    ctx->pc = 0x18f6b4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294954756), GPR_U32(ctx, 6));
    // 0x18f6b8: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x18f6b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x18f6bc: 0x8c46cee8  lw          $a2, -0x3118($v0)
    ctx->pc = 0x18f6bcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294954728)));
    // 0x18f6c0: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x18f6c0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x18f6c4: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x18f6c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x18f6c8: 0xaca6cf10  sw          $a2, -0x30F0($a1)
    ctx->pc = 0x18f6c8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4294954768), GPR_U32(ctx, 6));
    // 0x18f6cc: 0xa048ced0  sb          $t0, -0x3130($v0)
    ctx->pc = 0x18f6ccu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 4294954704), (uint8_t)GPR_U32(ctx, 8));
    // 0x18f6d0: 0x8c82ceec  lw          $v0, -0x3114($a0)
    ctx->pc = 0x18f6d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294954732)));
    // 0x18f6d4: 0xac62cf1c  sw          $v0, -0x30E4($v1)
    ctx->pc = 0x18f6d4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294954780), GPR_U32(ctx, 2));
label_18f6d8:
    // 0x18f6d8: 0x3c040036  lui         $a0, 0x36
    ctx->pc = 0x18f6d8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)54 << 16));
    // 0x18f6dc: 0xc0c0db4  jal         func_3036D0
    ctx->pc = 0x18F6DCu;
    SET_GPR_U32(ctx, 31, 0x18F6E4u);
    ctx->pc = 0x18F6E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18F6DCu;
    // 0x18f6e0: 0x24844290  addiu       $a0, $a0, 0x4290 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17040));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3036D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3036D0u, 0x18F6DCu, 0x18F6E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18F6E4u;
label_18f6e4:
    // 0x18f6e4: 0x24030022  addiu       $v1, $zero, 0x22
    ctx->pc = 0x18f6e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 34));
    // 0x18f6e8: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x18f6e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x18f6ec: 0x1000001f  b           . + 4 + (0x1F << 2)
    ctx->pc = 0x18F6ECu;
    {
        const bool branch_taken_0x18f6ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18F6F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18F6ECu;
        // 0x18f6f0: 0xa043ced0  sb          $v1, -0x3130($v0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 2), 4294954704), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18f6ec) {
            ctx->pc = 0x18F76Cu;
            goto label_18f76c;
        }
    }
    ctx->pc = 0x18F6F4u;
label_18f6f4:
    // 0x18f6f4: 0xc0c0da8  jal         func_3036A0
    ctx->pc = 0x18F6F4u;
    SET_GPR_U32(ctx, 31, 0x18F6FCu);
    ctx->pc = 0x3036A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3036A0u, 0x18F6F4u, 0x18F6FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18F6FCu;
label_18f6fc:
    // 0x18f6fc: 0x1040001b  beqz        $v0, . + 4 + (0x1B << 2)
    ctx->pc = 0x18F6FCu;
    {
        const bool branch_taken_0x18f6fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x18f6fc) {
            ctx->pc = 0x18F76Cu;
            goto label_18f76c;
        }
    }
    ctx->pc = 0x18F704u;
    // 0x18f704: 0xc063d18  jal         func_18F460
    ctx->pc = 0x18F704u;
    SET_GPR_U32(ctx, 31, 0x18F70Cu);
    ctx->pc = 0x18F460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F460u, 0x18F704u, 0x18F70Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18F70Cu;
label_18f70c:
    // 0x18f70c: 0xc065ffc  jal         func_197FF0
    ctx->pc = 0x18F70Cu;
    SET_GPR_U32(ctx, 31, 0x18F714u);
    ctx->pc = 0x197FF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x197FF0u, 0x18F70Cu, 0x18F714u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18F714u;
label_18f714:
    // 0x18f714: 0x24030030  addiu       $v1, $zero, 0x30
    ctx->pc = 0x18f714u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x18f718: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x18f718u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x18f71c: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x18F71Cu;
    {
        const bool branch_taken_0x18f71c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18F720u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18F71Cu;
        // 0x18f720: 0xa043ced0  sb          $v1, -0x3130($v0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 2), 4294954704), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18f71c) {
            ctx->pc = 0x18F76Cu;
            goto label_18f76c;
        }
    }
    ctx->pc = 0x18F724u;
label_18f724:
    // 0x18f724: 0xc0cb22c  jal         func_32C8B0
    ctx->pc = 0x18F724u;
    SET_GPR_U32(ctx, 31, 0x18F72Cu);
    ctx->pc = 0x18F728u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18F724u;
    // 0x18f728: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32C8B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32C8B0u, 0x18F724u, 0x18F72Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18F72Cu;
label_18f72c:
    // 0x18f72c: 0x3c060036  lui         $a2, 0x36
    ctx->pc = 0x18f72cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)54 << 16));
    // 0x18f730: 0x3c070036  lui         $a3, 0x36
    ctx->pc = 0x18f730u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)54 << 16));
    // 0x18f734: 0x3c080036  lui         $t0, 0x36
    ctx->pc = 0x18f734u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)54 << 16));
    // 0x18f738: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x18f738u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18f73c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x18f73cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18f740: 0x24c64290  addiu       $a2, $a2, 0x4290
    ctx->pc = 0x18f740u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 17040));
    // 0x18f744: 0x24e742a0  addiu       $a3, $a3, 0x42A0
    ctx->pc = 0x18f744u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 17056));
    // 0x18f748: 0x250842b0  addiu       $t0, $t0, 0x42B0
    ctx->pc = 0x18f748u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 17072));
    // 0x18f74c: 0x24090002  addiu       $t1, $zero, 0x2
    ctx->pc = 0x18f74cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x18f750: 0xc0c886c  jal         func_3221B0
    ctx->pc = 0x18F750u;
    SET_GPR_U32(ctx, 31, 0x18F758u);
    ctx->pc = 0x18F754u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18F750u;
    // 0x18f754: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3221B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3221B0u, 0x18F750u, 0x18F758u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18F758u;
label_18f758:
    // 0x18f758: 0xc063d18  jal         func_18F460
    ctx->pc = 0x18F758u;
    SET_GPR_U32(ctx, 31, 0x18F760u);
    ctx->pc = 0x18F460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F460u, 0x18F758u, 0x18F760u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18F760u;
label_18f760:
    // 0x18f760: 0x24030040  addiu       $v1, $zero, 0x40
    ctx->pc = 0x18f760u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x18f764: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x18f764u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x18f768: 0xa043ced0  sb          $v1, -0x3130($v0)
    ctx->pc = 0x18f768u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 4294954704), (uint8_t)GPR_U32(ctx, 3));
label_18f76c:
    // 0x18f76c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x18f76cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_18f770:
    // 0x18f770: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x18f770u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x18f774: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x18f774u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x18f778: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x18f778u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x18f77c: 0x3e00008  jr          $ra
    ctx->pc = 0x18F77Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18F780u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18F77Cu;
        // 0x18f780: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18F77Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x18F784u;
    // 0x18f784: 0x0  nop
    ctx->pc = 0x18f784u;
    // NOP
    // 0x18f788: 0x0  nop
    ctx->pc = 0x18f788u;
    // NOP
    // 0x18f78c: 0x0  nop
    ctx->pc = 0x18f78cu;
    // NOP
}
