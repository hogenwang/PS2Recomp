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

// Function: sub_00353F20
// Address: 0x353f20 - 0x354160
void sub_00353F20_0x353f20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00353F20_0x353f20");
#endif

    switch (ctx->pc) {
        case 0x353f48u: goto label_353f48;
        case 0x353f58u: goto label_353f58;
        case 0x353f68u: goto label_353f68;
        case 0x353f98u: goto label_353f98;
        case 0x353fa8u: goto label_353fa8;
        case 0x353fd0u: goto label_353fd0;
        case 0x353fd8u: goto label_353fd8;
        case 0x353fe0u: goto label_353fe0;
        case 0x353fe8u: goto label_353fe8;
        case 0x353ff0u: goto label_353ff0;
        case 0x353ff8u: goto label_353ff8;
        case 0x354000u: goto label_354000;
        case 0x354008u: goto label_354008;
        case 0x354030u: goto label_354030;
        case 0x354038u: goto label_354038;
        case 0x354040u: goto label_354040;
        case 0x354048u: goto label_354048;
        case 0x354050u: goto label_354050;
        case 0x354058u: goto label_354058;
        case 0x354080u: goto label_354080;
        case 0x35409cu: goto label_35409c;
        case 0x3540c0u: goto label_3540c0;
        case 0x3540c8u: goto label_3540c8;
        case 0x3540fcu: goto label_3540fc;
        case 0x354128u: goto label_354128;
        case 0x35414cu: goto label_35414c;
        default: break;
    }

    ctx->pc = 0x353f20u;

    // 0x353f20: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x353f20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x353f24: 0x3c0201e0  lui         $v0, 0x1E0
    ctx->pc = 0x353f24u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)480 << 16));
    // 0x353f28: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x353f28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x353f2c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x353f2cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x353f30: 0x9042bedb  lbu         $v0, -0x4125($v0)
    ctx->pc = 0x353f30u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294950619)));
    // 0x353f34: 0x30420003  andi        $v0, $v0, 0x3
    ctx->pc = 0x353f34u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
    // 0x353f38: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x353F38u;
    {
        const bool branch_taken_0x353f38 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x353F3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x353F38u;
        // 0x353f3c: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x353f38) {
            ctx->pc = 0x353F70u;
            goto label_353f70;
        }
    }
    ctx->pc = 0x353F40u;
    // 0x353f40: 0xc0d4884  jal         func_352210
    ctx->pc = 0x353F40u;
    SET_GPR_U32(ctx, 31, 0x353F48u);
    ctx->pc = 0x352210u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x352210u, 0x353F40u, 0x353F48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x353F48u;
label_353f48:
    // 0x353f48: 0x3c040035  lui         $a0, 0x35
    ctx->pc = 0x353f48u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)53 << 16));
    // 0x353f4c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x353f4cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x353f50: 0xc055768  jal         func_155DA0
    ctx->pc = 0x353F50u;
    SET_GPR_U32(ctx, 31, 0x353F58u);
    ctx->pc = 0x353F54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x353F50u;
    // 0x353f54: 0x24843ce0  addiu       $a0, $a0, 0x3CE0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 15584));
    ctx->in_delay_slot = false;
    ctx->pc = 0x155DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x155DA0u, 0x353F50u, 0x353F58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x353F58u;
label_353f58:
    // 0x353f58: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x353f58u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x353f5c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x353f5cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x353f60: 0xc0c79fc  jal         func_31E7F0
    ctx->pc = 0x353F60u;
    SET_GPR_U32(ctx, 31, 0x353F68u);
    ctx->pc = 0x353F64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x353F60u;
    // 0x353f64: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31E7F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31E7F0u, 0x353F60u, 0x353F68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x353F68u;
label_353f68:
    // 0x353f68: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x353F68u;
    {
        const bool branch_taken_0x353f68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x353F6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x353F68u;
        // 0x353f6c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x353f68) {
            ctx->pc = 0x353FACu;
            goto label_353fac;
        }
    }
    ctx->pc = 0x353F70u;
