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

// Function: sub_001631A0
// Address: 0x1631a0 - 0x163290
void sub_001631A0_0x1631a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001631A0_0x1631a0");
#endif

    switch (ctx->pc) {
        case 0x1631c8u: goto label_1631c8;
        case 0x163200u: goto label_163200;
        case 0x163254u: goto label_163254;
        default: break;
    }

    ctx->pc = 0x1631a0u;

    // 0x1631a0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1631a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1631a4: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x1631a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x1631a8: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1631a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x1631ac: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1631acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1631b0: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x1631b0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1631b4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1631b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1631b8: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x1631b8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1631bc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1631bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1631c0: 0x8c910010  lw          $s1, 0x10($a0)
    ctx->pc = 0x1631c0u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x1631c4: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1631c4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1631c8:
    // 0x1631c8: 0x962500ea  lhu         $a1, 0xEA($s1)
    ctx->pc = 0x1631c8u;
    SET_GPR_U32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 234)));
    // 0x1631cc: 0x3c040036  lui         $a0, 0x36
    ctx->pc = 0x1631ccu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)54 << 16));
    // 0x1631d0: 0x24841df0  addiu       $a0, $a0, 0x1DF0
    ctx->pc = 0x1631d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 7664));
    // 0x1631d4: 0x240300ff  addiu       $v1, $zero, 0xFF
    ctx->pc = 0x1631d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x1631d8: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x1631d8u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x1631dc: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x1631dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x1631e0: 0x2042021  addu        $a0, $s0, $a0
    ctx->pc = 0x1631e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
    // 0x1631e4: 0x90850000  lbu         $a1, 0x0($a0)
    ctx->pc = 0x1631e4u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1631e8: 0x10a3001b  beq         $a1, $v1, . + 4 + (0x1B << 2)
    ctx->pc = 0x1631E8u;
    {
        const bool branch_taken_0x1631e8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x1631e8) {
            ctx->pc = 0x163258u;
            goto label_163258;
        }
    }
    ctx->pc = 0x1631F0u;
    // 0x1631f0: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1631f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1631f4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1631f4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1631f8: 0xc058ca4  jal         func_163290
    ctx->pc = 0x1631F8u;
    SET_GPR_U32(ctx, 31, 0x163200u);
    ctx->pc = 0x1631FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1631F8u;
    // 0x1631fc: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x163290u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163290u, 0x1631F8u, 0x163200u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x163200u;
label_163200:
    // 0x163200: 0x10400015  beqz        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x163200u;
    {
        const bool branch_taken_0x163200 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x163200) {
            ctx->pc = 0x163258u;
            goto label_163258;
        }
    }
    ctx->pc = 0x163208u;
    // 0x163208: 0x8c510010  lw          $s1, 0x10($v0)
    ctx->pc = 0x163208u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x16320c: 0xa62000f0  sh          $zero, 0xF0($s1)
    ctx->pc = 0x16320cu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 240), (uint16_t)GPR_U32(ctx, 0));
    // 0x163210: 0x3c020036  lui         $v0, 0x36
    ctx->pc = 0x163210u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)54 << 16));
    // 0x163214: 0x962300ea  lhu         $v1, 0xEA($s1)
    ctx->pc = 0x163214u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 234)));
    // 0x163218: 0x24421df0  addiu       $v0, $v0, 0x1DF0
    ctx->pc = 0x163218u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 7664));
    // 0x16321c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x16321cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x163220: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x163220u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x163224: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x163224u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x163228: 0x90420001  lbu         $v0, 0x1($v0)
    ctx->pc = 0x163228u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 1)));
    // 0x16322c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x16322Cu;
    {
        const bool branch_taken_0x16322c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x16322c) {
            ctx->pc = 0x163240u;
            goto label_163240;
        }
    }
    ctx->pc = 0x163234u;
    // 0x163234: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x163234u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x163238: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x163238u;
    {
        const bool branch_taken_0x163238 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16323Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x163238u;
        // 0x16323c: 0xa2220008  sb          $v0, 0x8($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 8), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x163238) {
            ctx->pc = 0x163248u;
            goto label_163248;
        }
    }
    ctx->pc = 0x163240u;
label_163240:
    // 0x163240: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x163240u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x163244: 0xa2220008  sb          $v0, 0x8($s1)
    ctx->pc = 0x163244u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 8), (uint8_t)GPR_U32(ctx, 2));
label_163248:
    // 0x163248: 0x92250008  lbu         $a1, 0x8($s1)
    ctx->pc = 0x163248u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x16324c: 0xc04be70  jal         func_12F9C0
    ctx->pc = 0x16324Cu;
    SET_GPR_U32(ctx, 31, 0x163254u);
    ctx->pc = 0x163250u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16324Cu;
    // 0x163250: 0x8e2400dc  lw          $a0, 0xDC($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 220)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12F9C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12F9C0u, 0x16324Cu, 0x163254u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x163254u;
label_163254:
    // 0x163254: 0xe6200004  swc1        $f0, 0x4($s1)
    ctx->pc = 0x163254u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4), bits); }
label_163258:
    // 0x163258: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x163258u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x16325c: 0x2a430002  slti        $v1, $s2, 0x2
    ctx->pc = 0x16325cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x163260: 0x1460ffd9  bnez        $v1, . + 4 + (-0x27 << 2)
    ctx->pc = 0x163260u;
    {
        const bool branch_taken_0x163260 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x163264u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x163260u;
        // 0x163264: 0x26100002  addiu       $s0, $s0, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x163260) {
            ctx->pc = 0x1631C8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1631c8;
        }
    }
    ctx->pc = 0x163268u;
    // 0x163268: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x163268u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x16326c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x16326cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x163270: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x163270u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x163274: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x163274u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x163278: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x163278u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16327c: 0x3e00008  jr          $ra
    ctx->pc = 0x16327Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x163280u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16327Cu;
        // 0x163280: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16327Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x163284u;
    // 0x163284: 0x0  nop
    ctx->pc = 0x163284u;
    // NOP
    // 0x163288: 0x0  nop
    ctx->pc = 0x163288u;
    // NOP
    // 0x16328c: 0x0  nop
    ctx->pc = 0x16328cu;
    // NOP
}
