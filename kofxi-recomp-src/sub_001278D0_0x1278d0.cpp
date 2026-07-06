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

// Function: sub_001278D0
// Address: 0x1278d0 - 0x127ad8
void sub_001278D0_0x1278d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001278D0_0x1278d0");
#endif

    switch (ctx->pc) {
        case 0x12792cu: goto label_12792c;
        case 0x127948u: goto label_127948;
        case 0x127988u: goto label_127988;
        case 0x1279a0u: goto label_1279a0;
        case 0x127a14u: goto label_127a14;
        case 0x127a98u: goto label_127a98;
        default: break;
    }

    ctx->pc = 0x1278d0u;

    // 0x1278d0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1278d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1278d4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1278d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1278d8: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x1278d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x1278dc: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1278dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1278e0: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x1278e0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1278e4: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1278e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1278e8: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x1278e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x1278ec: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x1278ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x1278f0: 0x8cb30010  lw          $s3, 0x10($a1)
    ctx->pc = 0x1278f0u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x1278f4: 0x8cd20010  lw          $s2, 0x10($a2)
    ctx->pc = 0x1278f4u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 16)));
    // 0x1278f8: 0x272782a  slt         $t7, $s3, $s2
    ctx->pc = 0x1278f8u;
    SET_GPR_U64(ctx, 15, ((int64_t)GPR_S64(ctx, 19) < (int64_t)GPR_S64(ctx, 18)) ? 1 : 0);
    // 0x1278fc: 0x11e00005  beqz        $t7, . + 4 + (0x5 << 2)
    ctx->pc = 0x1278FCu;
    {
        const bool branch_taken_0x1278fc = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x127900u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1278FCu;
        // 0x127900: 0xc0a02d  daddu       $s4, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1278fc) {
            ctx->pc = 0x127914u;
            goto label_127914;
        }
    }
    ctx->pc = 0x127904u;
    // 0x127904: 0x8cd30010  lw          $s3, 0x10($a2)
    ctx->pc = 0x127904u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 16)));
    // 0x127908: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x127908u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12790c: 0x8cb20010  lw          $s2, 0x10($a1)
    ctx->pc = 0x12790cu;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x127910: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x127910u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_127914:
    // 0x127914: 0x8e0f0008  lw          $t7, 0x8($s0)
    ctx->pc = 0x127914u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x127918: 0x2728821  addu        $s1, $s3, $s2
    ctx->pc = 0x127918u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 18)));
    // 0x12791c: 0x8e050004  lw          $a1, 0x4($s0)
    ctx->pc = 0x12791cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x127920: 0x1f1782a  slt         $t7, $t7, $s1
    ctx->pc = 0x127920u;
    SET_GPR_U64(ctx, 15, ((int64_t)GPR_S64(ctx, 15) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
    // 0x127924: 0xc049d12  jal         func_127448
    ctx->pc = 0x127924u;
    SET_GPR_U32(ctx, 31, 0x12792Cu);
    ctx->pc = 0x127928u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x127924u;
    // 0x127928: 0xaf2821  addu        $a1, $a1, $t7 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 15)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x127448u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x127448u, 0x127924u, 0x12792Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12792Cu;
label_12792c:
    // 0x12792c: 0x24580014  addiu       $t8, $v0, 0x14
    ctx->pc = 0x12792cu;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 2), 20));
    // 0x127930: 0x11c880  sll         $t9, $s1, 2
    ctx->pc = 0x127930u;
    SET_GPR_S32(ctx, 25, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x127934: 0x3191821  addu        $v1, $t8, $t9
    ctx->pc = 0x127934u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 24), GPR_U32(ctx, 25)));
    // 0x127938: 0x303782b  sltu        $t7, $t8, $v1
    ctx->pc = 0x127938u;
    SET_GPR_U64(ctx, 15, ((uint64_t)GPR_U64(ctx, 24) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x12793c: 0x11e00009  beqz        $t7, . + 4 + (0x9 << 2)
    ctx->pc = 0x12793Cu;
    {
        const bool branch_taken_0x12793c = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x127940u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12793Cu;
        // 0x127940: 0x300482d  daddu       $t1, $t8, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 24) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12793c) {
            ctx->pc = 0x127964u;
            goto label_127964;
        }
    }
    ctx->pc = 0x127944u;
    // 0x127944: 0xad200000  sw          $zero, 0x0($t1)
    ctx->pc = 0x127944u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 0));
