#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0020E500
// Address: 0x20e500 - 0x20e6f0
void sub_0020E500_0x20e500(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0020E500_0x20e500");
#endif

    switch (ctx->pc) {
        case 0x20e544u: goto label_20e544;
        case 0x20e5e8u: goto label_20e5e8;
        case 0x20e614u: goto label_20e614;
        case 0x20e634u: goto label_20e634;
        case 0x20e674u: goto label_20e674;
        default: break;
    }

    ctx->pc = 0x20e500u;

    // 0x20e500: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x20e500u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x20e504: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x20e504u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x20e508: 0x7fb70080  sq          $s7, 0x80($sp)
    ctx->pc = 0x20e508u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 23));
    // 0x20e50c: 0x7fb60070  sq          $s6, 0x70($sp)
    ctx->pc = 0x20e50cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 22));
    // 0x20e510: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x20e510u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
    // 0x20e514: 0xc0b02d  daddu       $s6, $a2, $zero
    ctx->pc = 0x20e514u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20e518: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x20e518u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
    // 0x20e51c: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x20e51cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20e520: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x20e520u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x20e524: 0xe0a02d  daddu       $s4, $a3, $zero
    ctx->pc = 0x20e524u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20e528: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x20e528u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x20e52c: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x20e52cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x20e530: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x20e530u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x20e534: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x20e534u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x20e538: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x20e538u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20e53c: 0x1aa00008  blez        $s5, . + 4 + (0x8 << 2)
    ctx->pc = 0x20E53Cu;
    {
        const bool branch_taken_0x20e53c = (GPR_S32(ctx, 21) <= 0);
        ctx->pc = 0x20E540u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20E53Cu;
            // 0x20e540: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20e53c) {
            ctx->pc = 0x20E560u;
            goto label_20e560;
        }
    }
    ctx->pc = 0x20E544u;
label_20e544:
    // 0x20e544: 0x121880  sll         $v1, $s2, 2
    ctx->pc = 0x20e544u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
    // 0x20e548: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x20e548u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x20e54c: 0x721821  addu        $v1, $v1, $s2
    ctx->pc = 0x20e54cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
    // 0x20e550: 0x39040  sll         $s2, $v1, 1
    ctx->pc = 0x20e550u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x20e554: 0x2b2082a  slt         $at, $s5, $s2
    ctx->pc = 0x20e554u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 21) < (int64_t)GPR_S64(ctx, 18)) ? 1 : 0);
    // 0x20e558: 0x1020fffa  beqz        $at, . + 4 + (-0x6 << 2)
    ctx->pc = 0x20E558u;
    {
        const bool branch_taken_0x20e558 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x20e558) {
            ctx->pc = 0x20E544u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_20e544;
        }
    }
    ctx->pc = 0x20E560u;
label_20e560:
    // 0x20e560: 0x56200003  bnel        $s1, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x20E560u;
    {
        const bool branch_taken_0x20e560 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x20e560) {
            ctx->pc = 0x20E564u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x20E560u;
            // 0x20e564: 0x3c036666  lui         $v1, 0x6666 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)26214 << 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x20E570u;
            goto label_20e570;
        }
    }
    ctx->pc = 0x20E568u;
    // 0x20e568: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x20E568u;
    {
        const bool branch_taken_0x20e568 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20E56Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20E568u;
            // 0x20e56c: 0x24110001  addiu       $s1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20e568) {
            ctx->pc = 0x20E588u;
            goto label_20e588;
        }
    }
    ctx->pc = 0x20E570u;
