#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001B4F48
// Address: 0x1b4f48 - 0x1b50b8
void sub_001B4F48_0x1b4f48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001B4F48_0x1b4f48");
#endif

    switch (ctx->pc) {
        case 0x1b4f90u: goto label_1b4f90;
        case 0x1b4fd8u: goto label_1b4fd8;
        case 0x1b4fe4u: goto label_1b4fe4;
        case 0x1b4ff4u: goto label_1b4ff4;
        case 0x1b5018u: goto label_1b5018;
        case 0x1b5034u: goto label_1b5034;
        case 0x1b5048u: goto label_1b5048;
        case 0x1b5074u: goto label_1b5074;
        default: break;
    }

    ctx->pc = 0x1b4f48u;

    // 0x1b4f48: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1b4f48u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1b4f4c: 0x3c070038  lui         $a3, 0x38
    ctx->pc = 0x1b4f4cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)56 << 16));
    // 0x1b4f50: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x1b4f50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x1b4f54: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x1b4f54u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b4f58: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x1b4f58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x1b4f5c: 0xc0a02d  daddu       $s4, $a2, $zero
    ctx->pc = 0x1b4f5cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b4f60: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x1b4f60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x1b4f64: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x1b4f64u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b4f68: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1b4f68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1b4f6c: 0x24e3a948  addiu       $v1, $a3, -0x56B8
    ctx->pc = 0x1b4f6cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), 4294945096));
    // 0x1b4f70: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1b4f70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1b4f74: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1b4f74u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b4f78: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1b4f78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1b4f7c: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x1b4f7cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x1b4f80: 0x80620000  lb          $v0, 0x0($v1)
    ctx->pc = 0x1b4f80u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1b4f84: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x1B4F84u;
    {
        const bool branch_taken_0x1b4f84 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B4F88u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B4F84u;
            // 0x1b4f88: 0x8e900000  lw          $s0, 0x0($s4) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b4f84) {
            ctx->pc = 0x1B4FB4u;
            goto label_1b4fb4;
        }
    }
    ctx->pc = 0x1B4F8Cu;
    // 0x1b4f8c: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x1b4f8cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_1b4f90:
    // 0x1b4f90: 0x28820010  slti        $v0, $a0, 0x10
    ctx->pc = 0x1b4f90u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)16) ? 1 : 0);
    // 0x1b4f94: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1B4F94u;
    {
        const bool branch_taken_0x1b4f94 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B4F98u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B4F94u;
            // 0x1b4f98: 0x246300ac  addiu       $v1, $v1, 0xAC (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 172));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b4f94) {
            ctx->pc = 0x1B4FB4u;
            goto label_1b4fb4;
        }
    }
    ctx->pc = 0x1B4F9Cu;
    // 0x1b4f9c: 0x80620000  lb          $v0, 0x0($v1)
    ctx->pc = 0x1b4f9cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1b4fa0: 0x0  nop
    ctx->pc = 0x1b4fa0u;
    // NOP
    // 0x1b4fa4: 0x0  nop
    ctx->pc = 0x1b4fa4u;
    // NOP
    // 0x1b4fa8: 0x0  nop
    ctx->pc = 0x1b4fa8u;
    // NOP
    // 0x1b4fac: 0x5440fff8  bnel        $v0, $zero, . + 4 + (-0x8 << 2)
    ctx->pc = 0x1B4FACu;
    {
        const bool branch_taken_0x1b4fac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b4fac) {
            ctx->pc = 0x1B4FB0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1B4FACu;
            // 0x1b4fb0: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1B4F90u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1b4f90;
        }
    }
    ctx->pc = 0x1B4FB4u;
label_1b4fb4:
    // 0x1b4fb4: 0x24030010  addiu       $v1, $zero, 0x10
    ctx->pc = 0x1b4fb4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x1b4fb8: 0x10830035  beq         $a0, $v1, . + 4 + (0x35 << 2)
    ctx->pc = 0x1B4FB8u;
    {
        const bool branch_taken_0x1b4fb8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x1B4FBCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B4FB8u;
            // 0x1b4fbc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b4fb8) {
            ctx->pc = 0x1B5090u;
            goto label_1b5090;
        }
    }
    ctx->pc = 0x1B4FC0u;
    // 0x1b4fc0: 0x240200ac  addiu       $v0, $zero, 0xAC
    ctx->pc = 0x1b4fc0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 172));
    // 0x1b4fc4: 0x24e3a948  addiu       $v1, $a3, -0x56B8
    ctx->pc = 0x1b4fc4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), 4294945096));
    // 0x1b4fc8: 0x821018  mult        $v0, $a0, $v0
    ctx->pc = 0x1b4fc8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x1b4fcc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1b4fccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b4fd0: 0xc072fec  jal         func_1CBFB0
    ctx->pc = 0x1B4FD0u;
    SET_GPR_U32(ctx, 31, 0x1B4FD8u);
    ctx->pc = 0x1B4FD4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B4FD0u;
            // 0x1b4fd4: 0x439021  addu        $s2, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1CBFB0u;
    if (runtime->hasFunction(0x1CBFB0u)) {
        auto targetFn = runtime->lookupFunction(0x1CBFB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B4FD8u; }
        if (ctx->pc != 0x1B4FD8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001CBFB0_0x1cbfb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B4FD8u; }
        if (ctx->pc != 0x1B4FD8u) { return; }
    }
    ctx->pc = 0x1B4FD8u;
