#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002C4118
// Address: 0x2c4118 - 0x2c4170
void sub_002C4118_0x2c4118(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002C4118_0x2c4118");
#endif

    switch (ctx->pc) {
        case 0x2c4134u: goto label_2c4134;
        case 0x2c413cu: goto label_2c413c;
        case 0x2c414cu: goto label_2c414c;
        case 0x2c4160u: goto label_2c4160;
        default: break;
    }

    ctx->pc = 0x2c4118u;

    // 0x2c4118: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2c4118u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2c411c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2c411cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2c4120: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2c4120u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c4124: 0x1200000e  beqz        $s0, . + 4 + (0xE << 2)
    ctx->pc = 0x2C4124u;
    {
        const bool branch_taken_0x2c4124 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C4128u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C4124u;
            // 0x2c4128: 0xffbf0010  sd          $ra, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c4124) {
            ctx->pc = 0x2C4160u;
            goto label_2c4160;
        }
    }
    ctx->pc = 0x2C412Cu;
    // 0x2c412c: 0xc0a070c  jal         func_281C30
    ctx->pc = 0x2C412Cu;
    SET_GPR_U32(ctx, 31, 0x2C4134u);
    ctx->pc = 0x2C4130u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C412Cu;
            // 0x2c4130: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x281C30u;
    if (runtime->hasFunction(0x281C30u)) {
        auto targetFn = runtime->lookupFunction(0x281C30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C4134u; }
        if (ctx->pc != 0x2C4134u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00281C30_0x281c30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C4134u; }
        if (ctx->pc != 0x2C4134u) { return; }
    }
    ctx->pc = 0x2C4134u;
label_2c4134:
    // 0x2c4134: 0xc0a070c  jal         func_281C30
    ctx->pc = 0x2C4134u;
    SET_GPR_U32(ctx, 31, 0x2C413Cu);
    ctx->pc = 0x2C4138u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C4134u;
            // 0x2c4138: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x281C30u;
    if (runtime->hasFunction(0x281C30u)) {
        auto targetFn = runtime->lookupFunction(0x281C30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C413Cu; }
        if (ctx->pc != 0x2C413Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00281C30_0x281c30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C413Cu; }
        if (ctx->pc != 0x2C413Cu) { return; }
    }
    ctx->pc = 0x2C413Cu;
label_2c413c:
    // 0x2c413c: 0x8e040008  lw          $a0, 0x8($s0)
    ctx->pc = 0x2c413cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x2c4140: 0x3c05002c  lui         $a1, 0x2C
    ctx->pc = 0x2c4140u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)44 << 16));
    // 0x2c4144: 0xc0af16c  jal         func_2BC5B0
    ctx->pc = 0x2C4144u;
    SET_GPR_U32(ctx, 31, 0x2C414Cu);
    ctx->pc = 0x2C4148u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C4144u;
            // 0x2c4148: 0x24a54690  addiu       $a1, $a1, 0x4690 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 18064));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BC5B0u;
    if (runtime->hasFunction(0x2BC5B0u)) {
        auto targetFn = runtime->lookupFunction(0x2BC5B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C414Cu; }
        if (ctx->pc != 0x2C414Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002BC5B0_0x2bc5b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C414Cu; }
        if (ctx->pc != 0x2C414Cu) { return; }
    }
    ctx->pc = 0x2C414Cu;
label_2c414c:
    // 0x2c414c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2c414cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c4150: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2c4150u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2c4154: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2c4154u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2c4158: 0x80a8c0a  j           func_2A3028
    ctx->pc = 0x2C4158u;
    ctx->pc = 0x2C415Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C4158u;
            // 0x2c415c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A3028u;
    if (runtime->hasFunction(0x2A3028u)) {
        auto targetFn = runtime->lookupFunction(0x2A3028u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_002A3028_0x2a3028(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x2C4160u;
label_2c4160:
    // 0x2c4160: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2c4160u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2c4164: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2c4164u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2c4168: 0x3e00008  jr          $ra
    ctx->pc = 0x2C4168u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C416Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C4168u;
            // 0x2c416c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2C4170u;
    ctx->pc = 0x2c4170u;
}
