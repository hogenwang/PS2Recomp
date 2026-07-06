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

// Function: sub_001F1EC0
// Address: 0x1f1ec0 - 0x1f2148
void sub_001F1EC0_0x1f1ec0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001F1EC0_0x1f1ec0");
#endif

    switch (ctx->pc) {
        case 0x1f1f04u: goto label_1f1f04;
        case 0x1f1f18u: goto label_1f1f18;
        case 0x1f1f88u: goto label_1f1f88;
        case 0x1f2020u: goto label_1f2020;
        case 0x1f2044u: goto label_1f2044;
        case 0x1f20f0u: goto label_1f20f0;
        default: break;
    }

    ctx->pc = 0x1f1ec0u;

    // 0x1f1ec0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1f1ec0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1f1ec4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1f1ec4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1f1ec8: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x1f1ec8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f1ecc: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1f1eccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1f1ed0: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1f1ed0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1f1ed4: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x1f1ed4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f1ed8: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x1f1ed8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x1f1edc: 0xc0a02d  daddu       $s4, $a2, $zero
    ctx->pc = 0x1f1edcu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f1ee0: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x1f1ee0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x1f1ee4: 0x26550d88  addiu       $s5, $s2, 0xD88
    ctx->pc = 0x1f1ee4u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 18), 3464));
    // 0x1f1ee8: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x1f1ee8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x1f1eec: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1f1eecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f1ef0: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x1f1ef0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x1f1ef4: 0x26450da4  addiu       $a1, $s2, 0xDA4
    ctx->pc = 0x1f1ef4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 3492));
    // 0x1f1ef8: 0x26511238  addiu       $s1, $s2, 0x1238
    ctx->pc = 0x1f1ef8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 18), 4664));
    // 0x1f1efc: 0xc07ca7a  jal         func_1F29E8
    ctx->pc = 0x1F1EFCu;
    SET_GPR_U32(ctx, 31, 0x1F1F04u);
    ctx->pc = 0x1F1F00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F1EFCu;
    // 0x1f1f00: 0x8e532018  lw          $s3, 0x2018($s2) (Delay Slot)
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8216)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F29E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F29E8u, 0x1F1EFCu, 0x1F1F04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F1F04u;
label_1f1f04:
    // 0x1f1f04: 0x12800010  beqz        $s4, . + 4 + (0x10 << 2)
    ctx->pc = 0x1F1F04u;
    {
        const bool branch_taken_0x1f1f04 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F1F08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F1F04u;
        // 0x1f1f08: 0x2403ffff  addiu       $v1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f1f04) {
            ctx->pc = 0x1F1F48u;
            goto label_1f1f48;
        }
    }
    ctx->pc = 0x1F1F0Cu;
    // 0x1f1f0c: 0x2406003f  addiu       $a2, $zero, 0x3F
    ctx->pc = 0x1f1f0cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
    // 0x1f1f10: 0x26421334  addiu       $v0, $s2, 0x1334
    ctx->pc = 0x1f1f10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 4916));
    // 0x1f1f14: 0x0  nop
    ctx->pc = 0x1f1f14u;
    // NOP
label_1f1f18:
    // 0x1f1f18: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x1f1f18u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x1f1f1c: 0xa4430000  sh          $v1, 0x0($v0)
    ctx->pc = 0x1f1f1cu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x1f1f20: 0x0  nop
    ctx->pc = 0x1f1f20u;
    // NOP
    // 0x1f1f24: 0x0  nop
    ctx->pc = 0x1f1f24u;
    // NOP
    // 0x1f1f28: 0x0  nop
    ctx->pc = 0x1f1f28u;
    // NOP
    // 0x1f1f2c: 0x4c1fffa  bgez        $a2, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1F1F2Cu;
    {
        const bool branch_taken_0x1f1f2c = (GPR_S32(ctx, 6) >= 0);
        ctx->pc = 0x1F1F30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F1F2Cu;
        // 0x1f1f30: 0x2442fffc  addiu       $v0, $v0, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967292));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f1f2c) {
            ctx->pc = 0x1F1F18u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1f1f18;
        }
    }
    ctx->pc = 0x1F1F34u;
    // 0x1f1f34: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1f1f34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1f1f38: 0x8e070014  lw          $a3, 0x14($s0)
    ctx->pc = 0x1f1f38u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x1f1f3c: 0xa6220002  sh          $v0, 0x2($s1)
    ctx->pc = 0x1f1f3cu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 2), (uint16_t)GPR_U32(ctx, 2));
    // 0x1f1f40: 0x10000021  b           . + 4 + (0x21 << 2)
    ctx->pc = 0x1F1F40u;
    {
        const bool branch_taken_0x1f1f40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F1F44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F1F40u;
        // 0x1f1f44: 0x8e0a0018  lw          $t2, 0x18($s0) (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f1f40) {
            ctx->pc = 0x1F1FC8u;
            goto label_1f1fc8;
        }
    }
    ctx->pc = 0x1F1F48u;
