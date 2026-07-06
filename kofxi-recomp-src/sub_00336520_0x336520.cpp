#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00336520
// Address: 0x336520 - 0x3365e0
void sub_00336520_0x336520(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00336520_0x336520");
#endif

    switch (ctx->pc) {
        case 0x336568u: goto label_336568;
        default: break;
    }

    ctx->pc = 0x336520u;

    // 0x336520: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x336520u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x336524: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x336524u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x336528: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x336528u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x33652c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x33652cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x336530: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x336530u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x336534: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x336534u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x336538: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x336538u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33653c: 0x9443ea26  lhu         $v1, -0x15DA($v0)
    ctx->pc = 0x33653cu;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 4294961702)));
    // 0x336540: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x336540u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x336544: 0x9442ea32  lhu         $v0, -0x15CE($v0)
    ctx->pc = 0x336544u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 4294961714)));
    // 0x336548: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x336548u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x33654c: 0x3052ffff  andi        $s2, $v0, 0xFFFF
    ctx->pc = 0x33654cu;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x336550: 0x32420050  andi        $v0, $s2, 0x50
    ctx->pc = 0x336550u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)80);
    // 0x336554: 0x1040001b  beqz        $v0, . + 4 + (0x1B << 2)
    ctx->pc = 0x336554u;
    {
        const bool branch_taken_0x336554 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x336558u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x336554u;
            // 0x336558: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x336554) {
            ctx->pc = 0x3365C4u;
            goto label_3365c4;
        }
    }
    ctx->pc = 0x33655Cu;
    // 0x33655c: 0x24040125  addiu       $a0, $zero, 0x125
    ctx->pc = 0x33655cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 293));
    // 0x336560: 0xc0538fc  jal         func_14E3F0
    ctx->pc = 0x336560u;
    SET_GPR_U32(ctx, 31, 0x336568u);
    ctx->pc = 0x336564u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x336560u;
            // 0x336564: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14E3F0u;
    if (runtime->hasFunction(0x14E3F0u)) {
        auto targetFn = runtime->lookupFunction(0x14E3F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x336568u; }
        if (ctx->pc != 0x336568u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0014E3F0_0x14e3f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x336568u; }
        if (ctx->pc != 0x336568u) { return; }
    }
    ctx->pc = 0x336568u;
label_336568:
    // 0x336568: 0x26230001  addiu       $v1, $s1, 0x1
    ctx->pc = 0x336568u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x33656c: 0x32420010  andi        $v0, $s2, 0x10
    ctx->pc = 0x33656cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)16);
    // 0x336570: 0x38e3c  dsll32      $s1, $v1, 24
    ctx->pc = 0x336570u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 3) << (32 + 24));
    // 0x336574: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x336574u;
    {
        const bool branch_taken_0x336574 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x336578u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x336574u;
            // 0x336578: 0x118e3f  dsra32      $s1, $s1, 24 (Delay Slot)
        SET_GPR_S64(ctx, 17, GPR_S64(ctx, 17) >> (32 + 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x336574) {
            ctx->pc = 0x336588u;
            goto label_336588;
        }
    }
    ctx->pc = 0x33657Cu;
    // 0x33657c: 0x2622fffe  addiu       $v0, $s1, -0x2
    ctx->pc = 0x33657cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967294));
    // 0x336580: 0x28e3c  dsll32      $s1, $v0, 24
    ctx->pc = 0x336580u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) << (32 + 24));
    // 0x336584: 0x118e3f  dsra32      $s1, $s1, 24
    ctx->pc = 0x336584u;
    SET_GPR_S64(ctx, 17, GPR_S64(ctx, 17) >> (32 + 24));
label_336588:
    // 0x336588: 0x111e3c  dsll32      $v1, $s1, 24
    ctx->pc = 0x336588u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) << (32 + 24));
    // 0x33658c: 0x31e3f  dsra32      $v1, $v1, 24
    ctx->pc = 0x33658cu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 24));
    // 0x336590: 0x4630007  bgezl       $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x336590u;
    {
        const bool branch_taken_0x336590 = (GPR_S32(ctx, 3) >= 0);
        if (branch_taken_0x336590) {
            ctx->pc = 0x336594u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x336590u;
            // 0x336594: 0x10163c  dsll32      $v0, $s0, 24 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 24));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3365B0u;
            goto label_3365b0;
        }
    }
    ctx->pc = 0x336598u;
    // 0x336598: 0x10163c  dsll32      $v0, $s0, 24
    ctx->pc = 0x336598u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 24));
    // 0x33659c: 0x2163f  dsra32      $v0, $v0, 24
    ctx->pc = 0x33659cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 24));
    // 0x3365a0: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x3365a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x3365a4: 0x28e3c  dsll32      $s1, $v0, 24
    ctx->pc = 0x3365a4u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) << (32 + 24));
    // 0x3365a8: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x3365A8u;
    {
        const bool branch_taken_0x3365a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3365ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3365A8u;
            // 0x3365ac: 0x118e3f  dsra32      $s1, $s1, 24 (Delay Slot)
        SET_GPR_S64(ctx, 17, GPR_S64(ctx, 17) >> (32 + 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3365a8) {
            ctx->pc = 0x3365C4u;
            goto label_3365c4;
        }
    }
    ctx->pc = 0x3365B0u;
label_3365b0:
    // 0x3365b0: 0x2163f  dsra32      $v0, $v0, 24
    ctx->pc = 0x3365b0u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 24));
    // 0x3365b4: 0x62102a  slt         $v0, $v1, $v0
    ctx->pc = 0x3365b4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x3365b8: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x3365B8u;
    {
        const bool branch_taken_0x3365b8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3365b8) {
            ctx->pc = 0x3365BCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3365B8u;
            // 0x3365bc: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3365C8u;
            goto label_3365c8;
        }
    }
    ctx->pc = 0x3365C0u;
    // 0x3365c0: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x3365c0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3365c4:
    // 0x3365c4: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x3365c4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3365c8:
    // 0x3365c8: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x3365c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3365cc: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x3365ccu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3365d0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3365d0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3365d4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3365d4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3365d8: 0x3e00008  jr          $ra
    ctx->pc = 0x3365D8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3365DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3365D8u;
            // 0x3365dc: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3365E0u;
    ctx->pc = 0x3365e0u;
}
