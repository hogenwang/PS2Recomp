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

// Function: sub_001C3E90
// Address: 0x1c3e90 - 0x1c4000
void sub_001C3E90_0x1c3e90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001C3E90_0x1c3e90");
#endif

    switch (ctx->pc) {
        case 0x1c3ed8u: goto label_1c3ed8;
        case 0x1c3ef0u: goto label_1c3ef0;
        case 0x1c3f18u: goto label_1c3f18;
        case 0x1c3f5cu: goto label_1c3f5c;
        case 0x1c3f94u: goto label_1c3f94;
        case 0x1c3fa0u: goto label_1c3fa0;
        case 0x1c3fd8u: goto label_1c3fd8;
        case 0x1c3fe8u: goto label_1c3fe8;
        default: break;
    }

    ctx->pc = 0x1c3e90u;

    // 0x1c3e90: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1c3e90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1c3e94: 0x3c0201bf  lui         $v0, 0x1BF
    ctx->pc = 0x1c3e94u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)447 << 16));
    // 0x1c3e98: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1c3e98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1c3e9c: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x1c3e9cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c3ea0: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x1c3ea0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x1c3ea4: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x1c3ea4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c3ea8: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x1c3ea8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x1c3eac: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x1c3eacu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c3eb0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1c3eb0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c3eb4: 0x24061000  addiu       $a2, $zero, 0x1000
    ctx->pc = 0x1c3eb4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4096));
    // 0x1c3eb8: 0x24445b00  addiu       $a0, $v0, 0x5B00
    ctx->pc = 0x1c3eb8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 23296));
    // 0x1c3ebc: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1c3ebcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1c3ec0: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x1c3ec0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x1c3ec4: 0x100a82d  daddu       $s5, $t0, $zero
    ctx->pc = 0x1c3ec4u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c3ec8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1c3ec8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1c3ecc: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x1c3eccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x1c3ed0: 0xc049cb6  jal         func_1272D8
    ctx->pc = 0x1C3ED0u;
    SET_GPR_U32(ctx, 31, 0x1C3ED8u);
    ctx->pc = 0x1C3ED4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C3ED0u;
    // 0x1c3ed4: 0xe0882d  daddu       $s1, $a3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1272D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1272D8u, 0x1C3ED0u, 0x1C3ED8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C3ED8u;
label_1c3ed8:
    // 0x1c3ed8: 0x3c030038  lui         $v1, 0x38
    ctx->pc = 0x1c3ed8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)56 << 16));
    // 0x1c3edc: 0x8c62e990  lw          $v0, -0x1670($v1)
    ctx->pc = 0x1c3edcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294961552)));
    // 0x1c3ee0: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1C3EE0u;
    {
        const bool branch_taken_0x1c3ee0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c3ee0) {
            ctx->pc = 0x1C3EF0u;
            goto label_1c3ef0;
        }
    }
    ctx->pc = 0x1C3EE8u;
    // 0x1c3ee8: 0xc070ec2  jal         func_1C3B08
    ctx->pc = 0x1C3EE8u;
    SET_GPR_U32(ctx, 31, 0x1C3EF0u);
    ctx->pc = 0x1C3B08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C3B08u, 0x1C3EE8u, 0x1C3EF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C3EF0u;
label_1c3ef0:
    // 0x1c3ef0: 0x12800007  beqz        $s4, . + 4 + (0x7 << 2)
    ctx->pc = 0x1C3EF0u;
    {
        const bool branch_taken_0x1c3ef0 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c3ef0) {
            ctx->pc = 0x1C3F10u;
            goto label_1c3f10;
        }
    }
    ctx->pc = 0x1C3EF8u;
    // 0x1c3ef8: 0x12400005  beqz        $s2, . + 4 + (0x5 << 2)
    ctx->pc = 0x1C3EF8u;
    {
        const bool branch_taken_0x1c3ef8 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c3ef8) {
            ctx->pc = 0x1C3F10u;
            goto label_1c3f10;
        }
    }
    ctx->pc = 0x1C3F00u;
    // 0x1c3f00: 0x12600003  beqz        $s3, . + 4 + (0x3 << 2)
    ctx->pc = 0x1C3F00u;
    {
        const bool branch_taken_0x1c3f00 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c3f00) {
            ctx->pc = 0x1C3F10u;
            goto label_1c3f10;
        }
    }
    ctx->pc = 0x1C3F08u;
    // 0x1c3f08: 0x16200003  bnez        $s1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1C3F08u;
    {
        const bool branch_taken_0x1c3f08 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c3f08) {
            ctx->pc = 0x1C3F18u;
            goto label_1c3f18;
        }
    }
    ctx->pc = 0x1C3F10u;
