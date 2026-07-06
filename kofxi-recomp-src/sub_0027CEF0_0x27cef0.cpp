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

// Function: sub_0027CEF0
// Address: 0x27cef0 - 0x27d028
void sub_0027CEF0_0x27cef0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0027CEF0_0x27cef0");
#endif

    switch (ctx->pc) {
        case 0x27cf20u: goto label_27cf20;
        case 0x27cf40u: goto label_27cf40;
        case 0x27cf58u: goto label_27cf58;
        case 0x27cf60u: goto label_27cf60;
        case 0x27cfb0u: goto label_27cfb0;
        case 0x27cfd4u: goto label_27cfd4;
        case 0x27cff4u: goto label_27cff4;
        case 0x27d008u: goto label_27d008;
        default: break;
    }

    ctx->pc = 0x27cef0u;

label_27cef0:
    // 0x27cef0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x27cef0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x27cef4: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x27cef4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x27cef8: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x27cef8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27cefc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x27cefcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x27cf00: 0x260802d  daddu       $s0, $s3, $zero
    ctx->pc = 0x27cf00u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27cf04: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x27cf04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x27cf08: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x27cf08u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27cf0c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x27cf0cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x27cf10: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x27cf10u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27cf14: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x27CF14u;
    {
        const bool branch_taken_0x27cf14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27CF18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27CF14u;
        // 0x27cf18: 0xffbf0020  sd          $ra, 0x20($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27cf14) {
            ctx->pc = 0x27CF24u;
            goto label_27cf24;
        }
    }
    ctx->pc = 0x27CF1Cu;
    // 0x27cf1c: 0x0  nop
    ctx->pc = 0x27cf1cu;
    // NOP
label_27cf20:
    // 0x27cf20: 0x2028023  subu        $s0, $s0, $v0
    ctx->pc = 0x27cf20u;
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_27cf24:
    // 0x27cf24: 0x1a000013  blez        $s0, . + 4 + (0x13 << 2)
    ctx->pc = 0x27CF24u;
    {
        const bool branch_taken_0x27cf24 = (GPR_S32(ctx, 16) <= 0);
        ctx->pc = 0x27CF28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27CF24u;
        // 0x27cf28: 0x2701023  subu        $v0, $s3, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 19), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27cf24) {
            ctx->pc = 0x27CF74u;
            goto label_27cf74;
        }
    }
    ctx->pc = 0x27CF2Cu;
    // 0x27cf2c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x27cf2cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27cf30: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x27cf30u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27cf34: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x27cf34u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27cf38: 0xc0bf210  jal         func_2FC840
    ctx->pc = 0x27CF38u;
    SET_GPR_U32(ctx, 31, 0x27CF40u);
    ctx->pc = 0x27CF3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27CF38u;
    // 0x27cf3c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FC840u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FC840u, 0x27CF38u, 0x27CF40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27CF40u;
label_27cf40:
    // 0x27cf40: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x27cf40u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x27cf44: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x27cf44u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x27cf48: 0x4410007  bgez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x27CF48u;
    {
        const bool branch_taken_0x27cf48 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x27cf48) {
            ctx->pc = 0x27CF68u;
            goto label_27cf68;
        }
    }
    ctx->pc = 0x27CF50u;
    // 0x27cf50: 0xc0bf0fc  jal         func_2FC3F0
    ctx->pc = 0x27CF50u;
    SET_GPR_U32(ctx, 31, 0x27CF58u);
    ctx->pc = 0x2FC3F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FC3F0u, 0x27CF50u, 0x27CF58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27CF58u;
label_27cf58:
    // 0x27cf58: 0xc09f4a6  jal         func_27D298
    ctx->pc = 0x27CF58u;
    SET_GPR_U32(ctx, 31, 0x27CF60u);
    ctx->pc = 0x27CF5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27CF58u;
    // 0x27cf5c: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x27D298u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27D298u, 0x27CF58u, 0x27CF60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27CF60u;
label_27cf60:
    // 0x27cf60: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x27CF60u;
    {
        const bool branch_taken_0x27cf60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27CF64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27CF60u;
        // 0x27cf64: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27cf60) {
            ctx->pc = 0x27CF78u;
            goto label_27cf78;
        }
    }
    ctx->pc = 0x27CF68u;
label_27cf68:
    // 0x27cf68: 0x1440ffed  bnez        $v0, . + 4 + (-0x13 << 2)
    ctx->pc = 0x27CF68u;
    {
        const bool branch_taken_0x27cf68 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x27CF6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27CF68u;
        // 0x27cf6c: 0x2228821  addu        $s1, $s1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27cf68) {
            ctx->pc = 0x27CF20u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_27cf20;
        }
    }
    ctx->pc = 0x27CF70u;
    // 0x27cf70: 0x2701023  subu        $v0, $s3, $s0
    ctx->pc = 0x27cf70u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 19), GPR_U32(ctx, 16)));
