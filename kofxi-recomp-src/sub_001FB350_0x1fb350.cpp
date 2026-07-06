#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001FB350
// Address: 0x1fb350 - 0x1fb3d0
void sub_001FB350_0x1fb350(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001FB350_0x1fb350");
#endif

    switch (ctx->pc) {
        case 0x1fb374u: goto label_1fb374;
        case 0x1fb3a8u: goto label_1fb3a8;
        case 0x1fb3b0u: goto label_1fb3b0;
        default: break;
    }

    ctx->pc = 0x1fb350u;

    // 0x1fb350: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1fb350u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1fb354: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1fb354u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1fb358: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1fb358u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fb35c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1fb35cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1fb360: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x1fb360u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fb364: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1fb364u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1fb368: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x1fb368u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x1fb36c: 0xc07b648  jal         func_1ED920
    ctx->pc = 0x1FB36Cu;
    SET_GPR_U32(ctx, 31, 0x1FB374u);
    ctx->pc = 0x1FB370u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1FB36Cu;
            // 0x1fb370: 0xa0902d  daddu       $s2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1ED920u;
    if (runtime->hasFunction(0x1ED920u)) {
        auto targetFn = runtime->lookupFunction(0x1ED920u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FB374u; }
        if (ctx->pc != 0x1FB374u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001ED920_0x1ed920(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FB374u; }
        if (ctx->pc != 0x1FB374u) { return; }
    }
    ctx->pc = 0x1FB374u;
label_1fb374:
    // 0x1fb374: 0x3c05ff00  lui         $a1, 0xFF00
    ctx->pc = 0x1fb374u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65280 << 16));
    // 0x1fb378: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1fb378u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fb37c: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x1fb37cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fb380: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1FB380u;
    {
        const bool branch_taken_0x1fb380 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FB384u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FB380u;
            // 0x1fb384: 0x34a50117  ori         $a1, $a1, 0x117 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)279);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fb380) {
            ctx->pc = 0x1FB3A8u;
            goto label_1fb3a8;
        }
    }
    ctx->pc = 0x1FB388u;
    // 0x1fb388: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1fb388u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1fb38c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1fb38cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fb390: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1fb390u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1fb394: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1fb394u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1fb398: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x1fb398u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1fb39c: 0x807b5c0  j           func_1ED700
    ctx->pc = 0x1FB39Cu;
    ctx->pc = 0x1FB3A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1FB39Cu;
            // 0x1fb3a0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1ED700u;
    if (runtime->hasFunction(0x1ED700u)) {
        auto targetFn = runtime->lookupFunction(0x1ED700u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_001ED700_0x1ed700(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x1FB3A4u;
    // 0x1fb3a4: 0x0  nop
    ctx->pc = 0x1fb3a4u;
    // NOP
label_1fb3a8:
    // 0x1fb3a8: 0xc07ecf4  jal         func_1FB3D0
    ctx->pc = 0x1FB3A8u;
    SET_GPR_U32(ctx, 31, 0x1FB3B0u);
    ctx->pc = 0x1FB3ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1FB3A8u;
            // 0x1fb3ac: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1FB3D0u;
    if (runtime->hasFunction(0x1FB3D0u)) {
        auto targetFn = runtime->lookupFunction(0x1FB3D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FB3B0u; }
        if (ctx->pc != 0x1FB3B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001FB3D0_0x1fb3d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FB3B0u; }
        if (ctx->pc != 0x1FB3B0u) { return; }
    }
    ctx->pc = 0x1FB3B0u;
label_1fb3b0:
    // 0x1fb3b0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1fb3b0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fb3b4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1fb3b4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1fb3b8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1fb3b8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1fb3bc: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1fb3bcu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1fb3c0: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x1fb3c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1fb3c4: 0x3e00008  jr          $ra
    ctx->pc = 0x1FB3C4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FB3C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FB3C4u;
            // 0x1fb3c8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1FB3CCu;
    // 0x1fb3cc: 0x0  nop
    ctx->pc = 0x1fb3ccu;
    // NOP
    ctx->pc = 0x1fb3d0u;
}