label_353f70:
    // 0x353f70: 0x3c0201e0  lui         $v0, 0x1E0
    ctx->pc = 0x353f70u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)480 << 16));
    // 0x353f74: 0x9042bed8  lbu         $v0, -0x4128($v0)
    ctx->pc = 0x353f74u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294950616)));
    // 0x353f78: 0x5040000c  beql        $v0, $zero, . + 4 + (0xC << 2)
    ctx->pc = 0x353F78u;
    {
        const bool branch_taken_0x353f78 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x353f78) {
            ctx->pc = 0x353F7Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x353F78u;
            // 0x353f7c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x353FACu;
            goto label_353fac;
        }
    }
    ctx->pc = 0x353F80u;
    // 0x353f80: 0x3c0201e0  lui         $v0, 0x1E0
    ctx->pc = 0x353f80u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)480 << 16));
    // 0x353f84: 0x9042beda  lbu         $v0, -0x4126($v0)
    ctx->pc = 0x353f84u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294950618)));
    // 0x353f88: 0x54400008  bnel        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x353F88u;
    {
        const bool branch_taken_0x353f88 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x353f88) {
            ctx->pc = 0x353F8Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x353F88u;
            // 0x353f8c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x353FACu;
            goto label_353fac;
        }
    }
    ctx->pc = 0x353F90u;
    // 0x353f90: 0xc0d4884  jal         func_352210
    ctx->pc = 0x353F90u;
    SET_GPR_U32(ctx, 31, 0x353F98u);
    ctx->pc = 0x352210u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x352210u, 0x353F90u, 0x353F98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x353F98u;
label_353f98:
    // 0x353f98: 0x3c040035  lui         $a0, 0x35
    ctx->pc = 0x353f98u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)53 << 16));
    // 0x353f9c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x353f9cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x353fa0: 0xc055768  jal         func_155DA0
    ctx->pc = 0x353FA0u;
    SET_GPR_U32(ctx, 31, 0x353FA8u);
    ctx->pc = 0x353FA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x353FA0u;
    // 0x353fa4: 0x24843ce0  addiu       $a0, $a0, 0x3CE0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 15584));
    ctx->in_delay_slot = false;
    ctx->pc = 0x155DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x155DA0u, 0x353FA0u, 0x353FA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x353FA8u;
label_353fa8:
    // 0x353fa8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x353fa8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_353fac:
    // 0x353fac: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x353facu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x353fb0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x353fb0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x353fb4: 0x3e00008  jr          $ra
    ctx->pc = 0x353FB4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x353FB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x353FB4u;
        // 0x353fb8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x353FB4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x353FBCu;
    // 0x353fbc: 0x0  nop
    ctx->pc = 0x353fbcu;
    // NOP
    // 0x353fc0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x353fc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x353fc4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x353fc4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x353fc8: 0xc055684  jal         func_155A10
    ctx->pc = 0x353FC8u;
    SET_GPR_U32(ctx, 31, 0x353FD0u);
    ctx->pc = 0x155A10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x155A10u, 0x353FC8u, 0x353FD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x353FD0u;
label_353fd0:
    // 0x353fd0: 0xc05347c  jal         func_14D1F0
    ctx->pc = 0x353FD0u;
    SET_GPR_U32(ctx, 31, 0x353FD8u);
    ctx->pc = 0x14D1F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14D1F0u, 0x353FD0u, 0x353FD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x353FD8u;
label_353fd8:
    // 0x353fd8: 0xc06871c  jal         func_1A1C70
    ctx->pc = 0x353FD8u;
    SET_GPR_U32(ctx, 31, 0x353FE0u);
    ctx->pc = 0x1A1C70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1C70u, 0x353FD8u, 0x353FE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x353FE0u;
label_353fe0:
    // 0x353fe0: 0xc0692c0  jal         func_1A4B00
    ctx->pc = 0x353FE0u;
    SET_GPR_U32(ctx, 31, 0x353FE8u);
    ctx->pc = 0x1A4B00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A4B00u, 0x353FE0u, 0x353FE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x353FE8u;
label_353fe8:
    // 0x353fe8: 0xc0cb1f4  jal         func_32C7D0
    ctx->pc = 0x353FE8u;
    SET_GPR_U32(ctx, 31, 0x353FF0u);
    ctx->pc = 0x32C7D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32C7D0u, 0x353FE8u, 0x353FF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x353FF0u;
