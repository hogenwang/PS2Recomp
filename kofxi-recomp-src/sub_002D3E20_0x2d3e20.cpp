#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002D3E20
// Address: 0x2d3e20 - 0x2d3eb0
void sub_002D3E20_0x2d3e20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002D3E20_0x2d3e20");
#endif

    switch (ctx->pc) {
        case 0x2d3e4cu: goto label_2d3e4c;
        case 0x2d3e80u: goto label_2d3e80;
        default: break;
    }

    ctx->pc = 0x2d3e20u;

    // 0x2d3e20: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2d3e20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2d3e24: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2d3e24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2d3e28: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x2d3e28u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d3e2c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2d3e2cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2d3e30: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2d3e30u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d3e34: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x2d3e34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x2d3e38: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x2d3e38u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d3e3c: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x2d3e3cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x2d3e40: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2d3e40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2d3e44: 0xc0b3f1a  jal         func_2CFC68
    ctx->pc = 0x2D3E44u;
    SET_GPR_U32(ctx, 31, 0x2D3E4Cu);
    ctx->pc = 0x2D3E48u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D3E44u;
            // 0x2d3e48: 0xe0982d  daddu       $s3, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2CFC68u;
    if (runtime->hasFunction(0x2CFC68u)) {
        auto targetFn = runtime->lookupFunction(0x2CFC68u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D3E4Cu; }
        if (ctx->pc != 0x2D3E4Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002CFC68_0x2cfc68(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D3E4Cu; }
        if (ctx->pc != 0x2D3E4Cu) { return; }
    }
    ctx->pc = 0x2D3E4Cu;
label_2d3e4c:
    // 0x2d3e4c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2d3e4cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d3e50: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2d3e50u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d3e54: 0x440000a  bltz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x2D3E54u;
    {
        const bool branch_taken_0x2d3e54 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x2D3E58u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D3E54u;
            // 0x2d3e58: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d3e54) {
            ctx->pc = 0x2D3E80u;
            goto label_2d3e80;
        }
    }
    ctx->pc = 0x2D3E5Cu;
    // 0x2d3e5c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2d3e5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2d3e60: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2d3e60u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2d3e64: 0xae420000  sw          $v0, 0x0($s2)
    ctx->pc = 0x2d3e64u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
    // 0x2d3e68: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2d3e68u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2d3e6c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x2d3e6cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2d3e70: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x2d3e70u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2d3e74: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2d3e74u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2d3e78: 0x80b3fdc  j           func_2CFF70
    ctx->pc = 0x2D3E78u;
    ctx->pc = 0x2D3E7Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D3E78u;
            // 0x2d3e7c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2CFF70u;
    if (runtime->hasFunction(0x2CFF70u)) {
        auto targetFn = runtime->lookupFunction(0x2CFF70u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_002CFF70_0x2cff70(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x2D3E80u;
label_2d3e80:
    // 0x2d3e80: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x2d3e80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2d3e84: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2d3e84u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d3e88: 0xae420000  sw          $v0, 0x0($s2)
    ctx->pc = 0x2d3e88u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
    // 0x2d3e8c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2d3e8cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d3e90: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x2d3e90u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2d3e94: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2d3e94u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2d3e98: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2d3e98u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2d3e9c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x2d3e9cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2d3ea0: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2d3ea0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2d3ea4: 0x80b3fdc  j           func_2CFF70
    ctx->pc = 0x2D3EA4u;
    ctx->pc = 0x2D3EA8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D3EA4u;
            // 0x2d3ea8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2CFF70u;
    if (runtime->hasFunction(0x2CFF70u)) {
        auto targetFn = runtime->lookupFunction(0x2CFF70u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_002CFF70_0x2cff70(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x2D3EACu;
    // 0x2d3eac: 0x0  nop
    ctx->pc = 0x2d3eacu;
    // NOP
    ctx->pc = 0x2d3eb0u;
}