label_1c3f10:
    // 0x1c3f10: 0xc070ec2  jal         func_1C3B08
    ctx->pc = 0x1C3F10u;
    SET_GPR_U32(ctx, 31, 0x1C3F18u);
    ctx->pc = 0x1C3B08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C3B08u, 0x1C3F10u, 0x1C3F18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C3F18u;
label_1c3f18:
    // 0x1c3f18: 0x12800026  beqz        $s4, . + 4 + (0x26 << 2)
    ctx->pc = 0x1C3F18u;
    {
        const bool branch_taken_0x1c3f18 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C3F1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C3F18u;
        // 0x1c3f1c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c3f18) {
            ctx->pc = 0x1C3FB4u;
            goto label_1c3fb4;
        }
    }
    ctx->pc = 0x1C3F20u;
    // 0x1c3f20: 0x16400005  bnez        $s2, . + 4 + (0x5 << 2)
    ctx->pc = 0x1C3F20u;
    {
        const bool branch_taken_0x1c3f20 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C3F24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C3F20u;
        // 0x1c3f24: 0x3c04003f  lui         $a0, 0x3F (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c3f20) {
            ctx->pc = 0x1C3F38u;
            goto label_1c3f38;
        }
    }
    ctx->pc = 0x1C3F28u;
    // 0x1c3f28: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1c3f28u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c3f2c: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x1C3F2Cu;
    {
        const bool branch_taken_0x1c3f2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C3F30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C3F2Cu;
        // 0x1c3f30: 0x2484a000  addiu       $a0, $a0, -0x6000 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294942720));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c3f2c) {
            ctx->pc = 0x1C3F54u;
            goto label_1c3f54;
        }
    }
    ctx->pc = 0x1C3F34u;
    // 0x1c3f34: 0x0  nop
    ctx->pc = 0x1c3f34u;
    // NOP
label_1c3f38:
    // 0x1c3f38: 0x12600004  beqz        $s3, . + 4 + (0x4 << 2)
    ctx->pc = 0x1C3F38u;
    {
        const bool branch_taken_0x1c3f38 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C3F3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C3F38u;
        // 0x1c3f3c: 0x3c04003f  lui         $a0, 0x3F (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c3f38) {
            ctx->pc = 0x1C3F4Cu;
            goto label_1c3f4c;
        }
    }
    ctx->pc = 0x1C3F40u;
    // 0x1c3f40: 0x16200009  bnez        $s1, . + 4 + (0x9 << 2)
    ctx->pc = 0x1C3F40u;
    {
        const bool branch_taken_0x1c3f40 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C3F44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C3F40u;
        // 0x1c3f44: 0x26b00009  addiu       $s0, $s5, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 21), 9));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c3f40) {
            ctx->pc = 0x1C3F68u;
            goto label_1c3f68;
        }
    }
    ctx->pc = 0x1C3F48u;
    // 0x1c3f48: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x1c3f48u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
label_1c3f4c:
    // 0x1c3f4c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1c3f4cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c3f50: 0x2484a030  addiu       $a0, $a0, -0x5FD0
    ctx->pc = 0x1c3f50u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294942768));
label_1c3f54:
    // 0x1c3f54: 0xc06d1f4  jal         func_1B47D0
    ctx->pc = 0x1C3F54u;
    SET_GPR_U32(ctx, 31, 0x1C3F5Cu);
    ctx->pc = 0x1B47D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B47D0u, 0x1C3F54u, 0x1C3F5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C3F5Cu;
label_1c3f5c:
    // 0x1c3f5c: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x1C3F5Cu;
    {
        const bool branch_taken_0x1c3f5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C3F60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C3F5Cu;
        // 0x1c3f60: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c3f5c) {
            ctx->pc = 0x1C3FB4u;
            goto label_1c3fb4;
        }
    }
    ctx->pc = 0x1C3F64u;
    // 0x1c3f64: 0x0  nop
    ctx->pc = 0x1c3f64u;
    // NOP
