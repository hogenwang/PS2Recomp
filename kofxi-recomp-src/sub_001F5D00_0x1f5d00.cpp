#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001F5D00
// Address: 0x1f5d00 - 0x1f5dd0
void sub_001F5D00_0x1f5d00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001F5D00_0x1f5d00");
#endif

    switch (ctx->pc) {
        case 0x1f5d20u: goto label_1f5d20;
        case 0x1f5d50u: goto label_1f5d50;
        case 0x1f5d70u: goto label_1f5d70;
        case 0x1f5d90u: goto label_1f5d90;
        case 0x1f5db8u: goto label_1f5db8;
        default: break;
    }

    ctx->pc = 0x1f5d00u;

    // 0x1f5d00: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1f5d00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1f5d04: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1f5d04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1f5d08: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1f5d08u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f5d0c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1f5d0cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1f5d10: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1f5d10u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f5d14: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1f5d14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1f5d18: 0xc043328  jal         func_10CCA0
    ctx->pc = 0x1F5D18u;
    SET_GPR_U32(ctx, 31, 0x1F5D20u);
    ctx->pc = 0x1F5D1Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F5D18u;
            // 0x1f5d1c: 0x8e040040  lw          $a0, 0x40($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 64)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10CCA0u;
    if (runtime->hasFunction(0x10CCA0u)) {
        auto targetFn = runtime->lookupFunction(0x10CCA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F5D20u; }
        if (ctx->pc != 0x1F5D20u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        kofxiSyscallWaitSemaWrapper_0x10cca0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F5D20u; }
        if (ctx->pc != 0x1F5D20u) { return; }
    }
    ctx->pc = 0x1F5D20u;
label_1f5d20:
    // 0x1f5d20: 0x8e030014  lw          $v1, 0x14($s0)
    ctx->pc = 0x1f5d20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x1f5d24: 0xde020048  ld          $v0, 0x48($s0)
    ctx->pc = 0x1f5d24u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 16), 72)));
    // 0x1f5d28: 0x711821  addu        $v1, $v1, $s1
    ctx->pc = 0x1f5d28u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x1f5d2c: 0x8e040040  lw          $a0, 0x40($s0)
    ctx->pc = 0x1f5d2cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 64)));
    // 0x1f5d30: 0x222102d  daddu       $v0, $s1, $v0
    ctx->pc = 0x1f5d30u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 2));
    // 0x1f5d34: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1f5d34u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1f5d38: 0xae030014  sw          $v1, 0x14($s0)
    ctx->pc = 0x1f5d38u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 3));
    // 0x1f5d3c: 0xfe020048  sd          $v0, 0x48($s0)
    ctx->pc = 0x1f5d3cu;
    WRITE64(ADD32(GPR_U32(ctx, 16), 72), GPR_U64(ctx, 2));
    // 0x1f5d40: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1f5d40u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1f5d44: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1f5d44u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1f5d48: 0x8043320  j           func_10CC80
    ctx->pc = 0x1F5D48u;
    ctx->pc = 0x1F5D4Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F5D48u;
            // 0x1f5d4c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10CC80u;
    if (runtime->hasFunction(0x10CC80u)) {
        auto targetFn = runtime->lookupFunction(0x10CC80u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_0010CC80_0x10cc80(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x1F5D50u;
label_1f5d50:
    // 0x1f5d50: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1f5d50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1f5d54: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1f5d54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1f5d58: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1f5d58u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f5d5c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1f5d5cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1f5d60: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1f5d60u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f5d64: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1f5d64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1f5d68: 0xc043328  jal         func_10CCA0
    ctx->pc = 0x1F5D68u;
    SET_GPR_U32(ctx, 31, 0x1F5D70u);
    ctx->pc = 0x1F5D6Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F5D68u;
            // 0x1f5d6c: 0x8e040040  lw          $a0, 0x40($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 64)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10CCA0u;
    if (runtime->hasFunction(0x10CCA0u)) {
        auto targetFn = runtime->lookupFunction(0x10CCA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F5D70u; }
        if (ctx->pc != 0x1F5D70u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        kofxiSyscallWaitSemaWrapper_0x10cca0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F5D70u; }
        if (ctx->pc != 0x1F5D70u) { return; }
    }
    ctx->pc = 0x1F5D70u;
label_1f5d70:
    // 0x1f5d70: 0x8e030014  lw          $v1, 0x14($s0)
    ctx->pc = 0x1f5d70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x1f5d74: 0xde020048  ld          $v0, 0x48($s0)
    ctx->pc = 0x1f5d74u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 16), 72)));
    // 0x1f5d78: 0x711823  subu        $v1, $v1, $s1
    ctx->pc = 0x1f5d78u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x1f5d7c: 0x51102f  dsubu       $v0, $v0, $s1
    ctx->pc = 0x1f5d7cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) - GPR_U64(ctx, 17));
    // 0x1f5d80: 0xae030014  sw          $v1, 0x14($s0)
    ctx->pc = 0x1f5d80u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 3));
    // 0x1f5d84: 0x461000a  bgez        $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x1F5D84u;
    {
        const bool branch_taken_0x1f5d84 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x1F5D88u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F5D84u;
            // 0x1f5d88: 0xfe020048  sd          $v0, 0x48($s0) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 16), 72), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f5d84) {
            ctx->pc = 0x1F5DB0u;
            goto label_1f5db0;
        }
    }
    ctx->pc = 0x1F5D8Cu;
    // 0x1f5d8c: 0x0  nop
    ctx->pc = 0x1f5d8cu;
    // NOP
