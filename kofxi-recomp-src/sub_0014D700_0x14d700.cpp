#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0014D700
// Address: 0x14d700 - 0x14d7d0
void sub_0014D700_0x14d700(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0014D700_0x14d700");
#endif

    switch (ctx->pc) {
        case 0x14d7acu: goto label_14d7ac;
        default: break;
    }

    ctx->pc = 0x14d700u;

    // 0x14d700: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x14d700u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x14d704: 0x3c020093  lui         $v0, 0x93
    ctx->pc = 0x14d704u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)147 << 16));
    // 0x14d708: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x14d708u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x14d70c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x14d70cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x14d710: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x14d710u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x14d714: 0x9042f364  lbu         $v0, -0xC9C($v0)
    ctx->pc = 0x14d714u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294964068)));
    // 0x14d718: 0x30420010  andi        $v0, $v0, 0x10
    ctx->pc = 0x14d718u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16);
    // 0x14d71c: 0x50400025  beql        $v0, $zero, . + 4 + (0x25 << 2)
    ctx->pc = 0x14D71Cu;
    {
        const bool branch_taken_0x14d71c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x14d71c) {
            ctx->pc = 0x14D720u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x14D71Cu;
            // 0x14d720: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
            SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x14D7B4u;
            goto label_14d7b4;
        }
    }
    ctx->pc = 0x14D724u;
    // 0x14d724: 0x3c02c170  lui         $v0, 0xC170
    ctx->pc = 0x14d724u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49520 << 16));
    // 0x14d728: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x14d728u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x14d72c: 0x0  nop
    ctx->pc = 0x14d72cu;
    // NOP
    // 0x14d730: 0x460c0842  mul.s       $f1, $f1, $f12
    ctx->pc = 0x14d730u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[12]);
    // 0x14d734: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x14d734u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x14d738: 0x44100800  mfc1        $s0, $f1
    ctx->pc = 0x14d738u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 16, bits); }
    // 0x14d73c: 0x0  nop
    ctx->pc = 0x14d73cu;
    // NOP
    // 0x14d740: 0x2a010010  slti        $at, $s0, 0x10
    ctx->pc = 0x14d740u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)16) ? 1 : 0);
    // 0x14d744: 0x54200003  bnel        $at, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x14D744u;
    {
        const bool branch_taken_0x14d744 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x14d744) {
            ctx->pc = 0x14D748u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x14D744u;
            // 0x14d748: 0x2a01fff1  slti        $at, $s0, -0xF (Delay Slot)
            SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)4294967281) ? 1 : 0);
            ctx->in_delay_slot = false;
            ctx->pc = 0x14D754u;
            goto label_14d754;
        }
    }
    ctx->pc = 0x14D74Cu;
    // 0x14d74c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x14D74Cu;
    {
        const bool branch_taken_0x14d74c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14D750u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14D74Cu;
        // 0x14d750: 0x2410000f  addiu       $s0, $zero, 0xF (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14d74c) {
            ctx->pc = 0x14D760u;
            goto label_14d760;
        }
    }
    ctx->pc = 0x14D754u;
label_14d754:
    // 0x14d754: 0x50200003  beql        $at, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x14D754u;
    {
        const bool branch_taken_0x14d754 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x14d754) {
            ctx->pc = 0x14D758u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x14D754u;
            // 0x14d758: 0x308400ff  andi        $a0, $a0, 0xFF (Delay Slot)
            SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
            ctx->in_delay_slot = false;
            ctx->pc = 0x14D764u;
            goto label_14d764;
        }
    }
    ctx->pc = 0x14D75Cu;
    // 0x14d75c: 0x2410fff1  addiu       $s0, $zero, -0xF
    ctx->pc = 0x14d75cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967281));
label_14d760:
    // 0x14d760: 0x308400ff  andi        $a0, $a0, 0xFF
    ctx->pc = 0x14d760u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
label_14d764:
    // 0x14d764: 0x3c020042  lui         $v0, 0x42
    ctx->pc = 0x14d764u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)66 << 16));
    // 0x14d768: 0x41980  sll         $v1, $a0, 6
    ctx->pc = 0x14d768u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 6));
    // 0x14d76c: 0x24429f10  addiu       $v0, $v0, -0x60F0
    ctx->pc = 0x14d76cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294942480));
    // 0x14d770: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x14d770u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x14d774: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x14d774u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x14d778: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x14d778u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x14d77c: 0x319c0  sll         $v1, $v1, 7
    ctx->pc = 0x14d77cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 7));
    // 0x14d780: 0x438821  addu        $s1, $v0, $v1
    ctx->pc = 0x14d780u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x14d784: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x14d784u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x14d788: 0x12020009  beq         $s0, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x14D788u;
    {
        const bool branch_taken_0x14d788 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        if (branch_taken_0x14d788) {
            ctx->pc = 0x14D7B0u;
            goto label_14d7b0;
        }
    }
    ctx->pc = 0x14D790u;
    // 0x14d790: 0x3c020041  lui         $v0, 0x41
    ctx->pc = 0x14d790u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65 << 16));
    // 0x14d794: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x14d794u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14d798: 0x24425dc4  addiu       $v0, $v0, 0x5DC4
    ctx->pc = 0x14d798u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 24004));
    // 0x14d79c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x14d79cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x14d7a0: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x14d7a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x14d7a4: 0xc06e75a  jal         func_1B9D68
    ctx->pc = 0x14D7A4u;
    SET_GPR_U32(ctx, 31, 0x14D7ACu);
    ctx->pc = 0x14D7A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14D7A4u;
    // 0x14d7a8: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B9D68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B9D68u, 0x14D7A4u, 0x14D7ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14D7ACu;
label_14d7ac:
    // 0x14d7ac: 0xae300000  sw          $s0, 0x0($s1)
    ctx->pc = 0x14d7acu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 16));
label_14d7b0:
    // 0x14d7b0: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x14d7b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_14d7b4:
    // 0x14d7b4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x14d7b4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x14d7b8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x14d7b8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x14d7bc: 0x3e00008  jr          $ra
    ctx->pc = 0x14D7BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x14D7C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14D7BCu;
        // 0x14d7c0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14D7BCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x14D7C4u;
    // 0x14d7c4: 0x0  nop
    ctx->pc = 0x14d7c4u;
    // NOP
    // 0x14d7c8: 0x0  nop
    ctx->pc = 0x14d7c8u;
    // NOP
    // 0x14d7cc: 0x0  nop
    ctx->pc = 0x14d7ccu;
    // NOP
    if (ctx->pc == 0x14d7ccu) { ctx->pc = 0x14d7d0u; }
}