label_1c3f68:
    // 0x1c3f68: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x1c3f68u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c3f6c: 0x230001b  divu        $zero, $s1, $s0
    ctx->pc = 0x1c3f6cu;
    { uint32_t divisor = GPR_U32(ctx, 16); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 17) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 17) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,17); } }
    // 0x1c3f70: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x1c3f70u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c3f74: 0x2a0402d  daddu       $t0, $s5, $zero
    ctx->pc = 0x1c3f74u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c3f78: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1c3f78u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c3f7c: 0x52000001  beql        $s0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x1C3F7Cu;
    {
        const bool branch_taken_0x1c3f7c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c3f7c) {
            ctx->pc = 0x1C3F80u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C3F7Cu;
            // 0x1c3f80: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C3F84u;
            goto label_1c3f84;
        }
    }
    ctx->pc = 0x1C3F84u;
label_1c3f84:
    // 0x1c3f84: 0x8812  mflo        $s1
    ctx->pc = 0x1c3f84u;
    SET_GPR_U64(ctx, 17, ctx->lo);
    // 0x1c3f88: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x1c3f88u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c3f8c: 0xc070d64  jal         func_1C3590
    ctx->pc = 0x1C3F8Cu;
    SET_GPR_U32(ctx, 31, 0x1C3F94u);
    ctx->pc = 0x1C3F90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C3F8Cu;
    // 0x1c3f90: 0x1188c0  sll         $s1, $s1, 3 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 17), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C3590u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C3590u, 0x1C3F8Cu, 0x1C3F94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C3F94u;
label_1c3f94:
    // 0x1c3f94: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1c3f94u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c3f98: 0xc070e2c  jal         func_1C38B0
    ctx->pc = 0x1C3F98u;
    SET_GPR_U32(ctx, 31, 0x1C3FA0u);
    ctx->pc = 0x1C3F9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C3F98u;
    // 0x1c3f9c: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C38B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C38B0u, 0x1C3F98u, 0x1C3FA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C3FA0u;
label_1c3fa0:
    // 0x1c3fa0: 0x52000001  beql        $s0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x1C3FA0u;
    {
        const bool branch_taken_0x1c3fa0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c3fa0) {
            ctx->pc = 0x1C3FA4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C3FA0u;
            // 0x1c3fa4: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C3FA8u;
            goto label_1c3fa8;
        }
    }
    ctx->pc = 0x1C3FA8u;
label_1c3fa8:
    // 0x1c3fa8: 0x26a30001  addiu       $v1, $s5, 0x1
    ctx->pc = 0x1c3fa8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
    // 0x1c3fac: 0x431018  mult        $v0, $v0, $v1
    ctx->pc = 0x1c3facu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x1c3fb0: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x1c3fb0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
label_1c3fb4:
    // 0x1c3fb4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1c3fb4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c3fb8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1c3fb8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1c3fbc: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1c3fbcu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c3fc0: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1c3fc0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1c3fc4: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x1c3fc4u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1c3fc8: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x1c3fc8u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1c3fcc: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x1c3fccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1c3fd0: 0x3e00008  jr          $ra
    ctx->pc = 0x1C3FD0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C3FD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C3FD0u;
        // 0x1c3fd4: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C3FD0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C3FD8u;
label_1c3fd8:
    // 0x1c3fd8: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1c3fd8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1c3fdc: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x1c3fdcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x1c3fe0: 0xc070f0c  jal         func_1C3C30
    ctx->pc = 0x1C3FE0u;
    SET_GPR_U32(ctx, 31, 0x1C3FE8u);
    ctx->pc = 0x1C3FE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C3FE0u;
    // 0x1c3fe4: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C3C30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C3C30u, 0x1C3FE0u, 0x1C3FE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C3FE8u;
label_1c3fe8:
    // 0x1c3fe8: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x1c3fe8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c3fec: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x1c3fecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1c3ff0: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x1c3ff0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x1c3ff4: 0x3e00008  jr          $ra
    ctx->pc = 0x1C3FF4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C3FF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C3FF4u;
        // 0x1c3ff8: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C3FF4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C3FFCu;
    // 0x1c3ffc: 0x0  nop
    ctx->pc = 0x1c3ffcu;
    // NOP
}
