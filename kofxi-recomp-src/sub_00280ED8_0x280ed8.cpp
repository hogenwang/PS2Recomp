#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00280ED8
// Address: 0x280ed8 - 0x280f80
void sub_00280ED8_0x280ed8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00280ED8_0x280ed8");
#endif

    switch (ctx->pc) {
        case 0x280f10u: goto label_280f10;
        case 0x280f24u: goto label_280f24;
        case 0x280f50u: goto label_280f50;
        case 0x280f70u: goto label_280f70;
        default: break;
    }

    ctx->pc = 0x280ed8u;

    // 0x280ed8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x280ed8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x280edc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x280edcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x280ee0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x280ee0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x280ee4: 0x12000022  beqz        $s0, . + 4 + (0x22 << 2)
    ctx->pc = 0x280EE4u;
    {
        const bool branch_taken_0x280ee4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x280EE8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x280EE4u;
            // 0x280ee8: 0xffbf0010  sd          $ra, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x280ee4) {
            ctx->pc = 0x280F70u;
            goto label_280f70;
        }
    }
    ctx->pc = 0x280EECu;
    // 0x280eec: 0x8e030014  lw          $v1, 0x14($s0)
    ctx->pc = 0x280eecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x280ef0: 0x30620004  andi        $v0, $v1, 0x4
    ctx->pc = 0x280ef0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4);
    // 0x280ef4: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x280EF4u;
    {
        const bool branch_taken_0x280ef4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x280EF8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x280EF4u;
            // 0x280ef8: 0x30620008  andi        $v0, $v1, 0x8 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)8);
        ctx->in_delay_slot = false;
        if (branch_taken_0x280ef4) {
            ctx->pc = 0x280F34u;
            goto label_280f34;
        }
    }
    ctx->pc = 0x280EFCu;
    // 0x280efc: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x280efcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x280f00: 0x50800004  beql        $a0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x280F00u;
    {
        const bool branch_taken_0x280f00 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x280f00) {
            ctx->pc = 0x280F04u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x280F00u;
            // 0x280f04: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x280F14u;
            goto label_280f14;
        }
    }
    ctx->pc = 0x280F08u;
    // 0x280f08: 0xc0a8c0a  jal         func_2A3028
    ctx->pc = 0x280F08u;
    SET_GPR_U32(ctx, 31, 0x280F10u);
    ctx->pc = 0x2A3028u;
    if (runtime->hasFunction(0x2A3028u)) {
        auto targetFn = runtime->lookupFunction(0x2A3028u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x280F10u; }
        if (ctx->pc != 0x280F10u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002A3028_0x2a3028(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x280F10u; }
        if (ctx->pc != 0x280F10u) { return; }
    }
    ctx->pc = 0x280F10u;
label_280f10:
    // 0x280f10: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x280f10u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_280f14:
    // 0x280f14: 0x50800004  beql        $a0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x280F14u;
    {
        const bool branch_taken_0x280f14 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x280f14) {
            ctx->pc = 0x280F18u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x280F14u;
            // 0x280f18: 0xae000004  sw          $zero, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x280F28u;
            goto label_280f28;
        }
    }
    ctx->pc = 0x280F1Cu;
    // 0x280f1c: 0xc0a8c0a  jal         func_2A3028
    ctx->pc = 0x280F1Cu;
    SET_GPR_U32(ctx, 31, 0x280F24u);
    ctx->pc = 0x2A3028u;
    if (runtime->hasFunction(0x2A3028u)) {
        auto targetFn = runtime->lookupFunction(0x2A3028u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x280F24u; }
        if (ctx->pc != 0x280F24u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002A3028_0x2a3028(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x280F24u; }
        if (ctx->pc != 0x280F24u) { return; }
    }
    ctx->pc = 0x280F24u;
label_280f24:
    // 0x280f24: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x280f24u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
label_280f28:
    // 0x280f28: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x280f28u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
    // 0x280f2c: 0x8e030014  lw          $v1, 0x14($s0)
    ctx->pc = 0x280f2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x280f30: 0x30620008  andi        $v0, $v1, 0x8
    ctx->pc = 0x280f30u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)8);
label_280f34:
    // 0x280f34: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x280F34u;
    {
        const bool branch_taken_0x280f34 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x280F38u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x280F34u;
            // 0x280f38: 0x30620001  andi        $v0, $v1, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x280f34) {
            ctx->pc = 0x280F60u;
            goto label_280f60;
        }
    }
    ctx->pc = 0x280F3Cu;
    // 0x280f3c: 0x8e040010  lw          $a0, 0x10($s0)
    ctx->pc = 0x280f3cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x280f40: 0x50800005  beql        $a0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x280F40u;
    {
        const bool branch_taken_0x280f40 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x280f40) {
            ctx->pc = 0x280F44u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x280F40u;
            // 0x280f44: 0xae000010  sw          $zero, 0x10($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x280F58u;
            goto label_280f58;
        }
    }
    ctx->pc = 0x280F48u;
    // 0x280f48: 0xc0a8c0a  jal         func_2A3028
    ctx->pc = 0x280F48u;
    SET_GPR_U32(ctx, 31, 0x280F50u);
    ctx->pc = 0x2A3028u;
    if (runtime->hasFunction(0x2A3028u)) {
        auto targetFn = runtime->lookupFunction(0x2A3028u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x280F50u; }
        if (ctx->pc != 0x280F50u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002A3028_0x2a3028(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x280F50u; }
        if (ctx->pc != 0x280F50u) { return; }
    }
    ctx->pc = 0x280F50u;
label_280f50:
    // 0x280f50: 0x8e030014  lw          $v1, 0x14($s0)
    ctx->pc = 0x280f50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x280f54: 0xae000010  sw          $zero, 0x10($s0)
    ctx->pc = 0x280f54u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 0));
label_280f58:
    // 0x280f58: 0xae00000c  sw          $zero, 0xC($s0)
    ctx->pc = 0x280f58u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
    // 0x280f5c: 0x30620001  andi        $v0, $v1, 0x1
    ctx->pc = 0x280f5cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
label_280f60:
    // 0x280f60: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x280F60u;
    {
        const bool branch_taken_0x280f60 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x280F64u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x280F60u;
            // 0x280f64: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x280f60) {
            ctx->pc = 0x280F74u;
            goto label_280f74;
        }
    }
    ctx->pc = 0x280F68u;
    // 0x280f68: 0xc0a8c0a  jal         func_2A3028
    ctx->pc = 0x280F68u;
    SET_GPR_U32(ctx, 31, 0x280F70u);
    ctx->pc = 0x280F6Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x280F68u;
            // 0x280f6c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A3028u;
    if (runtime->hasFunction(0x2A3028u)) {
        auto targetFn = runtime->lookupFunction(0x2A3028u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x280F70u; }
        if (ctx->pc != 0x280F70u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002A3028_0x2a3028(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x280F70u; }
        if (ctx->pc != 0x280F70u) { return; }
    }
    ctx->pc = 0x280F70u;
label_280f70:
    // 0x280f70: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x280f70u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_280f74:
    // 0x280f74: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x280f74u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x280f78: 0x3e00008  jr          $ra
    ctx->pc = 0x280F78u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x280F7Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x280F78u;
            // 0x280f7c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x280F80u;
    ctx->pc = 0x280f80u;
}