label_1f1f48:
    // 0x1f1f48: 0x8e0a0018  lw          $t2, 0x18($s0)
    ctx->pc = 0x1f1f48u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x1f1f4c: 0x2542ffff  addiu       $v0, $t2, -0x1
    ctx->pc = 0x1f1f4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 10), 4294967295));
    // 0x1f1f50: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x1f1f50u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x1f1f54: 0x1040001c  beqz        $v0, . + 4 + (0x1C << 2)
    ctx->pc = 0x1F1F54u;
    {
        const bool branch_taken_0x1f1f54 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F1F58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F1F54u;
        // 0x1f1f58: 0x8e070014  lw          $a3, 0x14($s0) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f1f54) {
            ctx->pc = 0x1F1FC8u;
            goto label_1f1fc8;
        }
    }
    ctx->pc = 0x1F1F5Cu;
    // 0x1f1f5c: 0x8e620164  lw          $v0, 0x164($s3)
    ctx->pc = 0x1f1f5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 356)));
    // 0x1f1f60: 0x8c440070  lw          $a0, 0x70($v0)
    ctx->pc = 0x1f1f60u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 112)));
    // 0x1f1f64: 0x24e50400  addiu       $a1, $a3, 0x400
    ctx->pc = 0x1f1f64u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 7), 1024));
    // 0x1f1f68: 0xe0402d  daddu       $t0, $a3, $zero
    ctx->pc = 0x1f1f68u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f1f6c: 0xe4182a  slt         $v1, $a3, $a0
    ctx->pc = 0x1f1f6cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x1f1f70: 0x24860001  addiu       $a2, $a0, 0x1
    ctx->pc = 0x1f1f70u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x1f1f74: 0xa3400b  movn        $t0, $a1, $v1
    ctx->pc = 0x1f1f74u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 8, GPR_VEC(ctx, 5));
    // 0x1f1f78: 0xc8102a  slt         $v0, $a2, $t0
    ctx->pc = 0x1f1f78u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 8)) ? 1 : 0);
    // 0x1f1f7c: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x1F1F7Cu;
    {
        const bool branch_taken_0x1f1f7c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F1F80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F1F7Cu;
        // 0x1f1f80: 0x28e30000  slti        $v1, $a3, 0x0 (Delay Slot)
        SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)0) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f1f7c) {
            ctx->pc = 0x1F1FCCu;
            goto label_1f1fcc;
        }
    }
    ctx->pc = 0x1F1F84u;
    // 0x1f1f84: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x1f1f84u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_1f1f88:
    // 0x1f1f88: 0x28c30000  slti        $v1, $a2, 0x0
    ctx->pc = 0x1f1f88u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x1f1f8c: 0x24c4003f  addiu       $a0, $a2, 0x3F
    ctx->pc = 0x1f1f8cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), 63));
    // 0x1f1f90: 0xc0102d  daddu       $v0, $a2, $zero
    ctx->pc = 0x1f1f90u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f1f94: 0x83100b  movn        $v0, $a0, $v1
    ctx->pc = 0x1f1f94u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 4));
    // 0x1f1f98: 0x21183  sra         $v0, $v0, 6
    ctx->pc = 0x1f1f98u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 6));
    // 0x1f1f9c: 0x21180  sll         $v0, $v0, 6
    ctx->pc = 0x1f1f9cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
    // 0x1f1fa0: 0xc21023  subu        $v0, $a2, $v0
    ctx->pc = 0x1f1fa0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x1f1fa4: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x1f1fa4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x1f1fa8: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1f1fa8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1f1fac: 0xc8182a  slt         $v1, $a2, $t0
    ctx->pc = 0x1f1facu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 8)) ? 1 : 0);
    // 0x1f1fb0: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x1f1fb0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x1f1fb4: 0x1460fff4  bnez        $v1, . + 4 + (-0xC << 2)
    ctx->pc = 0x1F1FB4u;
    {
        const bool branch_taken_0x1f1fb4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F1FB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F1FB4u;
        // 0x1f1fb8: 0xa4450000  sh          $a1, 0x0($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f1fb4) {
            ctx->pc = 0x1F1F88u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1f1f88;
        }
    }
    ctx->pc = 0x1F1FBCu;
    // 0x1f1fbc: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1F1FBCu;
    {
        const bool branch_taken_0x1f1fbc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F1FC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F1FBCu;
        // 0x1f1fc0: 0x28e30000  slti        $v1, $a3, 0x0 (Delay Slot)
        SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)0) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f1fbc) {
            ctx->pc = 0x1F1FCCu;
            goto label_1f1fcc;
        }
    }
    ctx->pc = 0x1F1FC4u;
    // 0x1f1fc4: 0x0  nop
    ctx->pc = 0x1f1fc4u;
    // NOP