label_127948:
    // 0x127948: 0x25290004  addiu       $t1, $t1, 0x4
    ctx->pc = 0x127948u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4));
    // 0x12794c: 0x123782b  sltu        $t7, $t1, $v1
    ctx->pc = 0x12794cu;
    SET_GPR_U64(ctx, 15, ((uint64_t)GPR_U64(ctx, 9) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x127950: 0x0  nop
    ctx->pc = 0x127950u;
    // NOP
    // 0x127954: 0x0  nop
    ctx->pc = 0x127954u;
    // NOP
    // 0x127958: 0x0  nop
    ctx->pc = 0x127958u;
    // NOP
    // 0x12795c: 0x55e0fffa  bnel        $t7, $zero, . + 4 + (-0x6 << 2)
    ctx->pc = 0x12795Cu;
    {
        const bool branch_taken_0x12795c = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        if (branch_taken_0x12795c) {
            ctx->pc = 0x127960u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x12795Cu;
            // 0x127960: 0xad200000  sw          $zero, 0x0($t1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x127948u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_127948;
        }
    }
    ctx->pc = 0x127964u;
label_127964:
    // 0x127964: 0x26860014  addiu       $a2, $s4, 0x14
    ctx->pc = 0x127964u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 20), 20));
    // 0x127968: 0x26030014  addiu       $v1, $s0, 0x14
    ctx->pc = 0x127968u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 20));
    // 0x12796c: 0x137880  sll         $t7, $s3, 2
    ctx->pc = 0x12796cu;
    SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 19), 2));
    // 0x127970: 0x127080  sll         $t6, $s2, 2
    ctx->pc = 0x127970u;
    SET_GPR_S32(ctx, 14, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
    // 0x127974: 0xce8021  addu        $s0, $a2, $t6
    ctx->pc = 0x127974u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 14)));
    // 0x127978: 0x6f2821  addu        $a1, $v1, $t7
    ctx->pc = 0x127978u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 15)));
    // 0x12797c: 0xd0782b  sltu        $t7, $a2, $s0
    ctx->pc = 0x12797cu;
    SET_GPR_U64(ctx, 15, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
    // 0x127980: 0x11e0003e  beqz        $t7, . + 4 + (0x3E << 2)
    ctx->pc = 0x127980u;
    {
        const bool branch_taken_0x127980 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x127984u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x127980u;
        // 0x127984: 0x300202d  daddu       $a0, $t8, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 24) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x127980) {
            ctx->pc = 0x127A7Cu;
            goto label_127a7c;
        }
    }
    ctx->pc = 0x127988u;