label_27cf74:
    // 0x27cf74: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x27cf74u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_27cf78:
    // 0x27cf78: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x27cf78u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x27cf7c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x27cf7cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x27cf80: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x27cf80u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x27cf84: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x27cf84u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x27cf88: 0x3e00008  jr          $ra
    ctx->pc = 0x27CF88u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x27CF8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27CF88u;
        // 0x27cf8c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x27CF88u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x27CF90u;
    // 0x27cf90: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x27cf90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x27cf94: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x27cf94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x27cf98: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x27cf98u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27cf9c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x27cf9cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x27cfa0: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x27cfa0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x27cfa4: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x27cfa4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x27cfa8: 0xc09ef6c  jal         func_27BDB0
    ctx->pc = 0x27CFA8u;
    SET_GPR_U32(ctx, 31, 0x27CFB0u);
    ctx->pc = 0x27CFACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27CFA8u;
    // 0x27cfac: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x27BDB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27BDB0u, 0x27CFA8u, 0x27CFB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27CFB0u;
label_27cfb0:
    // 0x27cfb0: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x27cfb0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27cfb4: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x27cfb4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x27cfb8: 0x8c433550  lw          $v1, 0x3550($v0)
    ctx->pc = 0x27cfb8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 13648)));
    // 0x27cfbc: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x27cfbcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27cfc0: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x27CFC0u;
    {
        const bool branch_taken_0x27cfc0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x27CFC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27CFC0u;
        // 0x27cfc4: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27cfc0) {
            ctx->pc = 0x27CFE0u;
            goto label_27cfe0;
        }
    }
    ctx->pc = 0x27CFC8u;
    // 0x27cfc8: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x27cfc8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x27cfcc: 0xc09f38e  jal         func_27CE38
    ctx->pc = 0x27CFCCu;
    SET_GPR_U32(ctx, 31, 0x27CFD4u);
    ctx->pc = 0x27CFD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27CFCCu;
    // 0x27cfd0: 0x8c443558  lw          $a0, 0x3558($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 13656)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x27CE38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27CE38u, 0x27CFCCu, 0x27CFD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27CFD4u;
label_27cfd4:
    // 0x27cfd4: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x27CFD4u;
    {
        const bool branch_taken_0x27cfd4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27CFD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27CFD4u;
        // 0x27cfd8: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27cfd4) {
            ctx->pc = 0x27CFF8u;
            goto label_27cff8;
        }
    }
    ctx->pc = 0x27CFDCu;
    // 0x27cfdc: 0x0  nop
    ctx->pc = 0x27cfdcu;
    // NOP
label_27cfe0:
    // 0x27cfe0: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x27cfe0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x27cfe4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x27cfe4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27cfe8: 0x8c44353c  lw          $a0, 0x353C($v0)
    ctx->pc = 0x27cfe8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 13628)));
    // 0x27cfec: 0xc09f3bc  jal         func_27CEF0
    ctx->pc = 0x27CFECu;
    SET_GPR_U32(ctx, 31, 0x27CFF4u);
    ctx->pc = 0x27CFF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27CFECu;
    // 0x27cff0: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x27CEF0u;
    goto label_27cef0;
    ctx->pc = 0x27CFF4u;
label_27cff4:
    // 0x27cff4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x27cff4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_27cff8:
    // 0x27cff8: 0x6400004  bltz        $s2, . + 4 + (0x4 << 2)
    ctx->pc = 0x27CFF8u;
    {
        const bool branch_taken_0x27cff8 = (GPR_S32(ctx, 18) < 0);
        ctx->pc = 0x27CFFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27CFF8u;
        // 0x27cffc: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27cff8) {
            ctx->pc = 0x27D00Cu;
            goto label_27d00c;
        }
    }
    ctx->pc = 0x27D000u;
    // 0x27d000: 0xc09ef8a  jal         func_27BE28
    ctx->pc = 0x27D000u;
    SET_GPR_U32(ctx, 31, 0x27D008u);
    ctx->pc = 0x27BE28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27BE28u, 0x27D000u, 0x27D008u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27D008u;
label_27d008:
    // 0x27d008: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x27d008u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_27d00c:
    // 0x27d00c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x27d00cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x27d010: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x27d010u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x27d014: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x27d014u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x27d018: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x27d018u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x27d01c: 0x3e00008  jr          $ra
    ctx->pc = 0x27D01Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x27D020u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27D01Cu;
        // 0x27d020: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x27D01Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x27D024u;
    // 0x27d024: 0x0  nop
    ctx->pc = 0x27d024u;
    // NOP
}