label_1f1fc8:
    // 0x1f1fc8: 0x28e30000  slti        $v1, $a3, 0x0
    ctx->pc = 0x1f1fc8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)0) ? 1 : 0);
label_1f1fcc:
    // 0x1f1fcc: 0x24e4003f  addiu       $a0, $a3, 0x3F
    ctx->pc = 0x1f1fccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), 63));
    // 0x1f1fd0: 0xe0102d  daddu       $v0, $a3, $zero
    ctx->pc = 0x1f1fd0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f1fd4: 0x96a50038  lhu         $a1, 0x38($s5)
    ctx->pc = 0x1f1fd4u;
    SET_GPR_U32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 21), 56)));
    // 0x1f1fd8: 0x83100b  movn        $v0, $a0, $v1
    ctx->pc = 0x1f1fd8u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 4));
    // 0x1f1fdc: 0x24183  sra         $t0, $v0, 6
    ctx->pc = 0x1f1fdcu;
    SET_GPR_S32(ctx, 8, SRA32(GPR_S32(ctx, 2), 6));
    // 0x1f1fe0: 0x81980  sll         $v1, $t0, 6
    ctx->pc = 0x1f1fe0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 8), 6));
    // 0x1f1fe4: 0xe34023  subu        $t0, $a3, $v1
    ctx->pc = 0x1f1fe4u;
    SET_GPR_S32(ctx, 8, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 3)));
    // 0x1f1fe8: 0x84880  sll         $t1, $t0, 2
    ctx->pc = 0x1f1fe8u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 8), 2));
    // 0x1f1fec: 0x1311021  addu        $v0, $t1, $s1
    ctx->pc = 0x1f1fecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 17)));
    // 0x1f1ff0: 0x12800003  beqz        $s4, . + 4 + (0x3 << 2)
    ctx->pc = 0x1F1FF0u;
    {
        const bool branch_taken_0x1f1ff0 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F1FF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F1FF0u;
        // 0x1f1ff4: 0xa4450000  sh          $a1, 0x0($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f1ff0) {
            ctx->pc = 0x1F2000u;
            goto label_1f2000;
        }
    }
    ctx->pc = 0x1F1FF8u;
    // 0x1f1ff8: 0x10000023  b           . + 4 + (0x23 << 2)
    ctx->pc = 0x1F1FF8u;
    {
        const bool branch_taken_0x1f1ff8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F1FFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F1FF8u;
        // 0x1f1ffc: 0xa4400002  sh          $zero, 0x2($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 2), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f1ff8) {
            ctx->pc = 0x1F2088u;
            goto label_1f2088;
        }
    }
    ctx->pc = 0x1F2000u;
label_1f2000:
    // 0x1f2000: 0x14e0000d  bnez        $a3, . + 4 + (0xD << 2)
    ctx->pc = 0x1F2000u;
    {
        const bool branch_taken_0x1f2000 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F2004u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F2000u;
        // 0x1f2004: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f2000) {
            ctx->pc = 0x1F2038u;
            goto label_1f2038;
        }
    }
    ctx->pc = 0x1F2008u;
    // 0x1f2008: 0x86230002  lh          $v1, 0x2($s1)
    ctx->pc = 0x1f2008u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 2)));
    // 0x1f200c: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1f200cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1f2010: 0x5462000b  bnel        $v1, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x1F2010u;
    {
        const bool branch_taken_0x1f2010 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1f2010) {
            ctx->pc = 0x1F2014u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F2010u;
            // 0x1f2014: 0x2407ffff  addiu       $a3, $zero, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F2040u;
            goto label_1f2040;
        }
    }
    ctx->pc = 0x1F2018u;
    // 0x1f2018: 0x1000001b  b           . + 4 + (0x1B << 2)
    ctx->pc = 0x1F2018u;
    {
        const bool branch_taken_0x1f2018 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F201Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F2018u;
        // 0x1f201c: 0xa6200002  sh          $zero, 0x2($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 2), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f2018) {
            ctx->pc = 0x1F2088u;
            goto label_1f2088;
        }
    }
    ctx->pc = 0x1F2020u;