label_20e570:
    // 0x20e570: 0x1227c2  srl         $a0, $s2, 31
    ctx->pc = 0x20e570u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 18), 31));
    // 0x20e574: 0x34636667  ori         $v1, $v1, 0x6667
    ctx->pc = 0x20e574u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)26215);
    // 0x20e578: 0x720018  mult        $zero, $v1, $s2
    ctx->pc = 0x20e578u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 18); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x20e57c: 0x1810  mfhi        $v1
    ctx->pc = 0x20e57cu;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x20e580: 0x31883  sra         $v1, $v1, 2
    ctx->pc = 0x20e580u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 2));
    // 0x20e584: 0x649021  addu        $s2, $v1, $a0
    ctx->pc = 0x20e584u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_20e588:
    // 0x20e588: 0x96860000  lhu         $a2, 0x0($s4)
    ctx->pc = 0x20e588u;
    SET_GPR_U32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x20e58c: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x20e58cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x20e590: 0x62040  sll         $a0, $a2, 1
    ctx->pc = 0x20e590u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 6), 1));
    // 0x20e594: 0x862021  addu        $a0, $a0, $a2
    ctx->pc = 0x20e594u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
    // 0x20e598: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x20e598u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x20e59c: 0x962021  addu        $a0, $a0, $s6
    ctx->pc = 0x20e59cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 22)));
    // 0x20e5a0: 0x94970006  lhu         $s7, 0x6($a0)
    ctx->pc = 0x20e5a0u;
    SET_GPR_U32(ctx, 23, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 6)));
    // 0x20e5a4: 0x14a30003  bne         $a1, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x20E5A4u;
    {
        const bool branch_taken_0x20e5a4 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 3));
        ctx->pc = 0x20E5A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20E5A4u;
            // 0x20e5a8: 0x96930002  lhu         $s3, 0x2($s4) (Delay Slot)
        SET_GPR_U32(ctx, 19, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20e5a4) {
            ctx->pc = 0x20E5B4u;
            goto label_20e5b4;
        }
    }
    ctx->pc = 0x20E5ACu;
    // 0x20e5ac: 0x2f11818  mult        $v1, $s7, $s1
    ctx->pc = 0x20e5acu;
    { int64_t result = (int64_t)GPR_S32(ctx, 23) * (int64_t)GPR_S32(ctx, 17); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x20e5b0: 0x2639823  subu        $s3, $s3, $v1
    ctx->pc = 0x20e5b0u;
    SET_GPR_S32(ctx, 19, (int32_t)SUB32(GPR_U32(ctx, 19), GPR_U32(ctx, 3)));
label_20e5b4:
    // 0x20e5b4: 0x24030007  addiu       $v1, $zero, 0x7
    ctx->pc = 0x20e5b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x20e5b8: 0x54a30004  bnel        $a1, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x20E5B8u;
    {
        const bool branch_taken_0x20e5b8 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 3));
        if (branch_taken_0x20e5b8) {
            ctx->pc = 0x20E5BCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x20E5B8u;
            // 0x20e5bc: 0x24030008  addiu       $v1, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
            ctx->pc = 0x20E5CCu;
            goto label_20e5cc;
        }
    }
    ctx->pc = 0x20E5C0u;
    // 0x20e5c0: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x20e5c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x20e5c4: 0x718023  subu        $s0, $v1, $s1
    ctx->pc = 0x20e5c4u;
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x20e5c8: 0x24030008  addiu       $v1, $zero, 0x8
    ctx->pc = 0x20e5c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_20e5cc:
    // 0x20e5cc: 0x54a30004  bnel        $a1, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x20E5CCu;
    {
        const bool branch_taken_0x20e5cc = (GPR_U64(ctx, 5) != GPR_U64(ctx, 3));
        if (branch_taken_0x20e5cc) {
            ctx->pc = 0x20E5D0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x20E5CCu;
            // 0x20e5d0: 0x200182d  daddu       $v1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x20E5E0u;
            goto label_20e5e0;
        }
    }
    ctx->pc = 0x20E5D4u;
    // 0x20e5d4: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x20e5d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x20e5d8: 0x718023  subu        $s0, $v1, $s1
    ctx->pc = 0x20e5d8u;
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x20e5dc: 0x200182d  daddu       $v1, $s0, $zero
    ctx->pc = 0x20e5dcu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_20e5e0:
    // 0x20e5e0: 0x10600011  beqz        $v1, . + 4 + (0x11 << 2)
    ctx->pc = 0x20E5E0u;
    {
        const bool branch_taken_0x20e5e0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x20E5E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20E5E0u;
            // 0x20e5e4: 0x2610ffff  addiu       $s0, $s0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20e5e0) {
            ctx->pc = 0x20E628u;
            goto label_20e628;
        }
    }
    ctx->pc = 0x20E5E8u;
label_20e5e8:
    // 0x20e5e8: 0x9682000e  lhu         $v0, 0xE($s4)
    ctx->pc = 0x20e5e8u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 14)));
    // 0x20e5ec: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x20e5ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20e5f0: 0xffa20000  sd          $v0, 0x0($sp)
    ctx->pc = 0x20e5f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
    // 0x20e5f4: 0x96850000  lhu         $a1, 0x0($s4)
    ctx->pc = 0x20e5f4u;
    SET_GPR_U32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x20e5f8: 0x96870004  lhu         $a3, 0x4($s4)
    ctx->pc = 0x20e5f8u;
    SET_GPR_U32(ctx, 7, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 4)));
    // 0x20e5fc: 0x96880006  lhu         $t0, 0x6($s4)
    ctx->pc = 0x20e5fcu;
    SET_GPR_U32(ctx, 8, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 6)));
    // 0x20e600: 0x96890008  lhu         $t1, 0x8($s4)
    ctx->pc = 0x20e600u;
    SET_GPR_U32(ctx, 9, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 8)));
    // 0x20e604: 0x968a000a  lhu         $t2, 0xA($s4)
    ctx->pc = 0x20e604u;
    SET_GPR_U32(ctx, 10, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 10)));
    // 0x20e608: 0x968b000c  lhu         $t3, 0xC($s4)
    ctx->pc = 0x20e608u;
    SET_GPR_U32(ctx, 11, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 12)));
    // 0x20e60c: 0xc08388c  jal         func_20E230
    ctx->pc = 0x20E60Cu;
    SET_GPR_U32(ctx, 31, 0x20E614u);
    ctx->pc = 0x20E610u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x20E60Cu;
            // 0x20e610: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x20E230u;
    if (runtime->hasFunction(0x20E230u)) {
        auto targetFn = runtime->lookupFunction(0x20E230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20E614u; }
        if (ctx->pc != 0x20E614u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0020E230_0x20e230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20E614u; }
        if (ctx->pc != 0x20E614u) { return; }
    }
    ctx->pc = 0x20E614u;