label_353ff0:
    // 0x353ff0: 0xc068244  jal         func_1A0910
    ctx->pc = 0x353FF0u;
    SET_GPR_U32(ctx, 31, 0x353FF8u);
    ctx->pc = 0x1A0910u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0910u, 0x353FF0u, 0x353FF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x353FF8u;
label_353ff8:
    // 0x353ff8: 0xc06810c  jal         func_1A0430
    ctx->pc = 0x353FF8u;
    SET_GPR_U32(ctx, 31, 0x354000u);
    ctx->pc = 0x1A0430u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0430u, 0x353FF8u, 0x354000u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x354000u;
label_354000:
    // 0x354000: 0xc0ce97c  jal         func_33A5F0
    ctx->pc = 0x354000u;
    SET_GPR_U32(ctx, 31, 0x354008u);
    ctx->pc = 0x33A5F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33A5F0u, 0x354000u, 0x354008u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x354008u;
label_354008:
    // 0x354008: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x354008u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x35400c: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x35400cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x354010: 0x9044dae0  lbu         $a0, -0x2520($v0)
    ctx->pc = 0x354010u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294957792)));
    // 0x354014: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x354014u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x354018: 0xa040da58  sb          $zero, -0x25A8($v0)
    ctx->pc = 0x354018u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 4294957656), (uint8_t)GPR_U32(ctx, 0));
    // 0x35401c: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x35401cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x354020: 0xa040da59  sb          $zero, -0x25A7($v0)
    ctx->pc = 0x354020u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 4294957657), (uint8_t)GPR_U32(ctx, 0));
    // 0x354024: 0x34820002  ori         $v0, $a0, 0x2
    ctx->pc = 0x354024u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)2);
    // 0x354028: 0xc06871c  jal         func_1A1C70
    ctx->pc = 0x354028u;
    SET_GPR_U32(ctx, 31, 0x354030u);
    ctx->pc = 0x35402Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x354028u;
    // 0x35402c: 0xa062dae0  sb          $v0, -0x2520($v1) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 3), 4294957792), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A1C70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1C70u, 0x354028u, 0x354030u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x354030u;
label_354030:
    // 0x354030: 0xc0692c0  jal         func_1A4B00
    ctx->pc = 0x354030u;
    SET_GPR_U32(ctx, 31, 0x354038u);
    ctx->pc = 0x1A4B00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A4B00u, 0x354030u, 0x354038u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x354038u;
label_354038:
    // 0x354038: 0xc0cb1f4  jal         func_32C7D0
    ctx->pc = 0x354038u;
    SET_GPR_U32(ctx, 31, 0x354040u);
    ctx->pc = 0x32C7D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32C7D0u, 0x354038u, 0x354040u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x354040u;
label_354040:
    // 0x354040: 0xc0682e0  jal         func_1A0B80
    ctx->pc = 0x354040u;
    SET_GPR_U32(ctx, 31, 0x354048u);
    ctx->pc = 0x354044u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x354040u;
    // 0x354044: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0B80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0B80u, 0x354040u, 0x354048u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x354048u;
label_354048:
    // 0x354048: 0xc0682e0  jal         func_1A0B80
    ctx->pc = 0x354048u;
    SET_GPR_U32(ctx, 31, 0x354050u);
    ctx->pc = 0x35404Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x354048u;
    // 0x35404c: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0B80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0B80u, 0x354048u, 0x354050u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x354050u;
label_354050:
    // 0x354050: 0xc06814c  jal         func_1A0530
    ctx->pc = 0x354050u;
    SET_GPR_U32(ctx, 31, 0x354058u);
    ctx->pc = 0x354054u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x354050u;
    // 0x354054: 0x24040202  addiu       $a0, $zero, 0x202 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 514));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0530u, 0x354050u, 0x354058u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x354058u;
