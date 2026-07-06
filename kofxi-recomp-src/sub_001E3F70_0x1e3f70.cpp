#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001E3F70
// Address: 0x1e3f70 - 0x1e4258
void sub_001E3F70_0x1e3f70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001E3F70_0x1e3f70");
#endif

    switch (ctx->pc) {
        case 0x1e3fa8u: goto label_1e3fa8;
        case 0x1e3fc0u: goto label_1e3fc0;
        case 0x1e3fd8u: goto label_1e3fd8;
        case 0x1e3ff0u: goto label_1e3ff0;
        case 0x1e4018u: goto label_1e4018;
        case 0x1e4030u: goto label_1e4030;
        case 0x1e404cu: goto label_1e404c;
        case 0x1e4060u: goto label_1e4060;
        case 0x1e4074u: goto label_1e4074;
        case 0x1e4084u: goto label_1e4084;
        case 0x1e40a0u: goto label_1e40a0;
        case 0x1e40c8u: goto label_1e40c8;
        case 0x1e40e0u: goto label_1e40e0;
        case 0x1e40fcu: goto label_1e40fc;
        case 0x1e4110u: goto label_1e4110;
        case 0x1e4124u: goto label_1e4124;
        case 0x1e4134u: goto label_1e4134;
        case 0x1e4150u: goto label_1e4150;
        case 0x1e4174u: goto label_1e4174;
        case 0x1e41a0u: goto label_1e41a0;
        case 0x1e41d8u: goto label_1e41d8;
        case 0x1e4200u: goto label_1e4200;
        case 0x1e4208u: goto label_1e4208;
        case 0x1e4224u: goto label_1e4224;
        default: break;
    }

    ctx->pc = 0x1e3f70u;

    // 0x1e3f70: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1e3f70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1e3f74: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1e3f74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1e3f78: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x1e3f78u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1e3f7c: 0x10800006  beqz        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1E3F7Cu;
    {
        const bool branch_taken_0x1e3f7c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E3F80u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E3F7Cu;
            // 0x1e3f80: 0xffbf0008  sd          $ra, 0x8($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e3f7c) {
            ctx->pc = 0x1E3F98u;
            goto label_1e3f98;
        }
    }
    ctx->pc = 0x1E3F84u;
    // 0x1e3f84: 0x10900009  beq         $a0, $s0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1E3F84u;
    {
        const bool branch_taken_0x1e3f84 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 16));
        ctx->pc = 0x1E3F88u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E3F84u;
            // 0x1e3f88: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e3f84) {
            ctx->pc = 0x1E3FACu;
            goto label_1e3fac;
        }
    }
    ctx->pc = 0x1E3F8Cu;
    // 0x1e3f8c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1E3F8Cu;
    {
        const bool branch_taken_0x1e3f8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E3F90u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E3F8Cu;
            // 0x1e3f90: 0x3c04003f  lui         $a0, 0x3F (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e3f8c) {
            ctx->pc = 0x1E3FA0u;
            goto label_1e3fa0;
        }
    }
    ctx->pc = 0x1E3F94u;
    // 0x1e3f94: 0x0  nop
    ctx->pc = 0x1e3f94u;
    // NOP
label_1e3f98:
    // 0x1e3f98: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1E3F98u;
    {
        const bool branch_taken_0x1e3f98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E3F9Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E3F98u;
            // 0x1e3f9c: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e3f98) {
            ctx->pc = 0x1E3FA8u;
            goto label_1e3fa8;
        }
    }
    ctx->pc = 0x1E3FA0u;
label_1e3fa0:
    // 0x1e3fa0: 0xc079afa  jal         func_1E6BE8
    ctx->pc = 0x1E3FA0u;
    SET_GPR_U32(ctx, 31, 0x1E3FA8u);
    ctx->pc = 0x1E3FA4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E3FA0u;
            // 0x1e3fa4: 0x2484db80  addiu       $a0, $a0, -0x2480 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294957952));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E6BE8u;
    if (runtime->hasFunction(0x1E6BE8u)) {
        auto targetFn = runtime->lookupFunction(0x1E6BE8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E3FA8u; }
        if (ctx->pc != 0x1E3FA8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001E6BE8_0x1e6be8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E3FA8u; }
        if (ctx->pc != 0x1E3FA8u) { return; }
    }
    ctx->pc = 0x1E3FA8u;
