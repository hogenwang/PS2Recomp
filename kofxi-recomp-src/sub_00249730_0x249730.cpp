#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00249730
// Address: 0x249730 - 0x2497f0
void sub_00249730_0x249730(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00249730_0x249730");
#endif

    switch (ctx->pc) {
        case 0x249750u: goto label_249750;
        case 0x249778u: goto label_249778;
        default: break;
    }

    ctx->pc = 0x249730u;

    // 0x249730: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x249730u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x249734: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x249734u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x249738: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x249738u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x24973c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x24973cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x249740: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x249740u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x249744: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x249744u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x249748: 0xc048c96  jal         func_123258
    ctx->pc = 0x249748u;
    SET_GPR_U32(ctx, 31, 0x249750u);
    ctx->pc = 0x24974Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x249748u;
            // 0x24974c: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x123258u;
    if (runtime->hasFunction(0x123258u)) {
        auto targetFn = runtime->lookupFunction(0x123258u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x249750u; }
        if (ctx->pc != 0x249750u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00123258_0x123258(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x249750u; }
        if (ctx->pc != 0x249750u) { return; }
    }
    ctx->pc = 0x249750u;
label_249750:
    // 0x249750: 0x26080007  addiu       $t0, $s0, 0x7
    ctx->pc = 0x249750u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 16), 7));
    // 0x249754: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x249754u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x249758: 0x70182a  slt         $v1, $v1, $s0
    ctx->pc = 0x249758u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x24975c: 0x100102d  daddu       $v0, $t0, $zero
    ctx->pc = 0x24975cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x249760: 0x203100b  movn        $v0, $s0, $v1
    ctx->pc = 0x249760u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 16));
    // 0x249764: 0x210c3  sra         $v0, $v0, 3
    ctx->pc = 0x249764u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 3));
    // 0x249768: 0x18400010  blez        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x249768u;
    {
        const bool branch_taken_0x249768 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x24976Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x249768u;
            // 0x24976c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x249768) {
            ctx->pc = 0x2497ACu;
            goto label_2497ac;
        }
    }
    ctx->pc = 0x249770u;
    // 0x249770: 0x32070007  andi        $a3, $s0, 0x7
    ctx->pc = 0x249770u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)7);
    // 0x249774: 0x0  nop
    ctx->pc = 0x249774u;
    // NOP
label_249778:
    // 0x249778: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x249778u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x24977c: 0x100102d  daddu       $v0, $t0, $zero
    ctx->pc = 0x24977cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x249780: 0x70182a  slt         $v1, $v1, $s0
    ctx->pc = 0x249780u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x249784: 0x2262821  addu        $a1, $s1, $a2
    ctx->pc = 0x249784u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 6)));
    // 0x249788: 0x203100b  movn        $v0, $s0, $v1
    ctx->pc = 0x249788u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 16));
    // 0x24978c: 0x240400ff  addiu       $a0, $zero, 0xFF
    ctx->pc = 0x24978cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x249790: 0x210c3  sra         $v0, $v0, 3
    ctx->pc = 0x249790u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 3));
    // 0x249794: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x249794u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x249798: 0xc2102a  slt         $v0, $a2, $v0
    ctx->pc = 0x249798u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x24979c: 0x1440fff6  bnez        $v0, . + 4 + (-0xA << 2)
    ctx->pc = 0x24979Cu;
    {
        const bool branch_taken_0x24979c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2497A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x24979Cu;
            // 0x2497a0: 0xa0a40000  sb          $a0, 0x0($a1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24979c) {
            ctx->pc = 0x249778u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_249778;
        }
    }
    ctx->pc = 0x2497A4u;
    // 0x2497a4: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2497A4u;
    {
        const bool branch_taken_0x2497a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2497a4) {
            ctx->pc = 0x2497B0u;
            goto label_2497b0;
        }
    }
    ctx->pc = 0x2497ACu;
label_2497ac:
    // 0x2497ac: 0x32070007  andi        $a3, $s0, 0x7
    ctx->pc = 0x2497acu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)7);
label_2497b0:
    // 0x2497b0: 0x10e0000a  beqz        $a3, . + 4 + (0xA << 2)
    ctx->pc = 0x2497B0u;
    {
        const bool branch_taken_0x2497b0 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x2497B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2497B0u;
            // 0x2497b4: 0x2403ffff  addiu       $v1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2497b0) {
            ctx->pc = 0x2497DCu;
            goto label_2497dc;
        }
    }
    ctx->pc = 0x2497B8u;
    // 0x2497b8: 0x3404ff00  ori         $a0, $zero, 0xFF00
    ctx->pc = 0x2497b8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65280);
    // 0x2497bc: 0x70182a  slt         $v1, $v1, $s0
    ctx->pc = 0x2497bcu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x2497c0: 0x2262821  addu        $a1, $s1, $a2
    ctx->pc = 0x2497c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 6)));
    // 0x2497c4: 0x203400b  movn        $t0, $s0, $v1
    ctx->pc = 0x2497c4u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 8, GPR_VEC(ctx, 16));
    // 0x2497c8: 0x810c3  sra         $v0, $t0, 3
    ctx->pc = 0x2497c8u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 8), 3));
    // 0x2497cc: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x2497ccu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x2497d0: 0x2021023  subu        $v0, $s0, $v0
    ctx->pc = 0x2497d0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x2497d4: 0x442007  srav        $a0, $a0, $v0
    ctx->pc = 0x2497d4u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), GPR_U32(ctx, 2) & 0x1F));
    // 0x2497d8: 0xa0a40000  sb          $a0, 0x0($a1)
    ctx->pc = 0x2497d8u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 4));
label_2497dc:
    // 0x2497dc: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2497dcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2497e0: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x2497e0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2497e4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2497e4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2497e8: 0x3e00008  jr          $ra
    ctx->pc = 0x2497E8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2497ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2497E8u;
            // 0x2497ec: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2497F0u;
    ctx->pc = 0x2497f0u;
}
