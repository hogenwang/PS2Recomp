#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002CB348
// Address: 0x2cb348 - 0x2cb3c0
void sub_002CB348_0x2cb348(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002CB348_0x2cb348");
#endif

    switch (ctx->pc) {
        case 0x2cb364u: goto label_2cb364;
        case 0x2cb394u: goto label_2cb394;
        case 0x2cb3a8u: goto label_2cb3a8;
        default: break;
    }

    ctx->pc = 0x2cb348u;

    // 0x2cb348: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2cb348u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2cb34c: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x2cb34cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x2cb350: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x2cb350u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cb354: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x2cb354u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x2cb358: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2cb358u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2cb35c: 0xc0b2cf0  jal         func_2CB3C0
    ctx->pc = 0x2CB35Cu;
    SET_GPR_U32(ctx, 31, 0x2CB364u);
    ctx->pc = 0x2CB360u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2CB35Cu;
            // 0x2cb360: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2CB3C0u;
    if (runtime->hasFunction(0x2CB3C0u)) {
        auto targetFn = runtime->lookupFunction(0x2CB3C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CB364u; }
        if (ctx->pc != 0x2CB364u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002CB3C0_0x2cb3c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CB364u; }
        if (ctx->pc != 0x2CB364u) { return; }
    }
    ctx->pc = 0x2CB364u;
label_2cb364:
    // 0x2cb364: 0x54400012  bnel        $v0, $zero, . + 4 + (0x12 << 2)
    ctx->pc = 0x2CB364u;
    {
        const bool branch_taken_0x2cb364 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2cb364) {
            ctx->pc = 0x2CB368u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2CB364u;
            // 0x2cb368: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2CB3B0u;
            goto label_2cb3b0;
        }
    }
    ctx->pc = 0x2CB36Cu;
    // 0x2cb36c: 0x8fa40004  lw          $a0, 0x4($sp)
    ctx->pc = 0x2cb36cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x2cb370: 0x24020801  addiu       $v0, $zero, 0x801
    ctx->pc = 0x2cb370u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2049));
    // 0x2cb374: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x2cb374u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x2cb378: 0x648823  subu        $s1, $v1, $a0
    ctx->pc = 0x2cb378u;
    SET_GPR_S32(ctx, 17, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2cb37c: 0x64182b  sltu        $v1, $v1, $a0
    ctx->pc = 0x2cb37cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x2cb380: 0x1460000a  bnez        $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x2CB380u;
    {
        const bool branch_taken_0x2cb380 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2CB384u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2CB380u;
            // 0x2cb384: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cb380) {
            ctx->pc = 0x2CB3ACu;
            goto label_2cb3ac;
        }
    }
    ctx->pc = 0x2CB388u;
    // 0x2cb388: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x2cb388u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2cb38c: 0xc0b608e  jal         func_2D8238
    ctx->pc = 0x2CB38Cu;
    SET_GPR_U32(ctx, 31, 0x2CB394u);
    ctx->pc = 0x2CB390u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2CB38Cu;
            // 0x2cb390: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D8238u;
    if (runtime->hasFunction(0x2D8238u)) {
        auto targetFn = runtime->lookupFunction(0x2D8238u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CB394u; }
        if (ctx->pc != 0x2CB394u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002D8238_0x2d8238(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CB394u; }
        if (ctx->pc != 0x2CB394u) { return; }
    }
    ctx->pc = 0x2CB394u;
label_2cb394:
    // 0x2cb394: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x2cb394u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2cb398: 0x8fa50000  lw          $a1, 0x0($sp)
    ctx->pc = 0x2cb398u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2cb39c: 0x8fa60004  lw          $a2, 0x4($sp)
    ctx->pc = 0x2cb39cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x2cb3a0: 0xc0b6098  jal         func_2D8260
    ctx->pc = 0x2CB3A0u;
    SET_GPR_U32(ctx, 31, 0x2CB3A8u);
    ctx->pc = 0x2CB3A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2CB3A0u;
            // 0x2cb3a4: 0x912021  addu        $a0, $a0, $s1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 17)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D8260u;
    if (runtime->hasFunction(0x2D8260u)) {
        auto targetFn = runtime->lookupFunction(0x2D8260u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CB3A8u; }
        if (ctx->pc != 0x2CB3A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002D8260_0x2d8260(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CB3A8u; }
        if (ctx->pc != 0x2CB3A8u) { return; }
    }
    ctx->pc = 0x2CB3A8u;
label_2cb3a8:
    // 0x2cb3a8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2cb3a8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2cb3ac:
    // 0x2cb3ac: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x2cb3acu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_2cb3b0:
    // 0x2cb3b0: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x2cb3b0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2cb3b4: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2cb3b4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2cb3b8: 0x3e00008  jr          $ra
    ctx->pc = 0x2CB3B8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2CB3BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2CB3B8u;
            // 0x2cb3bc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2CB3C0u;
    ctx->pc = 0x2cb3c0u;
}