label_354058:
    // 0x354058: 0x24030007  addiu       $v1, $zero, 0x7
    ctx->pc = 0x354058u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x35405c: 0x3c02009f  lui         $v0, 0x9F
    ctx->pc = 0x35405cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)159 << 16));
    // 0x354060: 0xa0439780  sb          $v1, -0x6880($v0)
    ctx->pc = 0x354060u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 4294940544), (uint8_t)GPR_U32(ctx, 3));
    // 0x354064: 0x3c02009f  lui         $v0, 0x9F
    ctx->pc = 0x354064u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)159 << 16));
    // 0x354068: 0x94429718  lhu         $v0, -0x68E8($v0)
    ctx->pc = 0x354068u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 4294940440)));
    // 0x35406c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x35406Cu;
    {
        const bool branch_taken_0x35406c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x35406c) {
            ctx->pc = 0x354088u;
            goto label_354088;
        }
    }
    ctx->pc = 0x354074u;
    // 0x354074: 0x3c040036  lui         $a0, 0x36
    ctx->pc = 0x354074u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)54 << 16));
    // 0x354078: 0xc0558e0  jal         func_156380
    ctx->pc = 0x354078u;
    SET_GPR_U32(ctx, 31, 0x354080u);
    ctx->pc = 0x35407Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x354078u;
    // 0x35407c: 0x24848030  addiu       $a0, $a0, -0x7FD0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294934576));
    ctx->in_delay_slot = false;
    ctx->pc = 0x156380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x156380u, 0x354078u, 0x354080u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x354080u;
label_354080:
    // 0x354080: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x354080u;
    {
        const bool branch_taken_0x354080 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x354084u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x354080u;
        // 0x354084: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x354080) {
            ctx->pc = 0x3540A0u;
            goto label_3540a0;
        }
    }
    ctx->pc = 0x354088u;
label_354088:
    // 0x354088: 0x3c040030  lui         $a0, 0x30
    ctx->pc = 0x354088u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)48 << 16));
    // 0x35408c: 0x3c050035  lui         $a1, 0x35
    ctx->pc = 0x35408cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)53 << 16));
    // 0x354090: 0x2484f690  addiu       $a0, $a0, -0x970
    ctx->pc = 0x354090u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294964880));
    // 0x354094: 0xc0558d4  jal         func_156350
    ctx->pc = 0x354094u;
    SET_GPR_U32(ctx, 31, 0x35409Cu);
    ctx->pc = 0x354098u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x354094u;
    // 0x354098: 0x24a540b0  addiu       $a1, $a1, 0x40B0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16560));
    ctx->in_delay_slot = false;
    ctx->pc = 0x156350u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x156350u, 0x354094u, 0x35409Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35409Cu;
label_35409c:
    // 0x35409c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x35409cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_3540a0:
    // 0x3540a0: 0x3e00008  jr          $ra
    ctx->pc = 0x3540A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3540A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3540A0u;
        // 0x3540a4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3540A0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3540A8u;
    // 0x3540a8: 0x0  nop
    ctx->pc = 0x3540a8u;
    // NOP
    // 0x3540ac: 0x0  nop
    ctx->pc = 0x3540acu;
    // NOP
    // 0x3540b0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3540b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x3540b4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3540b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3540b8: 0xc0cbf10  jal         func_32FC40
    ctx->pc = 0x3540B8u;
    SET_GPR_U32(ctx, 31, 0x3540C0u);
    ctx->pc = 0x32FC40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32FC40u, 0x3540B8u, 0x3540C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3540C0u;
label_3540c0:
    // 0x3540c0: 0xc0c07f4  jal         func_301FD0
    ctx->pc = 0x3540C0u;
    SET_GPR_U32(ctx, 31, 0x3540C8u);
    ctx->pc = 0x301FD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x301FD0u, 0x3540C0u, 0x3540C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3540C8u;
label_3540c8:
    // 0x3540c8: 0x3c0201de  lui         $v0, 0x1DE
    ctx->pc = 0x3540c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)478 << 16));
    // 0x3540cc: 0x3c040033  lui         $a0, 0x33
    ctx->pc = 0x3540ccu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)51 << 16));
    // 0x3540d0: 0xa040e818  sb          $zero, -0x17E8($v0)
    ctx->pc = 0x3540d0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 4294961176), (uint8_t)GPR_U32(ctx, 0));
    // 0x3540d4: 0x3c050040  lui         $a1, 0x40
    ctx->pc = 0x3540d4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)64 << 16));
    // 0x3540d8: 0x24030013  addiu       $v1, $zero, 0x13
    ctx->pc = 0x3540d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
    // 0x3540dc: 0x3c0201de  lui         $v0, 0x1DE
    ctx->pc = 0x3540dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)478 << 16));
    // 0x3540e0: 0xa043e820  sb          $v1, -0x17E0($v0)
    ctx->pc = 0x3540e0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 4294961184), (uint8_t)GPR_U32(ctx, 3));
    // 0x3540e4: 0x24841180  addiu       $a0, $a0, 0x1180
    ctx->pc = 0x3540e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4480));
    // 0x3540e8: 0x24a55580  addiu       $a1, $a1, 0x5580
    ctx->pc = 0x3540e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 21888));
    // 0x3540ec: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x3540ecu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3540f0: 0x24070034  addiu       $a3, $zero, 0x34
    ctx->pc = 0x3540f0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 52));
    // 0x3540f4: 0xc0556d4  jal         func_155B50
    ctx->pc = 0x3540F4u;
    SET_GPR_U32(ctx, 31, 0x3540FCu);
    ctx->pc = 0x3540F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3540F4u;
    // 0x3540f8: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x155B50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x155B50u, 0x3540F4u, 0x3540FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3540FCu;
