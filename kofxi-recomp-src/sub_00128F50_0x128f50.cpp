#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00128F50
// Address: 0x128f50 - 0x128fb0
void sub_00128F50_0x128f50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00128F50_0x128f50");
#endif

    switch (ctx->pc) {
        case 0x128f7cu: goto label_128f7c;
        default: break;
    }

    ctx->pc = 0x128f50u;

    // 0x128f50: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x128f50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x128f54: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x128f54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x128f58: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x128f58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x128f5c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x128f5cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x128f60: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x128f60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x128f64: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x128f64u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x128f68: 0x3c1001e0  lui         $s0, 0x1E0
    ctx->pc = 0x128f68u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)480 << 16));
    // 0x128f6c: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x128f6cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x128f70: 0xae00bf2c  sw          $zero, -0x40D4($s0)
    ctx->pc = 0x128f70u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4294950700), GPR_U32(ctx, 0));
    // 0x128f74: 0xc0434aa  jal         func_10D2A8
    ctx->pc = 0x128F74u;
    SET_GPR_U32(ctx, 31, 0x128F7Cu);
    ctx->pc = 0x128F78u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x128F74u;
            // 0x128f78: 0xe0302d  daddu       $a2, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10D2A8u;
    if (runtime->hasFunction(0x10D2A8u)) {
        auto targetFn = runtime->lookupFunction(0x10D2A8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x128F7Cu; }
        if (ctx->pc != 0x128F7Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010D2A8_0x10d2a8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x128F7Cu; }
        if (ctx->pc != 0x128F7Cu) { return; }
    }
    ctx->pc = 0x128F7Cu;
label_128f7c:
    // 0x128f7c: 0x40782d  daddu       $t7, $v0, $zero
    ctx->pc = 0x128f7cu;
    SET_GPR_U64(ctx, 15, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x128f80: 0x240effff  addiu       $t6, $zero, -0x1
    ctx->pc = 0x128f80u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x128f84: 0x15ee0004  bne         $t7, $t6, . + 4 + (0x4 << 2)
    ctx->pc = 0x128F84u;
    {
        const bool branch_taken_0x128f84 = (GPR_U64(ctx, 15) != GPR_U64(ctx, 14));
        ctx->pc = 0x128F88u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x128F84u;
            // 0x128f88: 0x1e0102d  daddu       $v0, $t7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 15) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x128f84) {
            ctx->pc = 0x128F98u;
            goto label_128f98;
        }
    }
    ctx->pc = 0x128F8Cu;
    // 0x128f8c: 0x8e0fbf2c  lw          $t7, -0x40D4($s0)
    ctx->pc = 0x128f8cu;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294950700)));
    // 0x128f90: 0x55e00001  bnel        $t7, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x128F90u;
    {
        const bool branch_taken_0x128f90 = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        if (branch_taken_0x128f90) {
            ctx->pc = 0x128F94u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x128F90u;
            // 0x128f94: 0xae2f0000  sw          $t7, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 15));
        ctx->in_delay_slot = false;
            ctx->pc = 0x128F98u;
            goto label_128f98;
        }
    }
    ctx->pc = 0x128F98u;
label_128f98:
    // 0x128f98: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x128f98u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x128f9c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x128f9cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x128fa0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x128fa0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x128fa4: 0x3e00008  jr          $ra
    ctx->pc = 0x128FA4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x128FA8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x128FA4u;
            // 0x128fa8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x128FACu;
    // 0x128fac: 0x0  nop
    ctx->pc = 0x128facu;
    // NOP
    ctx->pc = 0x128fb0u;
}