label_1e3fa8:
    // 0x1e3fa8: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1e3fa8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1e3fac:
    // 0x1e3fac: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1e3facu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e3fb0: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1e3fb0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1e3fb4: 0x3e00008  jr          $ra
    ctx->pc = 0x1E3FB4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E3FB8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E3FB4u;
            // 0x1e3fb8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1E3FBCu;
    // 0x1e3fbc: 0x0  nop
    ctx->pc = 0x1e3fbcu;
    // NOP
label_1e3fc0:
    // 0x1e3fc0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1e3fc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1e3fc4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1e3fc4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1e3fc8: 0x8c8400a8  lw          $a0, 0xA8($a0)
    ctx->pc = 0x1e3fc8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 168)));
    // 0x1e3fcc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1e3fccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e3fd0: 0x8080676  j           func_2019D8
    ctx->pc = 0x1E3FD0u;
    ctx->pc = 0x1E3FD4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E3FD0u;
            // 0x1e3fd4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2019D8u;
    {
        auto targetFn = runtime->lookupFunction(0x2019D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x1E3FD8u;
label_1e3fd8:
    // 0x1e3fd8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1e3fd8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1e3fdc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1e3fdcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1e3fe0: 0x8c8400a8  lw          $a0, 0xA8($a0)
    ctx->pc = 0x1e3fe0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 168)));
    // 0x1e3fe4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1e3fe4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e3fe8: 0x808068a  j           func_201A28
    ctx->pc = 0x1E3FE8u;
    ctx->pc = 0x1E3FECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E3FE8u;
            // 0x1e3fec: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x201A28u;
    {
        auto targetFn = runtime->lookupFunction(0x201A28u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x1E3FF0u;
label_1e3ff0:
    // 0x1e3ff0: 0x27bdff30  addiu       $sp, $sp, -0xD0
    ctx->pc = 0x1e3ff0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967088));
    // 0x1e3ff4: 0xffb100a8  sd          $s1, 0xA8($sp)
    ctx->pc = 0x1e3ff4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 168), GPR_U64(ctx, 17));
    // 0x1e3ff8: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1e3ff8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e3ffc: 0xffb200b0  sd          $s2, 0xB0($sp)
    ctx->pc = 0x1e3ffcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 18));
    // 0x1e4000: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x1e4000u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e4004: 0xffb300b8  sd          $s3, 0xB8($sp)
    ctx->pc = 0x1e4004u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 184), GPR_U64(ctx, 19));
    // 0x1e4008: 0xffb000a0  sd          $s0, 0xA0($sp)
    ctx->pc = 0x1e4008u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 16));
    // 0x1e400c: 0xffbf00c0  sd          $ra, 0xC0($sp)
    ctx->pc = 0x1e400cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 192), GPR_U64(ctx, 31));
    // 0x1e4010: 0xc078a58  jal         func_1E2960
    ctx->pc = 0x1E4010u;
    SET_GPR_U32(ctx, 31, 0x1E4018u);
    ctx->pc = 0x1E4014u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E4010u;
            // 0x1e4014: 0xc0982d  daddu       $s3, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E2960u;
    if (runtime->hasFunction(0x1E2960u)) {
        auto targetFn = runtime->lookupFunction(0x1E2960u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E4018u; }
        if (ctx->pc != 0x1E4018u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001E2960_0x1e2960(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E4018u; }
        if (ctx->pc != 0x1E4018u) { return; }
    }
    ctx->pc = 0x1E4018u;
label_1e4018:
    // 0x1e4018: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x1e4018u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    // 0x1e401c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1e401cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1e4020: 0x10430005  beq         $v0, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x1E4020u;
    {
        const bool branch_taken_0x1e4020 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x1E4024u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E4020u;
            // 0x1e4024: 0x2484dba0  addiu       $a0, $a0, -0x2460 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294957984));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e4020) {
            ctx->pc = 0x1E4038u;
            goto label_1e4038;
        }
    }
    ctx->pc = 0x1E4028u;
    // 0x1e4028: 0xc079afa  jal         func_1E6BE8
    ctx->pc = 0x1E4028u;
    SET_GPR_U32(ctx, 31, 0x1E4030u);
    ctx->pc = 0x1E6BE8u;
    if (runtime->hasFunction(0x1E6BE8u)) {
        auto targetFn = runtime->lookupFunction(0x1E6BE8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E4030u; }
        if (ctx->pc != 0x1E4030u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001E6BE8_0x1e6be8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E4030u; }
        if (ctx->pc != 0x1E4030u) { return; }
    }
    ctx->pc = 0x1E4030u;
