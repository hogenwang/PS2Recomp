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

// Function: sub_0018F4B0
// Address: 0x18f4b0 - 0x18f5a0
void sub_0018F4B0_0x18f4b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0018F4B0_0x18f4b0");
#endif

    switch (ctx->pc) {
        case 0x18f4e4u: goto label_18f4e4;
        case 0x18f510u: goto label_18f510;
        case 0x18f520u: goto label_18f520;
        case 0x18f548u: goto label_18f548;
        case 0x18f570u: goto label_18f570;
        case 0x18f578u: goto label_18f578;
        default: break;
    }

    ctx->pc = 0x18f4b0u;

    // 0x18f4b0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x18f4b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x18f4b4: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x18f4b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x18f4b8: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x18f4b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x18f4bc: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x18f4bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x18f4c0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x18f4c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x18f4c4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x18f4c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x18f4c8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x18f4c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x18f4cc: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x18f4ccu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18f4d0: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x18f4d0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18f4d4: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x18f4d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18f4d8: 0x2602ffff  addiu       $v0, $s0, -0x1
    ctx->pc = 0x18f4d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    // 0x18f4dc: 0xc066020  jal         func_198080
    ctx->pc = 0x18F4DCu;
    SET_GPR_U32(ctx, 31, 0x18F4E4u);
    ctx->pc = 0x18F4E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18F4DCu;
    // 0x18f4e0: 0x304500ff  andi        $a1, $v0, 0xFF (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    ctx->in_delay_slot = false;
    ctx->pc = 0x198080u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x198080u, 0x18F4DCu, 0x18F4E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18F4E4u;
label_18f4e4:
    // 0x18f4e4: 0x21e3c  dsll32      $v1, $v0, 24
    ctx->pc = 0x18f4e4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 24));
    // 0x18f4e8: 0x31e3f  dsra32      $v1, $v1, 24
    ctx->pc = 0x18f4e8u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 24));
    // 0x18f4ec: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x18f4ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x18f4f0: 0x14620011  bne         $v1, $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x18F4F0u;
    {
        const bool branch_taken_0x18f4f0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x18f4f0) {
            ctx->pc = 0x18F538u;
            goto label_18f538;
        }
    }
    ctx->pc = 0x18F4F8u;
    // 0x18f4f8: 0x1a00000f  blez        $s0, . + 4 + (0xF << 2)
    ctx->pc = 0x18F4F8u;
    {
        const bool branch_taken_0x18f4f8 = (GPR_S32(ctx, 16) <= 0);
        ctx->pc = 0x18F4FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18F4F8u;
        // 0x18f4fc: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18f4f8) {
            ctx->pc = 0x18F538u;
            goto label_18f538;
        }
    }
    ctx->pc = 0x18F500u;
    // 0x18f500: 0x3c13009c  lui         $s3, 0x9C
    ctx->pc = 0x18f500u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)156 << 16));
    // 0x18f504: 0x3c12009c  lui         $s2, 0x9C
    ctx->pc = 0x18f504u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)156 << 16));
    // 0x18f508: 0x2673bb70  addiu       $s3, $s3, -0x4490
    ctx->pc = 0x18f508u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294949744));
    // 0x18f50c: 0x2652d430  addiu       $s2, $s2, -0x2BD0
    ctx->pc = 0x18f50cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294956080));
label_18f510:
    // 0x18f510: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x18f510u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x18f514: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x18f514u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18f518: 0xc066050  jal         func_198140
    ctx->pc = 0x18F518u;
    SET_GPR_U32(ctx, 31, 0x18F520u);
    ctx->pc = 0x18F51Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18F518u;
    // 0x18f51c: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x198140u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x198140u, 0x18F518u, 0x18F520u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18F520u;
label_18f520:
    // 0x18f520: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x18f520u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    // 0x18f524: 0x26310004  addiu       $s1, $s1, 0x4
    ctx->pc = 0x18f524u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
    // 0x18f528: 0x290102a  slt         $v0, $s4, $s0
    ctx->pc = 0x18f528u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 20) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x18f52c: 0x26730004  addiu       $s3, $s3, 0x4
    ctx->pc = 0x18f52cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
    // 0x18f530: 0x1440fff7  bnez        $v0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x18F530u;
    {
        const bool branch_taken_0x18f530 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x18F534u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18F530u;
        // 0x18f534: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18f530) {
            ctx->pc = 0x18F510u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_18f510;
        }
    }
    ctx->pc = 0x18F538u;
label_18f538:
    // 0x18f538: 0x2602ffff  addiu       $v0, $s0, -0x1
    ctx->pc = 0x18f538u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    // 0x18f53c: 0x304500ff  andi        $a1, $v0, 0xFF
    ctx->pc = 0x18f53cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x18f540: 0xc066020  jal         func_198080
    ctx->pc = 0x18F540u;
    SET_GPR_U32(ctx, 31, 0x18F548u);
    ctx->pc = 0x18F544u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18F540u;
    // 0x18f544: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x198080u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x198080u, 0x18F540u, 0x18F548u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18F548u;
label_18f548:
    // 0x18f548: 0x21e3c  dsll32      $v1, $v0, 24
    ctx->pc = 0x18f548u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 24));
    // 0x18f54c: 0x31e3f  dsra32      $v1, $v1, 24
    ctx->pc = 0x18f54cu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 24));
    // 0x18f550: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x18f550u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x18f554: 0x10620004  beq         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x18F554u;
    {
        const bool branch_taken_0x18f554 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x18f554) {
            ctx->pc = 0x18F568u;
            goto label_18f568;
        }
    }
    ctx->pc = 0x18F55Cu;
    // 0x18f55c: 0x2402fffa  addiu       $v0, $zero, -0x6
    ctx->pc = 0x18f55cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967290));
    // 0x18f560: 0x54620006  bnel        $v1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x18F560u;
    {
        const bool branch_taken_0x18f560 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x18f560) {
            ctx->pc = 0x18F564u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x18F560u;
            // 0x18f564: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x18F57Cu;
            goto label_18f57c;
        }
    }
    ctx->pc = 0x18F568u;
label_18f568:
    // 0x18f568: 0xc065fe0  jal         func_197F80
    ctx->pc = 0x18F568u;
    SET_GPR_U32(ctx, 31, 0x18F570u);
    ctx->pc = 0x197F80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x197F80u, 0x18F568u, 0x18F570u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18F570u;
label_18f570:
    // 0x18f570: 0xc065ffc  jal         func_197FF0
    ctx->pc = 0x18F570u;
    SET_GPR_U32(ctx, 31, 0x18F578u);
    ctx->pc = 0x197FF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x197FF0u, 0x18F570u, 0x18F578u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18F578u;
label_18f578:
    // 0x18f578: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x18f578u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_18f57c:
    // 0x18f57c: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x18f57cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x18f580: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x18f580u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x18f584: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x18f584u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x18f588: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x18f588u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x18f58c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x18f58cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x18f590: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x18f590u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x18f594: 0x3e00008  jr          $ra
    ctx->pc = 0x18F594u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18F598u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18F594u;
        // 0x18f598: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18F594u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x18F59Cu;
    // 0x18f59c: 0x0  nop
    ctx->pc = 0x18f59cu;
    // NOP
}