label_3540fc:
    // 0x3540fc: 0x8c450010  lw          $a1, 0x10($v0)
    ctx->pc = 0x3540fcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x354100: 0x2403005a  addiu       $v1, $zero, 0x5A
    ctx->pc = 0x354100u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 90));
    // 0x354104: 0x3c0201de  lui         $v0, 0x1DE
    ctx->pc = 0x354104u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)478 << 16));
    // 0x354108: 0x8c44ea78  lw          $a0, -0x1588($v0)
    ctx->pc = 0x354108u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961784)));
    // 0x35410c: 0xaca40008  sw          $a0, 0x8($a1)
    ctx->pc = 0x35410cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 4));
    // 0x354110: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x354110u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x354114: 0xaca30010  sw          $v1, 0x10($a1)
    ctx->pc = 0x354114u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 16), GPR_U32(ctx, 3));
    // 0x354118: 0xaca2000c  sw          $v0, 0xC($a1)
    ctx->pc = 0x354118u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 12), GPR_U32(ctx, 2));
    // 0x35411c: 0xaca00010  sw          $zero, 0x10($a1)
    ctx->pc = 0x35411cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 16), GPR_U32(ctx, 0));
    // 0x354120: 0xc0c35a0  jal         func_30D680
    ctx->pc = 0x354120u;
    SET_GPR_U32(ctx, 31, 0x354128u);
    ctx->pc = 0x354124u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x354120u;
    // 0x354124: 0xaca00014  sw          $zero, 0x14($a1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 5), 20), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30D680u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30D680u, 0x354120u, 0x354128u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x354128u;
label_354128:
    // 0x354128: 0x24030007  addiu       $v1, $zero, 0x7
    ctx->pc = 0x354128u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x35412c: 0x3c02009f  lui         $v0, 0x9F
    ctx->pc = 0x35412cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)159 << 16));
    // 0x354130: 0xa0439780  sb          $v1, -0x6880($v0)
    ctx->pc = 0x354130u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 4294940544), (uint8_t)GPR_U32(ctx, 3));
    // 0x354134: 0x3c040035  lui         $a0, 0x35
    ctx->pc = 0x354134u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)53 << 16));
    // 0x354138: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x354138u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x35413c: 0x3c0201e0  lui         $v0, 0x1E0
    ctx->pc = 0x35413cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)480 << 16));
    // 0x354140: 0x24842240  addiu       $a0, $a0, 0x2240
    ctx->pc = 0x354140u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8768));
    // 0x354144: 0xc0558e0  jal         func_156380
    ctx->pc = 0x354144u;
    SET_GPR_U32(ctx, 31, 0x35414Cu);
    ctx->pc = 0x354148u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x354144u;
    // 0x354148: 0xa043bf18  sb          $v1, -0x40E8($v0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 2), 4294950680), (uint8_t)GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x156380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x156380u, 0x354144u, 0x35414Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35414Cu;
label_35414c:
    // 0x35414c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x35414cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x354150: 0x3e00008  jr          $ra
    ctx->pc = 0x354150u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x354154u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x354150u;
        // 0x354154: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x354150u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x354158u;
    // 0x354158: 0x0  nop
    ctx->pc = 0x354158u;
    // NOP
    // 0x35415c: 0x0  nop
    ctx->pc = 0x35415cu;
    // NOP
}
