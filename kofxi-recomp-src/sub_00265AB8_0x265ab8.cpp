#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00265AB8
// Address: 0x265ab8 - 0x265b00
void sub_00265AB8_0x265ab8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00265AB8_0x265ab8");
#endif

    switch (ctx->pc) {
        case 0x265accu: goto label_265acc;
        case 0x265ad4u: goto label_265ad4;
        default: break;
    }

    ctx->pc = 0x265ab8u;

    // 0x265ab8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x265ab8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x265abc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x265abcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x265ac0: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x265ac0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x265ac4: 0xc097cd2  jal         func_25F348
    ctx->pc = 0x265AC4u;
    SET_GPR_U32(ctx, 31, 0x265ACCu);
    ctx->pc = 0x265AC8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x265AC4u;
            // 0x265ac8: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F348u;
    if (runtime->hasFunction(0x25F348u)) {
        auto targetFn = runtime->lookupFunction(0x25F348u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x265ACCu; }
        if (ctx->pc != 0x265ACCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0025F348_0x25f348(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x265ACCu; }
        if (ctx->pc != 0x265ACCu) { return; }
    }
    ctx->pc = 0x265ACCu;
label_265acc:
    // 0x265acc: 0xc0432d4  jal         func_10CB50
    ctx->pc = 0x265ACCu;
    SET_GPR_U32(ctx, 31, 0x265AD4u);
    ctx->pc = 0x10CB50u;
    if (runtime->hasFunction(0x10CB50u)) {
        auto targetFn = runtime->lookupFunction(0x10CB50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x265AD4u; }
        if (ctx->pc != 0x265AD4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        kofxiSyscallGetThreadIdWrapper_0x10cb50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x265AD4u; }
        if (ctx->pc != 0x265AD4u) { return; }
    }
    ctx->pc = 0x265AD4u;
label_265ad4:
    // 0x265ad4: 0xdfa30000  ld          $v1, 0x0($sp)
    ctx->pc = 0x265ad4u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x265ad8: 0xdfa40008  ld          $a0, 0x8($sp)
    ctx->pc = 0x265ad8u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x265adc: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x265adcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x265ae0: 0x641826  xor         $v1, $v1, $a0
    ctx->pc = 0x265ae0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ GPR_U64(ctx, 4));
    // 0x265ae4: 0x431826  xor         $v1, $v0, $v1
    ctx->pc = 0x265ae4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 3));
    // 0x265ae8: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x265ae8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x265aec: 0x3103c  dsll32      $v0, $v1, 0
    ctx->pc = 0x265aecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) << (32 + 0));
    // 0x265af0: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x265af0u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x265af4: 0x3e00008  jr          $ra
    ctx->pc = 0x265AF4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x265AF8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x265AF4u;
            // 0x265af8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x265AFCu;
    // 0x265afc: 0x0  nop
    ctx->pc = 0x265afcu;
    // NOP
    ctx->pc = 0x265b00u;
}