label_1f5d90:
    // 0x1f5d90: 0x0  nop
    ctx->pc = 0x1f5d90u;
    // NOP
    // 0x1f5d94: 0x0  nop
    ctx->pc = 0x1f5d94u;
    // NOP
    // 0x1f5d98: 0x0  nop
    ctx->pc = 0x1f5d98u;
    // NOP
    // 0x1f5d9c: 0x0  nop
    ctx->pc = 0x1f5d9cu;
    // NOP
    // 0x1f5da0: 0x0  nop
    ctx->pc = 0x1f5da0u;
    // NOP
    // 0x1f5da4: 0x1000fffa  b           . + 4 + (-0x6 << 2)
    ctx->pc = 0x1F5DA4u;
    {
        const bool branch_taken_0x1f5da4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f5da4) {
            ctx->pc = 0x1F5D90u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1f5d90;
        }
    }
    ctx->pc = 0x1F5DACu;
    // 0x1f5dac: 0x0  nop
    ctx->pc = 0x1f5dacu;
    // NOP
label_1f5db0:
    // 0x1f5db0: 0xc043320  jal         func_10CC80
    ctx->pc = 0x1F5DB0u;
    SET_GPR_U32(ctx, 31, 0x1F5DB8u);
    ctx->pc = 0x1F5DB4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F5DB0u;
            // 0x1f5db4: 0x8e040040  lw          $a0, 0x40($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 64)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10CC80u;
    if (runtime->hasFunction(0x10CC80u)) {
        auto targetFn = runtime->lookupFunction(0x10CC80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F5DB8u; }
        if (ctx->pc != 0x1F5DB8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010CC80_0x10cc80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F5DB8u; }
        if (ctx->pc != 0x1F5DB8u) { return; }
    }
    ctx->pc = 0x1F5DB8u;
label_1f5db8:
    // 0x1f5db8: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x1f5db8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f5dbc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1f5dbcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1f5dc0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1f5dc0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1f5dc4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1f5dc4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1f5dc8: 0x3e00008  jr          $ra
    ctx->pc = 0x1F5DC8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F5DCCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F5DC8u;
            // 0x1f5dcc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1F5DD0u;
    ctx->pc = 0x1f5dd0u;
}