label_127988:
    // 0x127988: 0x8ccf0000  lw          $t7, 0x0($a2)
    ctx->pc = 0x127988u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x12798c: 0x31e7ffff  andi        $a3, $t7, 0xFFFF
    ctx->pc = 0x12798cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 15) & (uint64_t)(uint16_t)65535);
    // 0x127990: 0x10e00019  beqz        $a3, . + 4 + (0x19 << 2)
    ctx->pc = 0x127990u;
    {
        const bool branch_taken_0x127990 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x127994u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x127990u;
        // 0x127994: 0x80502d  daddu       $t2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x127990) {
            ctx->pc = 0x1279F8u;
            goto label_1279f8;
        }
    }
    ctx->pc = 0x127998u;
    // 0x127998: 0x60482d  daddu       $t1, $v1, $zero
    ctx->pc = 0x127998u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12799c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x12799cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1279a0:
    // 0x1279a0: 0x8d2f0000  lw          $t7, 0x0($t1)
    ctx->pc = 0x1279a0u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x1279a4: 0x8d4d0000  lw          $t5, 0x0($t2)
    ctx->pc = 0x1279a4u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x1279a8: 0x31eeffff  andi        $t6, $t7, 0xFFFF
    ctx->pc = 0x1279a8u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 15) & (uint64_t)(uint16_t)65535);
    // 0x1279ac: 0x25290004  addiu       $t1, $t1, 0x4
    ctx->pc = 0x1279acu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4));
    // 0x1279b0: 0x1c77018  mult        $t6, $t6, $a3
    ctx->pc = 0x1279b0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 14) * (int64_t)GPR_S32(ctx, 7); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 14, (int32_t)result); }
    // 0x1279b4: 0xf7c02  srl         $t7, $t7, 16
    ctx->pc = 0x1279b4u;
    SET_GPR_S32(ctx, 15, (int32_t)SRL32(GPR_U32(ctx, 15), 16));
    // 0x1279b8: 0x71e77818  mult1       $t7, $t7, $a3
    ctx->pc = 0x1279b8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 15) * (int64_t)GPR_S32(ctx, 7); ctx->lo1 = (uint64_t)(int64_t)(int32_t)result; ctx->hi1 = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 15, (int32_t)result); }
    // 0x1279bc: 0x31acffff  andi        $t4, $t5, 0xFFFF
    ctx->pc = 0x1279bcu;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 13) & (uint64_t)(uint16_t)65535);
    // 0x1279c0: 0xd6c02  srl         $t5, $t5, 16
    ctx->pc = 0x1279c0u;
    SET_GPR_S32(ctx, 13, (int32_t)SRL32(GPR_U32(ctx, 13), 16));
    // 0x1279c4: 0x125582b  sltu        $t3, $t1, $a1
    ctx->pc = 0x1279c4u;
    SET_GPR_U64(ctx, 11, ((uint64_t)GPR_U64(ctx, 9) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
    // 0x1279c8: 0x1cc7021  addu        $t6, $t6, $t4
    ctx->pc = 0x1279c8u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 12)));
    // 0x1279cc: 0x1c87021  addu        $t6, $t6, $t0
    ctx->pc = 0x1279ccu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 8)));
    // 0x1279d0: 0x1ed7821  addu        $t7, $t7, $t5
    ctx->pc = 0x1279d0u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 13)));
    // 0x1279d4: 0xe4402  srl         $t0, $t6, 16
    ctx->pc = 0x1279d4u;
    SET_GPR_S32(ctx, 8, (int32_t)SRL32(GPR_U32(ctx, 14), 16));
    // 0x1279d8: 0xa54e0000  sh          $t6, 0x0($t2)
    ctx->pc = 0x1279d8u;
    WRITE16(ADD32(GPR_U32(ctx, 10), 0), (uint16_t)GPR_U32(ctx, 14));
    // 0x1279dc: 0x1e87821  addu        $t7, $t7, $t0
    ctx->pc = 0x1279dcu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 8)));
    // 0x1279e0: 0xa54f0002  sh          $t7, 0x2($t2)
    ctx->pc = 0x1279e0u;
    WRITE16(ADD32(GPR_U32(ctx, 10), 2), (uint16_t)GPR_U32(ctx, 15));
    // 0x1279e4: 0xf4402  srl         $t0, $t7, 16
    ctx->pc = 0x1279e4u;
    SET_GPR_S32(ctx, 8, (int32_t)SRL32(GPR_U32(ctx, 15), 16));
    // 0x1279e8: 0x1560ffed  bnez        $t3, . + 4 + (-0x13 << 2)
    ctx->pc = 0x1279E8u;
    {
        const bool branch_taken_0x1279e8 = (GPR_U64(ctx, 11) != GPR_U64(ctx, 0));
        ctx->pc = 0x1279ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1279E8u;
        // 0x1279ec: 0x254a0004  addiu       $t2, $t2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1279e8) {
            ctx->pc = 0x1279A0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1279a0;
        }
    }
    ctx->pc = 0x1279F0u;
    // 0x1279f0: 0xad480000  sw          $t0, 0x0($t2)
    ctx->pc = 0x1279f0u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 0), GPR_U32(ctx, 8));
    // 0x1279f4: 0x8ccf0000  lw          $t7, 0x0($a2)
    ctx->pc = 0x1279f4u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_1279f8:
    // 0x1279f8: 0xf3c02  srl         $a3, $t7, 16
    ctx->pc = 0x1279f8u;
    SET_GPR_S32(ctx, 7, (int32_t)SRL32(GPR_U32(ctx, 15), 16));
    // 0x1279fc: 0x10e0001b  beqz        $a3, . + 4 + (0x1B << 2)
    ctx->pc = 0x1279FCu;
    {
        const bool branch_taken_0x1279fc = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x127A00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1279FCu;
        // 0x127a00: 0x80502d  daddu       $t2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1279fc) {
            ctx->pc = 0x127A6Cu;
            goto label_127a6c;
        }
    }
    ctx->pc = 0x127A04u;
    // 0x127a04: 0x8c8f0000  lw          $t7, 0x0($a0)
    ctx->pc = 0x127a04u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x127a08: 0x60482d  daddu       $t1, $v1, $zero
    ctx->pc = 0x127a08u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x127a0c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x127a0cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x127a10: 0x1e0582d  daddu       $t3, $t7, $zero
    ctx->pc = 0x127a10u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 15) + (uint64_t)GPR_U64(ctx, 0));
