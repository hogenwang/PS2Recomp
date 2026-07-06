#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001F5FD0
// Address: 0x1f5fd0 - 0x1f60d0
void sub_001F5FD0_0x1f5fd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001F5FD0_0x1f5fd0");
#endif

    switch (ctx->pc) {
        case 0x1f5fe8u: goto label_1f5fe8;
        case 0x1f5ff4u: goto label_1f5ff4;
        case 0x1f6040u: goto label_1f6040;
        case 0x1f6064u: goto label_1f6064;
        case 0x1f60bcu: goto label_1f60bc;
        default: break;
    }

    ctx->pc = 0x1f5fd0u;

    // 0x1f5fd0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1f5fd0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1f5fd4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1f5fd4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1f5fd8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1f5fd8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f5fdc: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1f5fdcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1f5fe0: 0xc043328  jal         func_10CCA0
    ctx->pc = 0x1F5FE0u;
    SET_GPR_U32(ctx, 31, 0x1F5FE8u);
    ctx->pc = 0x1F5FE4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F5FE0u;
            // 0x1f5fe4: 0x8e040040  lw          $a0, 0x40($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 64)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10CCA0u;
    if (runtime->hasFunction(0x10CCA0u)) {
        auto targetFn = runtime->lookupFunction(0x10CCA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F5FE8u; }
        if (ctx->pc != 0x1F5FE8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        kofxiSyscallWaitSemaWrapper_0x10cca0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F5FE8u; }
        if (ctx->pc != 0x1F5FE8u) { return; }
    }
    ctx->pc = 0x1F5FE8u;
label_1f5fe8:
    // 0x1f5fe8: 0xae000044  sw          $zero, 0x44($s0)
    ctx->pc = 0x1f5fe8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 68), GPR_U32(ctx, 0));
    // 0x1f5fec: 0xc07d672  jal         func_1F59C8
    ctx->pc = 0x1F5FECu;
    SET_GPR_U32(ctx, 31, 0x1F5FF4u);
    ctx->pc = 0x1F5FF0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F5FECu;
            // 0x1f5ff0: 0x24040005  addiu       $a0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1F59C8u;
    if (runtime->hasFunction(0x1F59C8u)) {
        auto targetFn = runtime->lookupFunction(0x1F59C8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F5FF4u; }
        if (ctx->pc != 0x1F5FF4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001F59C8_0x1f59c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F5FF4u; }
        if (ctx->pc != 0x1F5FF4u) { return; }
    }
    ctx->pc = 0x1F5FF4u;
label_1f5ff4:
    // 0x1f5ff4: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x1f5ff4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x1f5ff8: 0x3442b410  ori         $v0, $v0, 0xB410
    ctx->pc = 0x1f5ff8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)46096);
    // 0x1f5ffc: 0x3c041000  lui         $a0, 0x1000
    ctx->pc = 0x1f5ffcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4096 << 16));
    // 0x1f6000: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1f6000u;
    SET_GPR_S32(ctx, 3, (int32_t)runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 2), 0))); // MMIO: 0x10000000
    // 0x1f6004: 0x3484b430  ori         $a0, $a0, 0xB430
    ctx->pc = 0x1f6004u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)46128);
    // 0x1f6008: 0x3c051000  lui         $a1, 0x1000
    ctx->pc = 0x1f6008u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)4096 << 16));
    // 0x1f600c: 0x3c061000  lui         $a2, 0x1000
    ctx->pc = 0x1f600cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)4096 << 16));
    // 0x1f6010: 0xae03001c  sw          $v1, 0x1C($s0)
    ctx->pc = 0x1f6010u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 3));
    // 0x1f6014: 0x34a5b420  ori         $a1, $a1, 0xB420
    ctx->pc = 0x1f6014u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)46112);
    // 0x1f6018: 0x34c6b400  ori         $a2, $a2, 0xB400
    ctx->pc = 0x1f6018u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)46080);
    // 0x1f601c: 0x3c071000  lui         $a3, 0x1000
    ctx->pc = 0x1f601cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)4096 << 16));
    // 0x1f6020: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x1f6020u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1f6024: 0x34e72010  ori         $a3, $a3, 0x2010
    ctx->pc = 0x1f6024u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)8208);
    // 0x1f6028: 0xae030020  sw          $v1, 0x20($s0)
    ctx->pc = 0x1f6028u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 3));
    // 0x1f602c: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x1f602cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1f6030: 0xae020024  sw          $v0, 0x24($s0)
    ctx->pc = 0x1f6030u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 2));
    // 0x1f6034: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x1f6034u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x1f6038: 0xae030028  sw          $v1, 0x28($s0)
    ctx->pc = 0x1f6038u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 3));
    // 0x1f603c: 0x0  nop
    ctx->pc = 0x1f603cu;
    // NOP
