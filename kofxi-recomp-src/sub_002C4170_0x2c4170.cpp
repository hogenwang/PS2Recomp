#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002C4170
// Address: 0x2c4170 - 0x2c4200
void sub_002C4170_0x2c4170(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002C4170_0x2c4170");
#endif

    switch (ctx->pc) {
        case 0x2c418cu: goto label_2c418c;
        case 0x2c4194u: goto label_2c4194;
        case 0x2c419cu: goto label_2c419c;
        case 0x2c41a4u: goto label_2c41a4;
        case 0x2c41b8u: goto label_2c41b8;
        case 0x2c41c8u: goto label_2c41c8;
        case 0x2c41d8u: goto label_2c41d8;
        case 0x2c41ecu: goto label_2c41ec;
        default: break;
    }

    ctx->pc = 0x2c4170u;

    // 0x2c4170: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2c4170u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2c4174: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2c4174u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2c4178: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2c4178u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c417c: 0x1200001b  beqz        $s0, . + 4 + (0x1B << 2)
    ctx->pc = 0x2C417Cu;
    {
        const bool branch_taken_0x2c417c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C4180u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C417Cu;
            // 0x2c4180: 0xffbf0010  sd          $ra, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c417c) {
            ctx->pc = 0x2C41ECu;
            goto label_2c41ec;
        }
    }
    ctx->pc = 0x2C4184u;
    // 0x2c4184: 0xc0a070c  jal         func_281C30
    ctx->pc = 0x2C4184u;
    SET_GPR_U32(ctx, 31, 0x2C418Cu);
    ctx->pc = 0x2C4188u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C4184u;
            // 0x2c4188: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x281C30u;
    if (runtime->hasFunction(0x281C30u)) {
        auto targetFn = runtime->lookupFunction(0x281C30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C418Cu; }
        if (ctx->pc != 0x2C418Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00281C30_0x281c30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C418Cu; }
        if (ctx->pc != 0x2C418Cu) { return; }
    }
    ctx->pc = 0x2C418Cu;