label_127a14:
    // 0x127a14: 0x8d2d0000  lw          $t5, 0x0($t1)
    ctx->pc = 0x127a14u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x127a18: 0xb7402  srl         $t6, $t3, 16
    ctx->pc = 0x127a18u;
    SET_GPR_S32(ctx, 14, (int32_t)SRL32(GPR_U32(ctx, 11), 16));
    // 0x127a1c: 0xa54f0000  sh          $t7, 0x0($t2)
    ctx->pc = 0x127a1cu;
    WRITE16(ADD32(GPR_U32(ctx, 10), 0), (uint16_t)GPR_U32(ctx, 15));
    // 0x127a20: 0x25290004  addiu       $t1, $t1, 0x4
    ctx->pc = 0x127a20u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4));
    // 0x127a24: 0x31afffff  andi        $t7, $t5, 0xFFFF
    ctx->pc = 0x127a24u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 13) & (uint64_t)(uint16_t)65535);
    // 0x127a28: 0x125602b  sltu        $t4, $t1, $a1
    ctx->pc = 0x127a28u;
    SET_GPR_U64(ctx, 12, ((uint64_t)GPR_U64(ctx, 9) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
    // 0x127a2c: 0x1e77818  mult        $t7, $t7, $a3
    ctx->pc = 0x127a2cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 15) * (int64_t)GPR_S32(ctx, 7); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 15, (int32_t)result); }
    // 0x127a30: 0xd6c02  srl         $t5, $t5, 16
    ctx->pc = 0x127a30u;
    SET_GPR_S32(ctx, 13, (int32_t)SRL32(GPR_U32(ctx, 13), 16));
    // 0x127a34: 0x71a76818  mult1       $t5, $t5, $a3
    ctx->pc = 0x127a34u;
    { int64_t result = (int64_t)GPR_S32(ctx, 13) * (int64_t)GPR_S32(ctx, 7); ctx->lo1 = (uint64_t)(int64_t)(int32_t)result; ctx->hi1 = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 13, (int32_t)result); }
    // 0x127a38: 0x1ee7821  addu        $t7, $t7, $t6
    ctx->pc = 0x127a38u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 14)));
    // 0x127a3c: 0x1e87021  addu        $t6, $t7, $t0
    ctx->pc = 0x127a3cu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 8)));
    // 0x127a40: 0xa54e0002  sh          $t6, 0x2($t2)
    ctx->pc = 0x127a40u;
    WRITE16(ADD32(GPR_U32(ctx, 10), 2), (uint16_t)GPR_U32(ctx, 14));
    // 0x127a44: 0xe4402  srl         $t0, $t6, 16
    ctx->pc = 0x127a44u;
    SET_GPR_S32(ctx, 8, (int32_t)SRL32(GPR_U32(ctx, 14), 16));
    // 0x127a48: 0x254a0004  addiu       $t2, $t2, 0x4
    ctx->pc = 0x127a48u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4));
    // 0x127a4c: 0x8d4f0000  lw          $t7, 0x0($t2)
    ctx->pc = 0x127a4cu;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x127a50: 0x31eeffff  andi        $t6, $t7, 0xFFFF
    ctx->pc = 0x127a50u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 15) & (uint64_t)(uint16_t)65535);
    // 0x127a54: 0x1e0582d  daddu       $t3, $t7, $zero
    ctx->pc = 0x127a54u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 15) + (uint64_t)GPR_U64(ctx, 0));
    // 0x127a58: 0x1ae6821  addu        $t5, $t5, $t6
    ctx->pc = 0x127a58u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), GPR_U32(ctx, 14)));
    // 0x127a5c: 0x1a87821  addu        $t7, $t5, $t0
    ctx->pc = 0x127a5cu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 13), GPR_U32(ctx, 8)));
    // 0x127a60: 0x1580ffec  bnez        $t4, . + 4 + (-0x14 << 2)
    ctx->pc = 0x127A60u;
    {
        const bool branch_taken_0x127a60 = (GPR_U64(ctx, 12) != GPR_U64(ctx, 0));
        ctx->pc = 0x127A64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x127A60u;
        // 0x127a64: 0xf4402  srl         $t0, $t7, 16 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)SRL32(GPR_U32(ctx, 15), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x127a60) {
            ctx->pc = 0x127A14u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_127a14;
        }
    }
    ctx->pc = 0x127A68u;
    // 0x127a68: 0xad4f0000  sw          $t7, 0x0($t2)
    ctx->pc = 0x127a68u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 0), GPR_U32(ctx, 15));