label_1b4fd8:
    // 0x1b4fd8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1b4fd8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b4fdc: 0xc072fee  jal         func_1CBFB8
    ctx->pc = 0x1B4FDCu;
    SET_GPR_U32(ctx, 31, 0x1B4FE4u);
    ctx->pc = 0x1B4FE0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B4FDCu;
            // 0x1b4fe0: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1CBFB8u;
    if (runtime->hasFunction(0x1CBFB8u)) {
        auto targetFn = runtime->lookupFunction(0x1CBFB8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B4FE4u; }
        if (ctx->pc != 0x1B4FE4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001CBFB8_0x1cbfb8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B4FE4u; }
        if (ctx->pc != 0x1B4FE4u) { return; }
    }
    ctx->pc = 0x1B4FE4u;
label_1b4fe4:
    // 0x1b4fe4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1b4fe4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b4fe8: 0x287c2  srl         $s0, $v0, 31
    ctx->pc = 0x1b4fe8u;
    SET_GPR_S32(ctx, 16, (int32_t)SRL32(GPR_U32(ctx, 2), 31));
    // 0x1b4fec: 0xc072ff0  jal         func_1CBFC0
    ctx->pc = 0x1B4FECu;
    SET_GPR_U32(ctx, 31, 0x1B4FF4u);
    ctx->pc = 0x1B4FF0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B4FECu;
            // 0x1b4ff0: 0x2028021  addu        $s0, $s0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1CBFC0u;
    if (runtime->hasFunction(0x1CBFC0u)) {
        auto targetFn = runtime->lookupFunction(0x1CBFC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B4FF4u; }
        if (ctx->pc != 0x1B4FF4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001CBFC0_0x1cbfc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B4FF4u; }
        if (ctx->pc != 0x1B4FF4u) { return; }
    }
    ctx->pc = 0x1B4FF4u;
label_1b4ff4:
    // 0x1b4ff4: 0x23fc2  srl         $a3, $v0, 31
    ctx->pc = 0x1b4ff4u;
    SET_GPR_S32(ctx, 7, (int32_t)SRL32(GPR_U32(ctx, 2), 31));
    // 0x1b4ff8: 0x108043  sra         $s0, $s0, 1
    ctx->pc = 0x1b4ff8u;
    SET_GPR_S32(ctx, 16, SRA32(GPR_S32(ctx, 16), 1));
    // 0x1b4ffc: 0xe23821  addu        $a3, $a3, $v0
    ctx->pc = 0x1b4ffcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x1b5000: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x1b5000u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b5004: 0x73843  sra         $a3, $a3, 1
    ctx->pc = 0x1b5004u;
    SET_GPR_S32(ctx, 7, SRA32(GPR_S32(ctx, 7), 1));
    // 0x1b5008: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1b5008u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b500c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1b500cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b5010: 0xc06aca4  jal         func_1AB290
    ctx->pc = 0x1B5010u;
    SET_GPR_U32(ctx, 31, 0x1B5018u);
    ctx->pc = 0x1B5014u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B5010u;
            // 0x1b5014: 0xc73821  addu        $a3, $a2, $a3 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1AB290u;
    if (runtime->hasFunction(0x1AB290u)) {
        auto targetFn = runtime->lookupFunction(0x1AB290u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B5018u; }
        if (ctx->pc != 0x1B5018u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001AB290_0x1ab290(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B5018u; }
        if (ctx->pc != 0x1B5018u) { return; }
    }
    ctx->pc = 0x1B5018u;
label_1b5018:
    // 0x1b5018: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1b5018u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b501c: 0x1080001c  beqz        $a0, . + 4 + (0x1C << 2)
    ctx->pc = 0x1B501Cu;
    {
        const bool branch_taken_0x1b501c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B5020u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B501Cu;
            // 0x1b5020: 0xae440004  sw          $a0, 0x4($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b501c) {
            ctx->pc = 0x1B5090u;
            goto label_1b5090;
        }
    }
    ctx->pc = 0x1B5024u;
    // 0x1b5024: 0x3c05001b  lui         $a1, 0x1B
    ctx->pc = 0x1b5024u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)27 << 16));
    // 0x1b5028: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x1b5028u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b502c: 0xc06ae42  jal         func_1AB908
    ctx->pc = 0x1B502Cu;
    SET_GPR_U32(ctx, 31, 0x1B5034u);
    ctx->pc = 0x1B5030u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B502Cu;
            // 0x1b5030: 0x24a55548  addiu       $a1, $a1, 0x5548 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 21832));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1AB908u;
    if (runtime->hasFunction(0x1AB908u)) {
        auto targetFn = runtime->lookupFunction(0x1AB908u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B5034u; }
        if (ctx->pc != 0x1B5034u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001AB908_0x1ab908(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B5034u; }
        if (ctx->pc != 0x1B5034u) { return; }
    }
    ctx->pc = 0x1B5034u;
label_1b5034:
    // 0x1b5034: 0xae550008  sw          $s5, 0x8($s2)
    ctx->pc = 0x1b5034u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 21));
    // 0x1b5038: 0xa2530002  sb          $s3, 0x2($s2)
    ctx->pc = 0x1b5038u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 2), (uint8_t)GPR_U32(ctx, 19));
    // 0x1b503c: 0x1a60000a  blez        $s3, . + 4 + (0xA << 2)
    ctx->pc = 0x1B503Cu;
    {
        const bool branch_taken_0x1b503c = (GPR_S32(ctx, 19) <= 0);
        ctx->pc = 0x1B5040u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B503Cu;
            // 0x1b5040: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b503c) {
            ctx->pc = 0x1B5068u;
            goto label_1b5068;
        }
    }
    ctx->pc = 0x1B5044u;
    // 0x1b5044: 0x2647000c  addiu       $a3, $s2, 0xC
    ctx->pc = 0x1b5044u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 18), 12));
