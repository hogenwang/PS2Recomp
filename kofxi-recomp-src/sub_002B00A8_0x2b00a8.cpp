#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002B00A8
// Address: 0x2b00a8 - 0x2b0150
void sub_002B00A8_0x2b00a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002B00A8_0x2b00a8");
#endif

    switch (ctx->pc) {
        case 0x2b0104u: goto label_2b0104;
        case 0x2b012cu: goto label_2b012c;
        default: break;
    }

    ctx->pc = 0x2b00a8u;

    // 0x2b00a8: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2b00a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2b00ac: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x2b00acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x2b00b0: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x2b00b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x2b00b4: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x2b00b4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b00b8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2b00b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2b00bc: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x2b00bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x2b00c0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2b00c0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b00c4: 0x8e020014  lw          $v0, 0x14($s0)
    ctx->pc = 0x2b00c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x2b00c8: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2B00C8u;
    {
        const bool branch_taken_0x2b00c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B00CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B00C8u;
            // 0x2b00cc: 0xc0882d  daddu       $s1, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b00c8) {
            ctx->pc = 0x2B00E8u;
            goto label_2b00e8;
        }
    }
    ctx->pc = 0x2B00D0u;
    // 0x2b00d0: 0x8e030010  lw          $v1, 0x10($s0)
    ctx->pc = 0x2b00d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x2b00d4: 0x54620005  bnel        $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2B00D4u;
    {
        const bool branch_taken_0x2b00d4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2b00d4) {
            ctx->pc = 0x2B00D8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2B00D4u;
            // 0x2b00d8: 0x8e04000c  lw          $a0, 0xC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2B00ECu;
            goto label_2b00ec;
        }
    }
    ctx->pc = 0x2B00DCu;
    // 0x2b00dc: 0x8c620024  lw          $v0, 0x24($v1)
    ctx->pc = 0x2b00dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 36)));
    // 0x2b00e0: 0xae020010  sw          $v0, 0x10($s0)
    ctx->pc = 0x2b00e0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 2));
    // 0x2b00e4: 0xac600024  sw          $zero, 0x24($v1)
    ctx->pc = 0x2b00e4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 36), GPR_U32(ctx, 0));
label_2b00e8:
    // 0x2b00e8: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x2b00e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_2b00ec:
    // 0x2b00ec: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x2B00ECu;
    {
        const bool branch_taken_0x2b00ec = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b00ec) {
            ctx->pc = 0x2B00F0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2B00ECu;
            // 0x2b00f0: 0x8e040010  lw          $a0, 0x10($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2B0108u;
            goto label_2b0108;
        }
    }
    ctx->pc = 0x2B00F4u;
    // 0x2b00f4: 0x50920004  beql        $a0, $s2, . + 4 + (0x4 << 2)
    ctx->pc = 0x2B00F4u;
    {
        const bool branch_taken_0x2b00f4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 18));
        if (branch_taken_0x2b00f4) {
            ctx->pc = 0x2B00F8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2B00F4u;
            // 0x2b00f8: 0x8e040010  lw          $a0, 0x10($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2B0108u;
            goto label_2b0108;
        }
    }
    ctx->pc = 0x2B00FCu;
    // 0x2b00fc: 0xc0a15d6  jal         func_285758
    ctx->pc = 0x2B00FCu;
    SET_GPR_U32(ctx, 31, 0x2B0104u);
    ctx->pc = 0x285758u;
    if (runtime->hasFunction(0x285758u)) {
        auto targetFn = runtime->lookupFunction(0x285758u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B0104u; }
        if (ctx->pc != 0x2B0104u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00285758_0x285758(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B0104u; }
        if (ctx->pc != 0x2B0104u) { return; }
    }
    ctx->pc = 0x2B0104u;
label_2b0104:
    // 0x2b0104: 0x8e040010  lw          $a0, 0x10($s0)
    ctx->pc = 0x2b0104u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_2b0108:
    // 0x2b0108: 0x50800009  beql        $a0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x2B0108u;
    {
        const bool branch_taken_0x2b0108 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b0108) {
            ctx->pc = 0x2B010Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2B0108u;
            // 0x2b010c: 0xae110010  sw          $s1, 0x10($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2B0130u;
            goto label_2b0130;
        }
    }
    ctx->pc = 0x2B0110u;
    // 0x2b0110: 0x50910007  beql        $a0, $s1, . + 4 + (0x7 << 2)
    ctx->pc = 0x2B0110u;
    {
        const bool branch_taken_0x2b0110 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 17));
        if (branch_taken_0x2b0110) {
            ctx->pc = 0x2B0114u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2B0110u;
            // 0x2b0114: 0xae110010  sw          $s1, 0x10($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2B0130u;
            goto label_2b0130;
        }
    }
    ctx->pc = 0x2B0118u;
    // 0x2b0118: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x2b0118u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x2b011c: 0x50440004  beql        $v0, $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2B011Cu;
    {
        const bool branch_taken_0x2b011c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 4));
        if (branch_taken_0x2b011c) {
            ctx->pc = 0x2B0120u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2B011Cu;
            // 0x2b0120: 0xae110010  sw          $s1, 0x10($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2B0130u;
            goto label_2b0130;
        }
    }
    ctx->pc = 0x2B0124u;
    // 0x2b0124: 0xc0a15d6  jal         func_285758
    ctx->pc = 0x2B0124u;
    SET_GPR_U32(ctx, 31, 0x2B012Cu);
    ctx->pc = 0x285758u;
    if (runtime->hasFunction(0x285758u)) {
        auto targetFn = runtime->lookupFunction(0x285758u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B012Cu; }
        if (ctx->pc != 0x2B012Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00285758_0x285758(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B012Cu; }
        if (ctx->pc != 0x2B012Cu) { return; }
    }
    ctx->pc = 0x2B012Cu;
label_2b012c:
    // 0x2b012c: 0xae110010  sw          $s1, 0x10($s0)
    ctx->pc = 0x2b012cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 17));
label_2b0130:
    // 0x2b0130: 0xae12000c  sw          $s2, 0xC($s0)
    ctx->pc = 0x2b0130u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 18));
    // 0x2b0134: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x2b0134u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2b0138: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x2b0138u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2b013c: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x2b013cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2b0140: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2b0140u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2b0144: 0x3e00008  jr          $ra
    ctx->pc = 0x2B0144u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B0148u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B0144u;
            // 0x2b0148: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2B014Cu;
    // 0x2b014c: 0x0  nop
    ctx->pc = 0x2b014cu;
    // NOP
    ctx->pc = 0x2b0150u;
}