label_127a6c:
    // 0x127a6c: 0x24c60004  addiu       $a2, $a2, 0x4
    ctx->pc = 0x127a6cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
    // 0x127a70: 0xd0782b  sltu        $t7, $a2, $s0
    ctx->pc = 0x127a70u;
    SET_GPR_U64(ctx, 15, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
    // 0x127a74: 0x15e0ffc4  bnez        $t7, . + 4 + (-0x3C << 2)
    ctx->pc = 0x127A74u;
    {
        const bool branch_taken_0x127a74 = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        ctx->pc = 0x127A78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x127A74u;
        // 0x127a78: 0x24840004  addiu       $a0, $a0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x127a74) {
            ctx->pc = 0x127988u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_127988;
        }
    }
    ctx->pc = 0x127A7Cu;
label_127a7c:
    // 0x127a7c: 0x1a20000c  blez        $s1, . + 4 + (0xC << 2)
    ctx->pc = 0x127A7Cu;
    {
        const bool branch_taken_0x127a7c = (GPR_S32(ctx, 17) <= 0);
        ctx->pc = 0x127A80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x127A7Cu;
        // 0x127a80: 0x3195021  addu        $t2, $t8, $t9 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 24), GPR_U32(ctx, 25)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x127a7c) {
            ctx->pc = 0x127AB0u;
            goto label_127ab0;
        }
    }
    ctx->pc = 0x127A84u;
    // 0x127a84: 0x254afffc  addiu       $t2, $t2, -0x4
    ctx->pc = 0x127a84u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4294967292));
    // 0x127a88: 0x8d4f0000  lw          $t7, 0x0($t2)
    ctx->pc = 0x127a88u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x127a8c: 0x55e00009  bnel        $t7, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x127A8Cu;
    {
        const bool branch_taken_0x127a8c = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        if (branch_taken_0x127a8c) {
            ctx->pc = 0x127A90u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x127A8Cu;
            // 0x127a90: 0xac510010  sw          $s1, 0x10($v0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 2), 16), GPR_U32(ctx, 17));
            ctx->in_delay_slot = false;
            ctx->pc = 0x127AB4u;
            goto label_127ab4;
        }
    }
    ctx->pc = 0x127A94u;
    // 0x127a94: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x127a94u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
label_127a98:
    // 0x127a98: 0x5a200006  blezl       $s1, . + 4 + (0x6 << 2)
    ctx->pc = 0x127A98u;
    {
        const bool branch_taken_0x127a98 = (GPR_S32(ctx, 17) <= 0);
        if (branch_taken_0x127a98) {
            ctx->pc = 0x127A9Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x127A98u;
            // 0x127a9c: 0xac510010  sw          $s1, 0x10($v0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 2), 16), GPR_U32(ctx, 17));
            ctx->in_delay_slot = false;
            ctx->pc = 0x127AB4u;
            goto label_127ab4;
        }
    }
    ctx->pc = 0x127AA0u;
    // 0x127aa0: 0x254afffc  addiu       $t2, $t2, -0x4
    ctx->pc = 0x127aa0u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4294967292));
    // 0x127aa4: 0x8d4f0000  lw          $t7, 0x0($t2)
    ctx->pc = 0x127aa4u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x127aa8: 0x51e0fffb  beql        $t7, $zero, . + 4 + (-0x5 << 2)
    ctx->pc = 0x127AA8u;
    {
        const bool branch_taken_0x127aa8 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        if (branch_taken_0x127aa8) {
            ctx->pc = 0x127AACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x127AA8u;
            // 0x127aac: 0x2631ffff  addiu       $s1, $s1, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x127A98u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_127a98;
        }
    }
    ctx->pc = 0x127AB0u;
label_127ab0:
    // 0x127ab0: 0xac510010  sw          $s1, 0x10($v0)
    ctx->pc = 0x127ab0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 16), GPR_U32(ctx, 17));
label_127ab4:
    // 0x127ab4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x127ab4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x127ab8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x127ab8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x127abc: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x127abcu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x127ac0: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x127ac0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x127ac4: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x127ac4u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x127ac8: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x127ac8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x127acc: 0x3e00008  jr          $ra
    ctx->pc = 0x127ACCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x127AD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x127ACCu;
        // 0x127ad0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x127ACCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x127AD4u;
    // 0x127ad4: 0x0  nop
    ctx->pc = 0x127ad4u;
    // NOP
}