label_20e614:
    // 0x20e614: 0x200182d  daddu       $v1, $s0, $zero
    ctx->pc = 0x20e614u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20e618: 0x2779821  addu        $s3, $s3, $s7
    ctx->pc = 0x20e618u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 23)));
    // 0x20e61c: 0x1460fff2  bnez        $v1, . + 4 + (-0xE << 2)
    ctx->pc = 0x20E61Cu;
    {
        const bool branch_taken_0x20e61c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x20E620u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20E61Cu;
            // 0x20e620: 0x2610ffff  addiu       $s0, $s0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20e61c) {
            ctx->pc = 0x20E5E8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_20e5e8;
        }
    }
    ctx->pc = 0x20E624u;
    // 0x20e624: 0x0  nop
    ctx->pc = 0x20e624u;
    // NOP
label_20e628:
    // 0x20e628: 0x220182d  daddu       $v1, $s1, $zero
    ctx->pc = 0x20e628u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20e62c: 0x10600022  beqz        $v1, . + 4 + (0x22 << 2)
    ctx->pc = 0x20E62Cu;
    {
        const bool branch_taken_0x20e62c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x20E630u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20E62Cu;
            // 0x20e630: 0x2631ffff  addiu       $s1, $s1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20e62c) {
            ctx->pc = 0x20E6B8u;
            goto label_20e6b8;
        }
    }
    ctx->pc = 0x20E634u;
label_20e634:
    // 0x20e634: 0x9682000e  lhu         $v0, 0xE($s4)
    ctx->pc = 0x20e634u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 14)));
    // 0x20e638: 0xffa20000  sd          $v0, 0x0($sp)
    ctx->pc = 0x20e638u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
    // 0x20e63c: 0x96830000  lhu         $v1, 0x0($s4)
    ctx->pc = 0x20e63cu;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x20e640: 0x16400002  bnez        $s2, . + 4 + (0x2 << 2)
    ctx->pc = 0x20E640u;
    {
        const bool branch_taken_0x20e640 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        ctx->pc = 0x20E644u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20E640u;
            // 0x20e644: 0x2b2001a  div         $zero, $s5, $s2 (Delay Slot)
        { int32_t divisor = GPR_S32(ctx, 18);    int32_t dividend = GPR_S32(ctx, 21);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
        ctx->in_delay_slot = false;
        if (branch_taken_0x20e640) {
            ctx->pc = 0x20E64Cu;
            goto label_20e64c;
        }
    }
    ctx->pc = 0x20E648u;
    // 0x20e648: 0x1cd  break       0, 7
    ctx->pc = 0x20e648u;
    runtime->handleBreak(rdram, ctx);
label_20e64c:
    // 0x20e64c: 0x96870004  lhu         $a3, 0x4($s4)
    ctx->pc = 0x20e64cu;
    SET_GPR_U32(ctx, 7, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 4)));
    // 0x20e650: 0x1012  mflo        $v0
    ctx->pc = 0x20e650u;
    SET_GPR_U64(ctx, 2, ctx->lo);
    // 0x20e654: 0x96880006  lhu         $t0, 0x6($s4)
    ctx->pc = 0x20e654u;
    SET_GPR_U32(ctx, 8, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 6)));
    // 0x20e658: 0x622821  addu        $a1, $v1, $v0
    ctx->pc = 0x20e658u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x20e65c: 0x96890008  lhu         $t1, 0x8($s4)
    ctx->pc = 0x20e65cu;
    SET_GPR_U32(ctx, 9, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 8)));
    // 0x20e660: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x20e660u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20e664: 0x968a000a  lhu         $t2, 0xA($s4)
    ctx->pc = 0x20e664u;
    SET_GPR_U32(ctx, 10, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 10)));
    // 0x20e668: 0x968b000c  lhu         $t3, 0xC($s4)
    ctx->pc = 0x20e668u;
    SET_GPR_U32(ctx, 11, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 12)));
    // 0x20e66c: 0xc08388c  jal         func_20E230
    ctx->pc = 0x20E66Cu;
    SET_GPR_U32(ctx, 31, 0x20E674u);
    ctx->pc = 0x20E670u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x20E66Cu;
            // 0x20e670: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x20E230u;
    if (runtime->hasFunction(0x20E230u)) {
        auto targetFn = runtime->lookupFunction(0x20E230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20E674u; }
        if (ctx->pc != 0x20E674u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0020E230_0x20e230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20E674u; }
        if (ctx->pc != 0x20E674u) { return; }
    }
    ctx->pc = 0x20E674u;
