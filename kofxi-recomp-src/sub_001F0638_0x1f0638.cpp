#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001F0638
// Address: 0x1f0638 - 0x1f06a0
void sub_001F0638_0x1f0638(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001F0638_0x1f0638");
#endif

    switch (ctx->pc) {
        case 0x1f0668u: goto label_1f0668;
        default: break;
    }

    ctx->pc = 0x1f0638u;

    // 0x1f0638: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1f0638u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1f063c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1f063cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1f0640: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1f0640u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f0644: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1f0644u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1f0648: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1f0648u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1f064c: 0x8e300a68  lw          $s0, 0xA68($s1)
    ctx->pc = 0x1f064cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2664)));
    // 0x1f0650: 0x8e22002c  lw          $v0, 0x2C($s1)
    ctx->pc = 0x1f0650u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 44)));
    // 0x1f0654: 0x101827  nor         $v1, $zero, $s0
    ctx->pc = 0x1f0654u;
    SET_GPR_U64(ctx, 3, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 16)));
    // 0x1f0658: 0x43800a  movz        $s0, $v0, $v1
    ctx->pc = 0x1f0658u;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 2));
    // 0x1f065c: 0x50282a  slt         $a1, $v0, $s0
    ctx->pc = 0x1f065cu;
    SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x1f0660: 0xc07d4a8  jal         func_1F52A0
    ctx->pc = 0x1F0660u;
    SET_GPR_U32(ctx, 31, 0x1F0668u);
    ctx->pc = 0x1F0664u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F0660u;
            // 0x1f0664: 0x45800b  movn        $s0, $v0, $a1 (Delay Slot)
        if (GPR_U64(ctx, 5) != 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1F52A0u;
    if (runtime->hasFunction(0x1F52A0u)) {
        auto targetFn = runtime->lookupFunction(0x1F52A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F0668u; }
        if (ctx->pc != 0x1F0668u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001F52A0_0x1f52a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F0668u; }
        if (ctx->pc != 0x1F0668u) { return; }
    }
    ctx->pc = 0x1F0668u;
label_1f0668:
    // 0x1f0668: 0x8e230058  lw          $v1, 0x58($s1)
    ctx->pc = 0x1f0668u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 88)));
    // 0x1f066c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1f066cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f0670: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1f0670u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1f0674: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1F0674u;
    {
        const bool branch_taken_0x1f0674 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1F0678u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F0674u;
            // 0x1f0678: 0xb0102a  slt         $v0, $a1, $s0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f0674) {
            ctx->pc = 0x1F0688u;
            goto label_1f0688;
        }
    }
    ctx->pc = 0x1F067Cu;
    // 0x1f067c: 0x8e220968  lw          $v0, 0x968($s1)
    ctx->pc = 0x1f067cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2408)));
    // 0x1f0680: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x1f0680u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x1f0684: 0xb0102a  slt         $v0, $a1, $s0
    ctx->pc = 0x1f0684u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
label_1f0688:
    // 0x1f0688: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1f0688u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1f068c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1f068cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1f0690: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x1f0690u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x1f0694: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1f0694u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1f0698: 0x3e00008  jr          $ra
    ctx->pc = 0x1F0698u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F069Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F0698u;
            // 0x1f069c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1F06A0u;
    ctx->pc = 0x1f06a0u;
}