label_1f6040:
    // 0x1f6040: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x1f6040u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x1f6044: 0x304200f0  andi        $v0, $v0, 0xF0
    ctx->pc = 0x1f6044u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)240);
    // 0x1f6048: 0x0  nop
    ctx->pc = 0x1f6048u;
    // NOP
    // 0x1f604c: 0x0  nop
    ctx->pc = 0x1f604cu;
    // NOP
    // 0x1f6050: 0x0  nop
    ctx->pc = 0x1f6050u;
    // NOP
    // 0x1f6054: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1F6054u;
    {
        const bool branch_taken_0x1f6054 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1f6054) {
            ctx->pc = 0x1F6040u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1f6040;
        }
    }
    ctx->pc = 0x1F605Cu;
    // 0x1f605c: 0xc07d658  jal         func_1F5960
    ctx->pc = 0x1F605Cu;
    SET_GPR_U32(ctx, 31, 0x1F6064u);
    ctx->pc = 0x1F6060u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F605Cu;
            // 0x1f6060: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1F5960u;
    if (runtime->hasFunction(0x1F5960u)) {
        auto targetFn = runtime->lookupFunction(0x1F5960u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F6064u; }
        if (ctx->pc != 0x1F6064u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001F5960_0x1f5960(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F6064u; }
        if (ctx->pc != 0x1F6064u) { return; }
    }
    ctx->pc = 0x1F6064u;
label_1f6064:
    // 0x1f6064: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x1f6064u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x1f6068: 0x3442b010  ori         $v0, $v0, 0xB010
    ctx->pc = 0x1f6068u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)45072);
    // 0x1f606c: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x1f606cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x1f6070: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x1f6070u;
    SET_GPR_S32(ctx, 4, (int32_t)runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 2), 0))); // MMIO: 0x10000000
    // 0x1f6074: 0x3463b020  ori         $v1, $v1, 0xB020
    ctx->pc = 0x1f6074u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)45088);
    // 0x1f6078: 0x3c061000  lui         $a2, 0x1000
    ctx->pc = 0x1f6078u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)4096 << 16));
    // 0x1f607c: 0x3c071000  lui         $a3, 0x1000
    ctx->pc = 0x1f607cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)4096 << 16));
    // 0x1f6080: 0xae04002c  sw          $a0, 0x2C($s0)
    ctx->pc = 0x1f6080u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 4));
    // 0x1f6084: 0x34c6b000  ori         $a2, $a2, 0xB000
    ctx->pc = 0x1f6084u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)45056);
    // 0x1f6088: 0x34e72020  ori         $a3, $a3, 0x2020
    ctx->pc = 0x1f6088u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)8224);
    // 0x1f608c: 0x3c051000  lui         $a1, 0x1000
    ctx->pc = 0x1f608cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)4096 << 16));
    // 0x1f6090: 0x8c680000  lw          $t0, 0x0($v1)
    ctx->pc = 0x1f6090u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1f6094: 0x34a52010  ori         $a1, $a1, 0x2010
    ctx->pc = 0x1f6094u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)8208);
    // 0x1f6098: 0x8e040040  lw          $a0, 0x40($s0)
    ctx->pc = 0x1f6098u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 64)));
    // 0x1f609c: 0xae080030  sw          $t0, 0x30($s0)
    ctx->pc = 0x1f609cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 8));
    // 0x1f60a0: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x1f60a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x1f60a4: 0xae020034  sw          $v0, 0x34($s0)
    ctx->pc = 0x1f60a4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 52), GPR_U32(ctx, 2));
    // 0x1f60a8: 0x8ce30000  lw          $v1, 0x0($a3)
    ctx->pc = 0x1f60a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x1f60ac: 0xae030038  sw          $v1, 0x38($s0)
    ctx->pc = 0x1f60acu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 56), GPR_U32(ctx, 3));
    // 0x1f60b0: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x1f60b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1f60b4: 0xc043320  jal         func_10CC80
    ctx->pc = 0x1F60B4u;
    SET_GPR_U32(ctx, 31, 0x1F60BCu);
    ctx->pc = 0x1F60B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F60B4u;
            // 0x1f60b8: 0xae02003c  sw          $v0, 0x3C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 60), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10CC80u;
    if (runtime->hasFunction(0x10CC80u)) {
        auto targetFn = runtime->lookupFunction(0x10CC80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F60BCu; }
        if (ctx->pc != 0x1F60BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010CC80_0x10cc80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F60BCu; }
        if (ctx->pc != 0x1F60BCu) { return; }
    }
    ctx->pc = 0x1F60BCu;
label_1f60bc:
    // 0x1f60bc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1f60bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1f60c0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1f60c0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1f60c4: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1f60c4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1f60c8: 0x3e00008  jr          $ra
    ctx->pc = 0x1F60C8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F60CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F60C8u;
            // 0x1f60cc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1F60D0u;
    ctx->pc = 0x1f60d0u;
}