label_20e674:
    // 0x20e674: 0x16400002  bnez        $s2, . + 4 + (0x2 << 2)
    ctx->pc = 0x20E674u;
    {
        const bool branch_taken_0x20e674 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        ctx->pc = 0x20E678u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20E674u;
            // 0x20e678: 0x2b2001a  div         $zero, $s5, $s2 (Delay Slot)
        { int32_t divisor = GPR_S32(ctx, 18);    int32_t dividend = GPR_S32(ctx, 21);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
        ctx->in_delay_slot = false;
        if (branch_taken_0x20e674) {
            ctx->pc = 0x20E680u;
            goto label_20e680;
        }
    }
    ctx->pc = 0x20E67Cu;
    // 0x20e67c: 0x1cd  break       0, 7
    ctx->pc = 0x20e67cu;
    runtime->handleBreak(rdram, ctx);
label_20e680:
    // 0x20e680: 0x3c036666  lui         $v1, 0x6666
    ctx->pc = 0x20e680u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)26214 << 16));
    // 0x20e684: 0x122fc2  srl         $a1, $s2, 31
    ctx->pc = 0x20e684u;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 18), 31));
    // 0x20e688: 0xa810  mfhi        $s5
    ctx->pc = 0x20e688u;
    SET_GPR_U64(ctx, 21, ctx->hi);
    // 0x20e68c: 0x34636667  ori         $v1, $v1, 0x6667
    ctx->pc = 0x20e68cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)26215);
    // 0x20e690: 0x720018  mult        $zero, $v1, $s2
    ctx->pc = 0x20e690u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 18); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x20e694: 0x2779821  addu        $s3, $s3, $s7
    ctx->pc = 0x20e694u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 23)));
    // 0x20e698: 0x0  nop
    ctx->pc = 0x20e698u;
    // NOP
    // 0x20e69c: 0x2010  mfhi        $a0
    ctx->pc = 0x20e69cu;
    SET_GPR_U64(ctx, 4, ctx->hi);
    // 0x20e6a0: 0x220182d  daddu       $v1, $s1, $zero
    ctx->pc = 0x20e6a0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20e6a4: 0x42083  sra         $a0, $a0, 2
    ctx->pc = 0x20e6a4u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 2));
    // 0x20e6a8: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x20e6a8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
    // 0x20e6ac: 0x1460ffe1  bnez        $v1, . + 4 + (-0x1F << 2)
    ctx->pc = 0x20E6ACu;
    {
        const bool branch_taken_0x20e6ac = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x20E6B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20E6ACu;
            // 0x20e6b0: 0x859021  addu        $s2, $a0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20e6ac) {
            ctx->pc = 0x20E634u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_20e634;
        }
    }
    ctx->pc = 0x20E6B4u;
    // 0x20e6b4: 0x0  nop
    ctx->pc = 0x20e6b4u;
    // NOP
label_20e6b8:
    // 0x20e6b8: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x20e6b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x20e6bc: 0x7bb70080  lq          $s7, 0x80($sp)
    ctx->pc = 0x20e6bcu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x20e6c0: 0x7bb60070  lq          $s6, 0x70($sp)
    ctx->pc = 0x20e6c0u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x20e6c4: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x20e6c4u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x20e6c8: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x20e6c8u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x20e6cc: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x20e6ccu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x20e6d0: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x20e6d0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x20e6d4: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x20e6d4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x20e6d8: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x20e6d8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x20e6dc: 0x3e00008  jr          $ra
    ctx->pc = 0x20E6DCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x20E6E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20E6DCu;
            // 0x20e6e0: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x20E6E4u;
    // 0x20e6e4: 0x0  nop
    ctx->pc = 0x20e6e4u;
    // NOP
    // 0x20e6e8: 0x0  nop
    ctx->pc = 0x20e6e8u;
    // NOP
    // 0x20e6ec: 0x0  nop
    ctx->pc = 0x20e6ecu;
    // NOP
    ctx->pc = 0x20e6f0u;
}