label_1e4030:
    // 0x1e4030: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x1E4030u;
    {
        const bool branch_taken_0x1e4030 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E4034u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E4030u;
            // 0x1e4034: 0xdfb000a0  ld          $s0, 0xA0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e4030) {
            ctx->pc = 0x1E4088u;
            goto label_1e4088;
        }
    }
    ctx->pc = 0x1E4038u;
label_1e4038:
    // 0x1e4038: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x1e4038u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1e403c: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1E403Cu;
    {
        const bool branch_taken_0x1e403c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1E4040u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E403Cu;
            // 0x1e4040: 0x3c04003f  lui         $a0, 0x3F (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e403c) {
            ctx->pc = 0x1E4058u;
            goto label_1e4058;
        }
    }
    ctx->pc = 0x1E4044u;
    // 0x1e4044: 0xc079afa  jal         func_1E6BE8
    ctx->pc = 0x1E4044u;
    SET_GPR_U32(ctx, 31, 0x1E404Cu);
    ctx->pc = 0x1E4048u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E4044u;
            // 0x1e4048: 0x2484dbd0  addiu       $a0, $a0, -0x2430 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294958032));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E6BE8u;
    if (runtime->hasFunction(0x1E6BE8u)) {
        auto targetFn = runtime->lookupFunction(0x1E6BE8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E404Cu; }
        if (ctx->pc != 0x1E404Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001E6BE8_0x1e6be8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E404Cu; }
        if (ctx->pc != 0x1E404Cu) { return; }
    }
    ctx->pc = 0x1E404Cu;
label_1e404c:
    // 0x1e404c: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x1E404Cu;
    {
        const bool branch_taken_0x1e404c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E4050u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E404Cu;
            // 0x1e4050: 0xdfb000a0  ld          $s0, 0xA0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e404c) {
            ctx->pc = 0x1E4088u;
            goto label_1e4088;
        }
    }
    ctx->pc = 0x1E4054u;
    // 0x1e4054: 0x0  nop
    ctx->pc = 0x1e4054u;
    // NOP
label_1e4058:
    // 0x1e4058: 0xc078e90  jal         func_1E3A40
    ctx->pc = 0x1E4058u;
    SET_GPR_U32(ctx, 31, 0x1E4060u);
    ctx->pc = 0x1E405Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E4058u;
            // 0x1e405c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E3A40u;
    if (runtime->hasFunction(0x1E3A40u)) {
        auto targetFn = runtime->lookupFunction(0x1E3A40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E4060u; }
        if (ctx->pc != 0x1E4060u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001E3A40_0x1e3a40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E4060u; }
        if (ctx->pc != 0x1E4060u) { return; }
    }
    ctx->pc = 0x1E4060u;
label_1e4060:
    // 0x1e4060: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1e4060u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e4064: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1e4064u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e4068: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x1e4068u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e406c: 0xc078e9a  jal         func_1E3A68
    ctx->pc = 0x1E406Cu;
    SET_GPR_U32(ctx, 31, 0x1E4074u);
    ctx->pc = 0x1E4070u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E406Cu;
            // 0x1e4070: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E3A68u;
    if (runtime->hasFunction(0x1E3A68u)) {
        auto targetFn = runtime->lookupFunction(0x1E3A68u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E4074u; }
        if (ctx->pc != 0x1E4074u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001E3A68_0x1e3a68(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E4074u; }
        if (ctx->pc != 0x1E4074u) { return; }
    }
    ctx->pc = 0x1E4074u;
label_1e4074:
    // 0x1e4074: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x1e4074u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e4078: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1e4078u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e407c: 0xc0809fa  jal         func_2027E8
    ctx->pc = 0x1E407Cu;
    SET_GPR_U32(ctx, 31, 0x1E4084u);
    ctx->pc = 0x1E4080u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E407Cu;
            // 0x1e4080: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2027E8u;
    if (runtime->hasFunction(0x2027E8u)) {
        auto targetFn = runtime->lookupFunction(0x2027E8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E4084u; }
        if (ctx->pc != 0x1E4084u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002027E8_0x2027e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E4084u; }
        if (ctx->pc != 0x1E4084u) { return; }
    }
    ctx->pc = 0x1E4084u;
label_1e4084:
    // 0x1e4084: 0xdfb000a0  ld          $s0, 0xA0($sp)
    ctx->pc = 0x1e4084u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 160)));