label_1f2020:
    // 0x1f2020: 0x94420002  lhu         $v0, 0x2($v0)
    ctx->pc = 0x1f2020u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 2)));
    // 0x1f2024: 0x1311821  addu        $v1, $t1, $s1
    ctx->pc = 0x1f2024u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 17)));
    // 0x1f2028: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x1f2028u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x1f202c: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x1F202Cu;
    {
        const bool branch_taken_0x1f202c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F2030u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F202Cu;
        // 0x1f2030: 0xa4620002  sh          $v0, 0x2($v1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 3), 2), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f202c) {
            ctx->pc = 0x1F2088u;
            goto label_1f2088;
        }
    }
    ctx->pc = 0x1F2034u;
    // 0x1f2034: 0x0  nop
    ctx->pc = 0x1f2034u;
    // NOP
label_1f2038:
    // 0x1f2038: 0x2407ffff  addiu       $a3, $zero, -0x1
    ctx->pc = 0x1f2038u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1f203c: 0x0  nop
    ctx->pc = 0x1f203cu;
    // NOP
label_1f2040:
    // 0x1f2040: 0x1061823  subu        $v1, $t0, $a2
    ctx->pc = 0x1f2040u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 8), GPR_U32(ctx, 6)));
label_1f2044:
    // 0x1f2044: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x1f2044u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x1f2048: 0x2465003f  addiu       $a1, $v1, 0x3F
    ctx->pc = 0x1f2048u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 63));
    // 0x1f204c: 0x2463007e  addiu       $v1, $v1, 0x7E
    ctx->pc = 0x1f204cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 126));
    // 0x1f2050: 0x28a40000  slti        $a0, $a1, 0x0
    ctx->pc = 0x1f2050u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x1f2054: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x1f2054u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f2058: 0x64100b  movn        $v0, $v1, $a0
    ctx->pc = 0x1f2058u;
    if (GPR_U64(ctx, 4) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 3));
    // 0x1f205c: 0x28c40040  slti        $a0, $a2, 0x40
    ctx->pc = 0x1f205cu;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)64) ? 1 : 0);
    // 0x1f2060: 0x21183  sra         $v0, $v0, 6
    ctx->pc = 0x1f2060u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 6));
    // 0x1f2064: 0x21980  sll         $v1, $v0, 6
    ctx->pc = 0x1f2064u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
    // 0x1f2068: 0xa31023  subu        $v0, $a1, $v1
    ctx->pc = 0x1f2068u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x1f206c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1f206cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1f2070: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x1f2070u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x1f2074: 0x84430000  lh          $v1, 0x0($v0)
    ctx->pc = 0x1f2074u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1f2078: 0x1467ffe9  bne         $v1, $a3, . + 4 + (-0x17 << 2)
    ctx->pc = 0x1F2078u;
    {
        const bool branch_taken_0x1f2078 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 7));
        ctx->pc = 0x1F207Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F2078u;
        // 0x1f207c: 0x94450000  lhu         $a1, 0x0($v0) (Delay Slot)
        SET_GPR_U32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f2078) {
            ctx->pc = 0x1F2020u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1f2020;
        }
    }
    ctx->pc = 0x1F2080u;
    // 0x1f2080: 0x1480fff0  bnez        $a0, . + 4 + (-0x10 << 2)
    ctx->pc = 0x1F2080u;
    {
        const bool branch_taken_0x1f2080 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F2084u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F2080u;
        // 0x1f2084: 0x1061823  subu        $v1, $t0, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 8), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f2080) {
            ctx->pc = 0x1F2044u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1f2044;
        }
    }
    ctx->pc = 0x1F2088u;