label_2c418c:
    // 0x2c418c: 0xc0b0a08  jal         func_2C2820
    ctx->pc = 0x2C418Cu;
    SET_GPR_U32(ctx, 31, 0x2C4194u);
    ctx->pc = 0x2C4190u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C418Cu;
            // 0x2c4190: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2C2820u;
    if (runtime->hasFunction(0x2C2820u)) {
        auto targetFn = runtime->lookupFunction(0x2C2820u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C4194u; }
        if (ctx->pc != 0x2C4194u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002C2820_0x2c2820(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C4194u; }
        if (ctx->pc != 0x2C4194u) { return; }
    }
    ctx->pc = 0x2C4194u;
label_2c4194:
    // 0x2c4194: 0xc0a095e  jal         func_282578
    ctx->pc = 0x2C4194u;
    SET_GPR_U32(ctx, 31, 0x2C419Cu);
    ctx->pc = 0x2C4198u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C4194u;
            // 0x2c4198: 0x8e040008  lw          $a0, 0x8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x282578u;
    if (runtime->hasFunction(0x282578u)) {
        auto targetFn = runtime->lookupFunction(0x282578u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C419Cu; }
        if (ctx->pc != 0x2C419Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00282578_0x282578(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C419Cu; }
        if (ctx->pc != 0x2C419Cu) { return; }
    }
    ctx->pc = 0x2C419Cu;
label_2c419c:
    // 0x2c419c: 0xc0a070c  jal         func_281C30
    ctx->pc = 0x2C419Cu;
    SET_GPR_U32(ctx, 31, 0x2C41A4u);
    ctx->pc = 0x2C41A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C419Cu;
            // 0x2c41a0: 0x8e04000c  lw          $a0, 0xC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x281C30u;
    if (runtime->hasFunction(0x281C30u)) {
        auto targetFn = runtime->lookupFunction(0x281C30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C41A4u; }
        if (ctx->pc != 0x2C41A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00281C30_0x281c30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C41A4u; }
        if (ctx->pc != 0x2C41A4u) { return; }
    }
    ctx->pc = 0x2C41A4u;
label_2c41a4:
    // 0x2c41a4: 0x8e040010  lw          $a0, 0x10($s0)
    ctx->pc = 0x2c41a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x2c41a8: 0x50800004  beql        $a0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x2C41A8u;
    {
        const bool branch_taken_0x2c41a8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c41a8) {
            ctx->pc = 0x2C41ACu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2C41A8u;
            // 0x2c41ac: 0x8e040014  lw          $a0, 0x14($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2C41BCu;
            goto label_2c41bc;
        }
    }
    ctx->pc = 0x2C41B0u;
    // 0x2c41b0: 0xc0a070c  jal         func_281C30
    ctx->pc = 0x2C41B0u;
    SET_GPR_U32(ctx, 31, 0x2C41B8u);
    ctx->pc = 0x281C30u;
    if (runtime->hasFunction(0x281C30u)) {
        auto targetFn = runtime->lookupFunction(0x281C30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C41B8u; }
        if (ctx->pc != 0x2C41B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00281C30_0x281c30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C41B8u; }
        if (ctx->pc != 0x2C41B8u) { return; }
    }
    ctx->pc = 0x2C41B8u;
label_2c41b8:
    // 0x2c41b8: 0x8e040014  lw          $a0, 0x14($s0)
    ctx->pc = 0x2c41b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
label_2c41bc:
    // 0x2c41bc: 0x3c05002c  lui         $a1, 0x2C
    ctx->pc = 0x2c41bcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)44 << 16));
    // 0x2c41c0: 0xc0af16c  jal         func_2BC5B0
    ctx->pc = 0x2C41C0u;
    SET_GPR_U32(ctx, 31, 0x2C41C8u);
    ctx->pc = 0x2C41C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C41C0u;
            // 0x2c41c4: 0x24a54118  addiu       $a1, $a1, 0x4118 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16664));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BC5B0u;
    if (runtime->hasFunction(0x2BC5B0u)) {
        auto targetFn = runtime->lookupFunction(0x2BC5B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C41C8u; }
        if (ctx->pc != 0x2C41C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002BC5B0_0x2bc5b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C41C8u; }
        if (ctx->pc != 0x2C41C8u) { return; }
    }
    ctx->pc = 0x2C41C8u;
label_2c41c8:
    // 0x2c41c8: 0x8e040018  lw          $a0, 0x18($s0)
    ctx->pc = 0x2c41c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x2c41cc: 0x3c05002c  lui         $a1, 0x2C
    ctx->pc = 0x2c41ccu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)44 << 16));
    // 0x2c41d0: 0xc0af16c  jal         func_2BC5B0
    ctx->pc = 0x2C41D0u;
    SET_GPR_U32(ctx, 31, 0x2C41D8u);
    ctx->pc = 0x2C41D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C41D0u;
            // 0x2c41d4: 0x24a54690  addiu       $a1, $a1, 0x4690 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 18064));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BC5B0u;
    if (runtime->hasFunction(0x2BC5B0u)) {
        auto targetFn = runtime->lookupFunction(0x2BC5B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C41D8u; }
        if (ctx->pc != 0x2C41D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002BC5B0_0x2bc5b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C41D8u; }
        if (ctx->pc != 0x2C41D8u) { return; }
    }
    ctx->pc = 0x2C41D8u;
label_2c41d8:
    // 0x2c41d8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2c41d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c41dc: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2c41dcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2c41e0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2c41e0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2c41e4: 0x80a8c0a  j           func_2A3028
    ctx->pc = 0x2C41E4u;
    ctx->pc = 0x2C41E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C41E4u;
            // 0x2c41e8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A3028u;
    if (runtime->hasFunction(0x2A3028u)) {
        auto targetFn = runtime->lookupFunction(0x2A3028u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_002A3028_0x2a3028(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x2C41ECu;
label_2c41ec:
    // 0x2c41ec: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2c41ecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2c41f0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2c41f0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2c41f4: 0x3e00008  jr          $ra
    ctx->pc = 0x2C41F4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C41F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C41F4u;
            // 0x2c41f8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2C41FCu;
    // 0x2c41fc: 0x0  nop
    ctx->pc = 0x2c41fcu;
    // NOP
    ctx->pc = 0x2c4200u;
}