label_1e4088:
    // 0x1e4088: 0xdfb100a8  ld          $s1, 0xA8($sp)
    ctx->pc = 0x1e4088u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x1e408c: 0xdfb200b0  ld          $s2, 0xB0($sp)
    ctx->pc = 0x1e408cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1e4090: 0xdfb300b8  ld          $s3, 0xB8($sp)
    ctx->pc = 0x1e4090u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x1e4094: 0xdfbf00c0  ld          $ra, 0xC0($sp)
    ctx->pc = 0x1e4094u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x1e4098: 0x3e00008  jr          $ra
    ctx->pc = 0x1E4098u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E409Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E4098u;
            // 0x1e409c: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1E40A0u;
label_1e40a0:
    // 0x1e40a0: 0x27bdff30  addiu       $sp, $sp, -0xD0
    ctx->pc = 0x1e40a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967088));
    // 0x1e40a4: 0xffb100a8  sd          $s1, 0xA8($sp)
    ctx->pc = 0x1e40a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 168), GPR_U64(ctx, 17));
    // 0x1e40a8: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1e40a8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e40ac: 0xffb200b0  sd          $s2, 0xB0($sp)
    ctx->pc = 0x1e40acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 18));
    // 0x1e40b0: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x1e40b0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e40b4: 0xffb300b8  sd          $s3, 0xB8($sp)
    ctx->pc = 0x1e40b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 184), GPR_U64(ctx, 19));
    // 0x1e40b8: 0xffb000a0  sd          $s0, 0xA0($sp)
    ctx->pc = 0x1e40b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 16));
    // 0x1e40bc: 0xffbf00c0  sd          $ra, 0xC0($sp)
    ctx->pc = 0x1e40bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 192), GPR_U64(ctx, 31));
    // 0x1e40c0: 0xc078a58  jal         func_1E2960
    ctx->pc = 0x1E40C0u;
    SET_GPR_U32(ctx, 31, 0x1E40C8u);
    ctx->pc = 0x1E40C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E40C0u;
            // 0x1e40c4: 0xc0982d  daddu       $s3, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E2960u;
    if (runtime->hasFunction(0x1E2960u)) {
        auto targetFn = runtime->lookupFunction(0x1E2960u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E40C8u; }
        if (ctx->pc != 0x1E40C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001E2960_0x1e2960(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E40C8u; }
        if (ctx->pc != 0x1E40C8u) { return; }
    }
    ctx->pc = 0x1E40C8u;
label_1e40c8:
    // 0x1e40c8: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x1e40c8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    // 0x1e40cc: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1e40ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1e40d0: 0x10430005  beq         $v0, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x1E40D0u;
    {
        const bool branch_taken_0x1e40d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x1E40D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E40D0u;
            // 0x1e40d4: 0x2484dc00  addiu       $a0, $a0, -0x2400 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294958080));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e40d0) {
            ctx->pc = 0x1E40E8u;
            goto label_1e40e8;
        }
    }
    ctx->pc = 0x1E40D8u;
    // 0x1e40d8: 0xc079afa  jal         func_1E6BE8
    ctx->pc = 0x1E40D8u;
    SET_GPR_U32(ctx, 31, 0x1E40E0u);
    ctx->pc = 0x1E6BE8u;
    if (runtime->hasFunction(0x1E6BE8u)) {
        auto targetFn = runtime->lookupFunction(0x1E6BE8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E40E0u; }
        if (ctx->pc != 0x1E40E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001E6BE8_0x1e6be8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E40E0u; }
        if (ctx->pc != 0x1E40E0u) { return; }
    }
    ctx->pc = 0x1E40E0u;
label_1e40e0:
    // 0x1e40e0: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x1E40E0u;
    {
        const bool branch_taken_0x1e40e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E40E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E40E0u;
            // 0x1e40e4: 0xdfb000a0  ld          $s0, 0xA0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e40e0) {
            ctx->pc = 0x1E4138u;
            goto label_1e4138;
        }
    }
    ctx->pc = 0x1E40E8u;