label_1f2088:
    // 0x1f2088: 0x1312821  addu        $a1, $t1, $s1
    ctx->pc = 0x1f2088u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 17)));
    // 0x1f208c: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x1f208cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1f2090: 0x94a20002  lhu         $v0, 0x2($a1)
    ctx->pc = 0x1f2090u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 2)));
    // 0x1f2094: 0x15430022  bne         $t2, $v1, . + 4 + (0x22 << 2)
    ctx->pc = 0x1F2094u;
    {
        const bool branch_taken_0x1f2094 = (GPR_U64(ctx, 10) != GPR_U64(ctx, 3));
        ctx->pc = 0x1F2098u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F2094u;
        // 0x1f2098: 0xa6a2003a  sh          $v0, 0x3A($s5) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 21), 58), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f2094) {
            ctx->pc = 0x1F2120u;
            goto label_1f2120;
        }
    }
    ctx->pc = 0x1F209Cu;
    // 0x1f209c: 0x84a20000  lh          $v0, 0x0($a1)
    ctx->pc = 0x1f209cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1f20a0: 0x1040001f  beqz        $v0, . + 4 + (0x1F << 2)
    ctx->pc = 0x1F20A0u;
    {
        const bool branch_taken_0x1f20a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F20A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F20A0u;
        // 0x1f20a4: 0x94a30000  lhu         $v1, 0x0($a1) (Delay Slot)
        SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f20a0) {
            ctx->pc = 0x1F2120u;
            goto label_1f2120;
        }
    }
    ctx->pc = 0x1F20A8u;
    // 0x1f20a8: 0x8e690164  lw          $t1, 0x164($s3)
    ctx->pc = 0x1f20a8u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 356)));
    // 0x1f20ac: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1f20acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f20b0: 0x94a70002  lhu         $a3, 0x2($a1)
    ctx->pc = 0x1f20b0u;
    SET_GPR_U32(ctx, 7, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 2)));
    // 0x1f20b4: 0x8d260070  lw          $a2, 0x70($t1)
    ctx->pc = 0x1f20b4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 112)));
    // 0x1f20b8: 0x120282d  daddu       $a1, $t1, $zero
    ctx->pc = 0x1f20b8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f20bc: 0x673821  addu        $a3, $v1, $a3
    ctx->pc = 0x1f20bcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x1f20c0: 0x24c8003f  addiu       $t0, $a2, 0x3F
    ctx->pc = 0x1f20c0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 6), 63));
    // 0x1f20c4: 0xc0102d  daddu       $v0, $a2, $zero
    ctx->pc = 0x1f20c4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f20c8: 0x28c30000  slti        $v1, $a2, 0x0
    ctx->pc = 0x1f20c8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x1f20cc: 0x103100b  movn        $v0, $t0, $v1
    ctx->pc = 0x1f20ccu;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 8));
    // 0x1f20d0: 0x21183  sra         $v0, $v0, 6
    ctx->pc = 0x1f20d0u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 6));
    // 0x1f20d4: 0x21980  sll         $v1, $v0, 6
    ctx->pc = 0x1f20d4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
    // 0x1f20d8: 0xc31023  subu        $v0, $a2, $v1
    ctx->pc = 0x1f20d8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x1f20dc: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1f20dcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1f20e0: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x1f20e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x1f20e4: 0xa4470002  sh          $a3, 0x2($v0)
    ctx->pc = 0x1f20e4u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 2), (uint16_t)GPR_U32(ctx, 7));
    // 0x1f20e8: 0xc07c852  jal         func_1F2148
    ctx->pc = 0x1F20E8u;
    SET_GPR_U32(ctx, 31, 0x1F20F0u);
    ctx->pc = 0x1F20ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F20E8u;
    // 0x1f20ec: 0xa527002e  sh          $a3, 0x2E($t1) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 9), 46), (uint16_t)GPR_U32(ctx, 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F2148u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F2148u, 0x1F20E8u, 0x1F20F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F20F0u;
label_1f20f0:
    // 0x1f20f0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1f20f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f20f4: 0x8e650164  lw          $a1, 0x164($s3)
    ctx->pc = 0x1f20f4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 356)));
    // 0x1f20f8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1f20f8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1f20fc: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1f20fcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1f2100: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1f2100u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1f2104: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1f2104u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1f2108: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x1f2108u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1f210c: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x1f210cu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1f2110: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x1f2110u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1f2114: 0x807cf56  j           func_1F3D58
    ctx->pc = 0x1F2114u;
    ctx->pc = 0x1F2118u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F2114u;
    // 0x1f2118: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F3D58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F3D58u, 0x1F2114u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x1F211Cu;
    // 0x1f211c: 0x0  nop
    ctx->pc = 0x1f211cu;
    // NOP
label_1f2120:
    // 0x1f2120: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1f2120u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1f2124: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1f2124u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1f2128: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1f2128u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1f212c: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1f212cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1f2130: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x1f2130u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1f2134: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x1f2134u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1f2138: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x1f2138u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1f213c: 0x3e00008  jr          $ra
    ctx->pc = 0x1F213Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F2140u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F213Cu;
        // 0x1f2140: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F213Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F2144u;
    // 0x1f2144: 0x0  nop
    ctx->pc = 0x1f2144u;
    // NOP
}
