#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002C0088
// Address: 0x2c0088 - 0x2c0140
void sub_002C0088_0x2c0088(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002C0088_0x2c0088");
#endif

    switch (ctx->pc) {
        case 0x2c00e0u: goto label_2c00e0;
        case 0x2c0108u: goto label_2c0108;
        case 0x2c012cu: goto label_2c012c;
        default: break;
    }

    ctx->pc = 0x2c0088u;

    // 0x2c0088: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2c0088u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2c008c: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x2c008cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x2c0090: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2c0090u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2c0094: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2c0094u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c0098: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x2c0098u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x2c009c: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2c009cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2c00a0: 0x2611002c  addiu       $s1, $s0, 0x2C
    ctx->pc = 0x2c00a0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 44));
    // 0x2c00a4: 0xae050000  sw          $a1, 0x0($s0)
    ctx->pc = 0x2c00a4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 5));
    // 0x2c00a8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2c00a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c00ac: 0xae060008  sw          $a2, 0x8($s0)
    ctx->pc = 0x2c00acu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 6));
    // 0x2c00b0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2c00b0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c00b4: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x2c00b4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
    // 0x2c00b8: 0x24060008  addiu       $a2, $zero, 0x8
    ctx->pc = 0x2c00b8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x2c00bc: 0xae000014  sw          $zero, 0x14($s0)
    ctx->pc = 0x2c00bcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 0));
    // 0x2c00c0: 0xae000018  sw          $zero, 0x18($s0)
    ctx->pc = 0x2c00c0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 0));
    // 0x2c00c4: 0xae00001c  sw          $zero, 0x1C($s0)
    ctx->pc = 0x2c00c4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 0));
    // 0x2c00c8: 0xae000020  sw          $zero, 0x20($s0)
    ctx->pc = 0x2c00c8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 0));
    // 0x2c00cc: 0xae000024  sw          $zero, 0x24($s0)
    ctx->pc = 0x2c00ccu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 0));
    // 0x2c00d0: 0xae000028  sw          $zero, 0x28($s0)
    ctx->pc = 0x2c00d0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 0));
    // 0x2c00d4: 0xae07000c  sw          $a3, 0xC($s0)
    ctx->pc = 0x2c00d4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 7));
    // 0x2c00d8: 0xc049cb6  jal         func_1272D8
    ctx->pc = 0x2C00D8u;
    SET_GPR_U32(ctx, 31, 0x2C00E0u);
    ctx->pc = 0x2C00DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C00D8u;
            // 0x2c00dc: 0xae020010  sw          $v0, 0x10($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1272D8u;
    if (runtime->hasFunction(0x1272D8u)) {
        auto targetFn = runtime->lookupFunction(0x1272D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C00E0u; }
        if (ctx->pc != 0x2C00E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001272D8_0x1272d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C00E0u; }
        if (ctx->pc != 0x2C00E0u) { return; }
    }
    ctx->pc = 0x2C00E0u;
label_2c00e0:
    // 0x2c00e0: 0x3c03003b  lui         $v1, 0x3B
    ctx->pc = 0x2c00e0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)59 << 16));
    // 0x2c00e4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2c00e4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c00e8: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x2c00e8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c00ec: 0x8c647e40  lw          $a0, 0x7E40($v1)
    ctx->pc = 0x2c00ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32320)));
    // 0x2c00f0: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2c00f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2c00f4: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x2c00f4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2c00f8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2c00f8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2c00fc: 0x80a5d8e  j           func_297638
    ctx->pc = 0x2C00FCu;
    ctx->pc = 0x2C0100u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C00FCu;
            // 0x2c0100: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
    ctx->pc = 0x297638u;
    if (runtime->hasFunction(0x297638u)) {
        auto targetFn = runtime->lookupFunction(0x297638u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_00297638_0x297638(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x2C0104u;
    // 0x2c0104: 0x0  nop
    ctx->pc = 0x2c0104u;
    // NOP
label_2c0108:
    // 0x2c0108: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2c0108u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2c010c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2c010cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2c0110: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2c0110u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2c0114: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2c0114u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c0118: 0x8e02001c  lw          $v0, 0x1C($s0)
    ctx->pc = 0x2c0118u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x2c011c: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x2C011Cu;
    {
        const bool branch_taken_0x2c011c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c011c) {
            ctx->pc = 0x2C0120u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2C011Cu;
            // 0x2c0120: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2C0130u;
            goto label_2c0130;
        }
    }
    ctx->pc = 0x2C0124u;
    // 0x2c0124: 0xc0b0050  jal         func_2C0140
    ctx->pc = 0x2C0124u;
    SET_GPR_U32(ctx, 31, 0x2C012Cu);
    ctx->pc = 0x2C0140u;
    if (runtime->hasFunction(0x2C0140u)) {
        auto targetFn = runtime->lookupFunction(0x2C0140u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C012Cu; }
        if (ctx->pc != 0x2C012Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002C0140_0x2c0140(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C012Cu; }
        if (ctx->pc != 0x2C012Cu) { return; }
    }
    ctx->pc = 0x2C012Cu;
label_2c012c:
    // 0x2c012c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2c012cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2c0130:
    // 0x2c0130: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2c0130u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2c0134: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2c0134u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2c0138: 0x80a8c0a  j           func_2A3028
    ctx->pc = 0x2C0138u;
    ctx->pc = 0x2C013Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C0138u;
            // 0x2c013c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A3028u;
    if (runtime->hasFunction(0x2A3028u)) {
        auto targetFn = runtime->lookupFunction(0x2A3028u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_002A3028_0x2a3028(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x2C0140u;
    ctx->pc = 0x2c0140u;
}