label_1e40e8:
    // 0x1e40e8: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x1e40e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1e40ec: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1E40ECu;
    {
        const bool branch_taken_0x1e40ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1E40F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E40ECu;
            // 0x1e40f0: 0x3c04003f  lui         $a0, 0x3F (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e40ec) {
            ctx->pc = 0x1E4108u;
            goto label_1e4108;
        }
    }
    ctx->pc = 0x1E40F4u;
    // 0x1e40f4: 0xc079afa  jal         func_1E6BE8
    ctx->pc = 0x1E40F4u;
    SET_GPR_U32(ctx, 31, 0x1E40FCu);
    ctx->pc = 0x1E40F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E40F4u;
            // 0x1e40f8: 0x2484dc30  addiu       $a0, $a0, -0x23D0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294958128));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E6BE8u;
    if (runtime->hasFunction(0x1E6BE8u)) {
        auto targetFn = runtime->lookupFunction(0x1E6BE8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E40FCu; }
        if (ctx->pc != 0x1E40FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001E6BE8_0x1e6be8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E40FCu; }
        if (ctx->pc != 0x1E40FCu) { return; }
    }
    ctx->pc = 0x1E40FCu;
label_1e40fc:
    // 0x1e40fc: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x1E40FCu;
    {
        const bool branch_taken_0x1e40fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E4100u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E40FCu;
            // 0x1e4100: 0xdfb000a0  ld          $s0, 0xA0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e40fc) {
            ctx->pc = 0x1E4138u;
            goto label_1e4138;
        }
    }
    ctx->pc = 0x1E4104u;
    // 0x1e4104: 0x0  nop
    ctx->pc = 0x1e4104u;
    // NOP
label_1e4108:
    // 0x1e4108: 0xc078e90  jal         func_1E3A40
    ctx->pc = 0x1E4108u;
    SET_GPR_U32(ctx, 31, 0x1E4110u);
    ctx->pc = 0x1E410Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E4108u;
            // 0x1e410c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E3A40u;
    if (runtime->hasFunction(0x1E3A40u)) {
        auto targetFn = runtime->lookupFunction(0x1E3A40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E4110u; }
        if (ctx->pc != 0x1E4110u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001E3A40_0x1e3a40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E4110u; }
        if (ctx->pc != 0x1E4110u) { return; }
    }
    ctx->pc = 0x1E4110u;
label_1e4110:
    // 0x1e4110: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1e4110u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e4114: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1e4114u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e4118: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x1e4118u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e411c: 0xc078e9a  jal         func_1E3A68
    ctx->pc = 0x1E411Cu;
    SET_GPR_U32(ctx, 31, 0x1E4124u);
    ctx->pc = 0x1E4120u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E411Cu;
            // 0x1e4120: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E3A68u;
    if (runtime->hasFunction(0x1E3A68u)) {
        auto targetFn = runtime->lookupFunction(0x1E3A68u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E4124u; }
        if (ctx->pc != 0x1E4124u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001E3A68_0x1e3a68(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E4124u; }
        if (ctx->pc != 0x1E4124u) { return; }
    }
    ctx->pc = 0x1E4124u;
label_1e4124:
    // 0x1e4124: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x1e4124u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e4128: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1e4128u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e412c: 0xc080a22  jal         func_202888
    ctx->pc = 0x1E412Cu;
    SET_GPR_U32(ctx, 31, 0x1E4134u);
    ctx->pc = 0x1E4130u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E412Cu;
            // 0x1e4130: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x202888u;
    if (runtime->hasFunction(0x202888u)) {
        auto targetFn = runtime->lookupFunction(0x202888u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E4134u; }
        if (ctx->pc != 0x1E4134u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00202888_0x202888(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E4134u; }
        if (ctx->pc != 0x1E4134u) { return; }
    }
    ctx->pc = 0x1E4134u;
label_1e4134:
    // 0x1e4134: 0xdfb000a0  ld          $s0, 0xA0($sp)
    ctx->pc = 0x1e4134u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 160)));
label_1e4138:
    // 0x1e4138: 0xdfb100a8  ld          $s1, 0xA8($sp)
    ctx->pc = 0x1e4138u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x1e413c: 0xdfb200b0  ld          $s2, 0xB0($sp)
    ctx->pc = 0x1e413cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1e4140: 0xdfb300b8  ld          $s3, 0xB8($sp)
    ctx->pc = 0x1e4140u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x1e4144: 0xdfbf00c0  ld          $ra, 0xC0($sp)
    ctx->pc = 0x1e4144u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x1e4148: 0x3e00008  jr          $ra
    ctx->pc = 0x1E4148u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E414Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E4148u;
            // 0x1e414c: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1E4150u;