label_1b5048:
    // 0x1b5048: 0x61080  sll         $v0, $a2, 2
    ctx->pc = 0x1b5048u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x1b504c: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x1b504cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x1b5050: 0x541821  addu        $v1, $v0, $s4
    ctx->pc = 0x1b5050u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
    // 0x1b5054: 0xe21021  addu        $v0, $a3, $v0
    ctx->pc = 0x1b5054u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x1b5058: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x1b5058u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1b505c: 0xd3282a  slt         $a1, $a2, $s3
    ctx->pc = 0x1b505cu;
    SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 19)) ? 1 : 0);
    // 0x1b5060: 0x14a0fff9  bnez        $a1, . + 4 + (-0x7 << 2)
    ctx->pc = 0x1B5060u;
    {
        const bool branch_taken_0x1b5060 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B5064u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B5060u;
            // 0x1b5064: 0xac440000  sw          $a0, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b5060) {
            ctx->pc = 0x1B5048u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1b5048;
        }
    }
    ctx->pc = 0x1B5068u;
label_1b5068:
    // 0x1b5068: 0xa2400001  sb          $zero, 0x1($s2)
    ctx->pc = 0x1b5068u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x1b506c: 0xc06d3c2  jal         func_1B4F08
    ctx->pc = 0x1B506Cu;
    SET_GPR_U32(ctx, 31, 0x1B5074u);
    ctx->pc = 0x1B5070u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B506Cu;
            // 0x1b5070: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B4F08u;
    if (runtime->hasFunction(0x1B4F08u)) {
        auto targetFn = runtime->lookupFunction(0x1B4F08u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B5074u; }
        if (ctx->pc != 0x1B5074u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B4F08_0x1b4f08(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B5074u; }
        if (ctx->pc != 0x1B5074u) { return; }
    }
    ctx->pc = 0x1B5074u;
label_1b5074:
    // 0x1b5074: 0xae400048  sw          $zero, 0x48($s2)
    ctx->pc = 0x1b5074u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 72), GPR_U32(ctx, 0));
    // 0x1b5078: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1b5078u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b507c: 0xae40004c  sw          $zero, 0x4C($s2)
    ctx->pc = 0x1b507cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 76), GPR_U32(ctx, 0));
    // 0x1b5080: 0xae400050  sw          $zero, 0x50($s2)
    ctx->pc = 0x1b5080u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 80), GPR_U32(ctx, 0));
    // 0x1b5084: 0xae400054  sw          $zero, 0x54($s2)
    ctx->pc = 0x1b5084u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 84), GPR_U32(ctx, 0));
    // 0x1b5088: 0xa2420000  sb          $v0, 0x0($s2)
    ctx->pc = 0x1b5088u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x1b508c: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x1b508cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1b5090:
    // 0x1b5090: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1b5090u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b5094: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1b5094u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1b5098: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1b5098u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b509c: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1b509cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1b50a0: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x1b50a0u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1b50a4: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x1b50a4u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1b50a8: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x1b50a8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1b50ac: 0x3e00008  jr          $ra
    ctx->pc = 0x1B50ACu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B50B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B50ACu;
            // 0x1b50b0: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1B50B4u;
    // 0x1b50b4: 0x0  nop
    ctx->pc = 0x1b50b4u;
    // NOP
    ctx->pc = 0x1b50b8u;
}
