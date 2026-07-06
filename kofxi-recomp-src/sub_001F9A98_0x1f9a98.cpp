#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001F9A98
// Address: 0x1f9a98 - 0x1f9b20
void sub_001F9A98_0x1f9a98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001F9A98_0x1f9a98");
#endif

    switch (ctx->pc) {
        case 0x1f9accu: goto label_1f9acc;
        case 0x1f9af8u: goto label_1f9af8;
        case 0x1f9b04u: goto label_1f9b04;
        default: break;
    }

    ctx->pc = 0x1f9a98u;

    // 0x1f9a98: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1f9a98u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1f9a9c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1f9a9cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1f9aa0: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1f9aa0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f9aa4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1f9aa4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1f9aa8: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x1f9aa8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f9aac: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1f9aacu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1f9ab0: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x1f9ab0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f9ab4: 0x12200013  beqz        $s1, . + 4 + (0x13 << 2)
    ctx->pc = 0x1F9AB4u;
    {
        const bool branch_taken_0x1f9ab4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F9AB8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F9AB4u;
            // 0x1f9ab8: 0xffbf0018  sd          $ra, 0x18($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f9ab4) {
            ctx->pc = 0x1F9B04u;
            goto label_1f9b04;
        }
    }
    ctx->pc = 0x1F9ABCu;
    // 0x1f9abc: 0x1a000012  blez        $s0, . + 4 + (0x12 << 2)
    ctx->pc = 0x1F9ABCu;
    {
        const bool branch_taken_0x1f9abc = (GPR_S32(ctx, 16) <= 0);
        ctx->pc = 0x1F9AC0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F9ABCu;
            // 0x1f9ac0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f9abc) {
            ctx->pc = 0x1F9B08u;
            goto label_1f9b08;
        }
    }
    ctx->pc = 0x1F9AC4u;
    // 0x1f9ac4: 0xc07b648  jal         func_1ED920
    ctx->pc = 0x1F9AC4u;
    SET_GPR_U32(ctx, 31, 0x1F9ACCu);
    ctx->pc = 0x1ED920u;
    if (runtime->hasFunction(0x1ED920u)) {
        auto targetFn = runtime->lookupFunction(0x1ED920u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F9ACCu; }
        if (ctx->pc != 0x1F9ACCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001ED920_0x1ed920(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F9ACCu; }
        if (ctx->pc != 0x1F9ACCu) { return; }
    }
    ctx->pc = 0x1F9ACCu;
label_1f9acc:
    // 0x1f9acc: 0x3c05ff00  lui         $a1, 0xFF00
    ctx->pc = 0x1f9accu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65280 << 16));
    // 0x1f9ad0: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1f9ad0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f9ad4: 0x34a50165  ori         $a1, $a1, 0x165
    ctx->pc = 0x1f9ad4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)357);
    // 0x1f9ad8: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1F9AD8u;
    {
        const bool branch_taken_0x1f9ad8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F9ADCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F9AD8u;
            // 0x1f9adc: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f9ad8) {
            ctx->pc = 0x1F9AF8u;
            goto label_1f9af8;
        }
    }
    ctx->pc = 0x1F9AE0u;
    // 0x1f9ae0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1f9ae0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1f9ae4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1f9ae4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1f9ae8: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1f9ae8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1f9aec: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x1f9aecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1f9af0: 0x807b5c0  j           func_1ED700
    ctx->pc = 0x1F9AF0u;
    ctx->pc = 0x1F9AF4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F9AF0u;
            // 0x1f9af4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1ED700u;
    if (runtime->hasFunction(0x1ED700u)) {
        auto targetFn = runtime->lookupFunction(0x1ED700u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_001ED700_0x1ed700(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x1F9AF8u;
label_1f9af8:
    // 0x1f9af8: 0x26441414  addiu       $a0, $s2, 0x1414
    ctx->pc = 0x1f9af8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 5140));
    // 0x1f9afc: 0xc07e6c8  jal         func_1F9B20
    ctx->pc = 0x1F9AFCu;
    SET_GPR_U32(ctx, 31, 0x1F9B04u);
    ctx->pc = 0x1F9B00u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F9AFCu;
            // 0x1f9b00: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1F9B20u;
    if (runtime->hasFunction(0x1F9B20u)) {
        auto targetFn = runtime->lookupFunction(0x1F9B20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F9B04u; }
        if (ctx->pc != 0x1F9B04u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001F9B20_0x1f9b20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F9B04u; }
        if (ctx->pc != 0x1F9B04u) { return; }
    }
    ctx->pc = 0x1F9B04u;
label_1f9b04:
    // 0x1f9b04: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1f9b04u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1f9b08:
    // 0x1f9b08: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1f9b08u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1f9b0c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1f9b0cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1f9b10: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1f9b10u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1f9b14: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x1f9b14u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1f9b18: 0x3e00008  jr          $ra
    ctx->pc = 0x1F9B18u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F9B1Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F9B18u;
            // 0x1f9b1c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1F9B20u;
    ctx->pc = 0x1f9b20u;
}