label_1e4150:
    // 0x1e4150: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1e4150u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1e4154: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1e4154u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1e4158: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x1e4158u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e415c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1e415cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1e4160: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1e4160u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e4164: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1e4164u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1e4168: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x1e4168u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x1e416c: 0xc078a58  jal         func_1E2960
    ctx->pc = 0x1E416Cu;
    SET_GPR_U32(ctx, 31, 0x1E4174u);
    ctx->pc = 0x1E4170u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E416Cu;
            // 0x1e4170: 0x200902d  daddu       $s2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E2960u;
    if (runtime->hasFunction(0x1E2960u)) {
        auto targetFn = runtime->lookupFunction(0x1E2960u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E4174u; }
        if (ctx->pc != 0x1E4174u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001E2960_0x1e2960(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E4174u; }
        if (ctx->pc != 0x1E4174u) { return; }
    }
    ctx->pc = 0x1E4174u;
label_1e4174:
    // 0x1e4174: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1e4174u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1e4178: 0x10430009  beq         $v0, $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x1E4178u;
    {
        const bool branch_taken_0x1e4178 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x1E417Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E4178u;
            // 0x1e417c: 0x3c04003f  lui         $a0, 0x3F (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e4178) {
            ctx->pc = 0x1E41A0u;
            goto label_1e41a0;
        }
    }
    ctx->pc = 0x1E4180u;
    // 0x1e4180: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1e4180u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e4184: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1e4184u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1e4188: 0x2484dc60  addiu       $a0, $a0, -0x23A0
    ctx->pc = 0x1e4188u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294958176));
    // 0x1e418c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1e418cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e4190: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x1e4190u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1e4194: 0x8079afa  j           func_1E6BE8
    ctx->pc = 0x1E4194u;
    ctx->pc = 0x1E4198u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E4194u;
            // 0x1e4198: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E6BE8u;
    if (runtime->hasFunction(0x1E6BE8u)) {
        auto targetFn = runtime->lookupFunction(0x1E6BE8u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_001E6BE8_0x1e6be8(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x1E419Cu;
    // 0x1e419c: 0x0  nop
    ctx->pc = 0x1e419cu;
    // NOP
label_1e41a0:
    // 0x1e41a0: 0x8e220380  lw          $v0, 0x380($s1)
    ctx->pc = 0x1e41a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 896)));
    // 0x1e41a4: 0x54400016  bnel        $v0, $zero, . + 4 + (0x16 << 2)
    ctx->pc = 0x1E41A4u;
    {
        const bool branch_taken_0x1e41a4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1e41a4) {
            ctx->pc = 0x1E41A8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1E41A4u;
            // 0x1e41a8: 0xae32004c  sw          $s2, 0x4C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 76), GPR_U32(ctx, 18));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1E4200u;
            goto label_1e4200;
        }
    }
    ctx->pc = 0x1E41ACu;
    // 0x1e41ac: 0x24020101  addiu       $v0, $zero, 0x101
    ctx->pc = 0x1e41acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 257));
    // 0x1e41b0: 0x16020009  bne         $s0, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1E41B0u;
    {
        const bool branch_taken_0x1e41b0 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        ctx->pc = 0x1E41B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E41B0u;
            // 0x1e41b4: 0x3c04003f  lui         $a0, 0x3F (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e41b0) {
            ctx->pc = 0x1E41D8u;
            goto label_1e41d8;
        }
    }
    ctx->pc = 0x1E41B8u;
    // 0x1e41b8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1e41b8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e41bc: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1e41bcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1e41c0: 0x2484dc90  addiu       $a0, $a0, -0x2370
    ctx->pc = 0x1e41c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294958224));
    // 0x1e41c4: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1e41c4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e41c8: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x1e41c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1e41cc: 0x8079afa  j           func_1E6BE8
    ctx->pc = 0x1E41CCu;
    ctx->pc = 0x1E41D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E41CCu;
            // 0x1e41d0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E6BE8u;
    if (runtime->hasFunction(0x1E6BE8u)) {
        auto targetFn = runtime->lookupFunction(0x1E6BE8u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_001E6BE8_0x1e6be8(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x1E41D4u;
    // 0x1e41d4: 0x0  nop
    ctx->pc = 0x1e41d4u;
    // NOP
label_1e41d8:
    // 0x1e41d8: 0x56000009  bnel        $s0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x1E41D8u;
    {
        const bool branch_taken_0x1e41d8 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x1e41d8) {
            ctx->pc = 0x1E41DCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1E41D8u;
            // 0x1e41dc: 0xae32004c  sw          $s2, 0x4C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 76), GPR_U32(ctx, 18));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1E4200u;
            goto label_1e4200;
        }
    }
    ctx->pc = 0x1E41E0u;
    // 0x1e41e0: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x1e41e0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    // 0x1e41e4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1e41e4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e41e8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1e41e8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1e41ec: 0x2484dcd8  addiu       $a0, $a0, -0x2328
    ctx->pc = 0x1e41ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294958296));
    // 0x1e41f0: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1e41f0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e41f4: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x1e41f4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1e41f8: 0x8079afa  j           func_1E6BE8
    ctx->pc = 0x1E41F8u;
    ctx->pc = 0x1E41FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E41F8u;
            // 0x1e41fc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E6BE8u;
    if (runtime->hasFunction(0x1E6BE8u)) {
        auto targetFn = runtime->lookupFunction(0x1E6BE8u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_001E6BE8_0x1e6be8(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x1E4200u;
label_1e4200:
    // 0x1e4200: 0xc078a9e  jal         func_1E2A78
    ctx->pc = 0x1E4200u;
    SET_GPR_U32(ctx, 31, 0x1E4208u);
    ctx->pc = 0x1E4204u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E4200u;
            // 0x1e4204: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E2A78u;
    if (runtime->hasFunction(0x1E2A78u)) {
        auto targetFn = runtime->lookupFunction(0x1E2A78u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E4208u; }
        if (ctx->pc != 0x1E4208u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001E2A78_0x1e2a78(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E4208u; }
        if (ctx->pc != 0x1E4208u) { return; }
    }
    ctx->pc = 0x1E4208u;
label_1e4208:
    // 0x1e4208: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1e4208u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1e420c: 0x5443000a  bnel        $v0, $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x1E420Cu;
    {
        const bool branch_taken_0x1e420c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x1e420c) {
            ctx->pc = 0x1E4210u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1E420Cu;
            // 0x1e4210: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1E4238u;
            goto label_1e4238;
        }
    }
    ctx->pc = 0x1E4214u;
    // 0x1e4214: 0x56400008  bnel        $s2, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x1E4214u;
    {
        const bool branch_taken_0x1e4214 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        if (branch_taken_0x1e4214) {
            ctx->pc = 0x1E4218u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1E4214u;
            // 0x1e4218: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1E4238u;
            goto label_1e4238;
        }
    }
    ctx->pc = 0x1E421Cu;
    // 0x1e421c: 0xc077fc4  jal         func_1DFF10
    ctx->pc = 0x1E421Cu;
    SET_GPR_U32(ctx, 31, 0x1E4224u);
    ctx->pc = 0x1E4220u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E421Cu;
            // 0x1e4220: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DFF10u;
    if (runtime->hasFunction(0x1DFF10u)) {
        auto targetFn = runtime->lookupFunction(0x1DFF10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E4224u; }
        if (ctx->pc != 0x1E4224u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DFF10_0x1dff10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E4224u; }
        if (ctx->pc != 0x1E4224u) { return; }
    }
    ctx->pc = 0x1E4224u;
label_1e4224:
    // 0x1e4224: 0x24030011  addiu       $v1, $zero, 0x11
    ctx->pc = 0x1e4224u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    // 0x1e4228: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1e4228u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e422c: 0x101027  nor         $v0, $zero, $s0
    ctx->pc = 0x1e422cu;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 16)));
    // 0x1e4230: 0x62800a  movz        $s0, $v1, $v0
    ctx->pc = 0x1e4230u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 3));
    // 0x1e4234: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1e4234u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1e4238:
    // 0x1e4238: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1e4238u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1e423c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1e423cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e4240: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1e4240u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e4244: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1e4244u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e4248: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x1e4248u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1e424c: 0x8079096  j           func_1E4258
    ctx->pc = 0x1E424Cu;
    ctx->pc = 0x1E4250u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E424Cu;
            // 0x1e4250: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E4258u;
    if (runtime->hasFunction(0x1E4258u)) {
        auto targetFn = runtime->lookupFunction(0x1E4258u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_001E4258_0x1e4258(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x1E4254u;
    // 0x1e4254: 0x0  nop
    ctx->pc = 0x1e4254u;
    // NOP
    ctx->pc = 0x1e4258u;
}
