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

// Function: sub_001D0F38
// Address: 0x1d0f38 - 0x1d1710
void sub_001D0F38_0x1d0f38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001D0F38_0x1d0f38");
#endif

    switch (ctx->pc) {
        case 0x1d0facu: goto label_1d0fac;
        case 0x1d1570u: goto label_1d1570;
        case 0x1d1620u: goto label_1d1620;
        case 0x1d164cu: goto label_1d164c;
        case 0x1d1654u: goto label_1d1654;
        default: break;
    }

    ctx->pc = 0x1d0f38u;

    // 0x1d0f38: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1d0f38u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1d0f3c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1d0f3cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d0f40: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1d0f40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1d0f44: 0x24920180  addiu       $s2, $a0, 0x180
    ctx->pc = 0x1d0f44u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 4), 384));
    // 0x1d0f48: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x1d0f48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x1d0f4c: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x1d0f4cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d0f50: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1d0f50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1d0f54: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1d0f54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1d0f58: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1d0f58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1d0f5c: 0xae430420  sw          $v1, 0x420($s2)
    ctx->pc = 0x1d0f5cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 1056), GPR_U32(ctx, 3));
    // 0x1d0f60: 0x8e42042c  lw          $v0, 0x42C($s2)
    ctx->pc = 0x1d0f60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1068)));
    // 0x1d0f64: 0x8e440308  lw          $a0, 0x308($s2)
    ctx->pc = 0x1d0f64u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 776)));
    // 0x1d0f68: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1d0f68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1d0f6c: 0xae4004a4  sw          $zero, 0x4A4($s2)
    ctx->pc = 0x1d0f6cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 1188), GPR_U32(ctx, 0));
    // 0x1d0f70: 0xae42042c  sw          $v0, 0x42C($s2)
    ctx->pc = 0x1d0f70u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 1068), GPR_U32(ctx, 2));
    // 0x1d0f74: 0xae4004a8  sw          $zero, 0x4A8($s2)
    ctx->pc = 0x1d0f74u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 1192), GPR_U32(ctx, 0));
    // 0x1d0f78: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1D0F78u;
    {
        const bool branch_taken_0x1d0f78 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D0F7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D0F78u;
        // 0x1d0f7c: 0xae4004ac  sw          $zero, 0x4AC($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 1196), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d0f78) {
            ctx->pc = 0x1D0F8Cu;
            goto label_1d0f8c;
        }
    }
    ctx->pc = 0x1D0F80u;
    // 0x1d0f80: 0x24020040  addiu       $v0, $zero, 0x40
    ctx->pc = 0x1d0f80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x1d0f84: 0x54820005  bnel        $a0, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1D0F84u;
    {
        const bool branch_taken_0x1d0f84 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x1d0f84) {
            ctx->pc = 0x1D0F88u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1D0F84u;
            // 0x1d0f88: 0x8e420494  lw          $v0, 0x494($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1172)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1D0F9Cu;
            goto label_1d0f9c;
        }
    }
    ctx->pc = 0x1D0F8Cu;
label_1d0f8c:
    // 0x1d0f8c: 0x8e42030c  lw          $v0, 0x30C($s2)
    ctx->pc = 0x1d0f8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 780)));
    // 0x1d0f90: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1D0F90u;
    {
        const bool branch_taken_0x1d0f90 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d0f90) {
            ctx->pc = 0x1D0FA4u;
            goto label_1d0fa4;
        }
    }
    ctx->pc = 0x1D0F98u;
    // 0x1d0f98: 0x8e420494  lw          $v0, 0x494($s2)
    ctx->pc = 0x1d0f98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1172)));
label_1d0f9c:
    // 0x1d0f9c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1d0f9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1d0fa0: 0xae420494  sw          $v0, 0x494($s2)
    ctx->pc = 0x1d0fa0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 1172), GPR_U32(ctx, 2));
label_1d0fa4:
    // 0x1d0fa4: 0xc07436e  jal         func_1D0DB8
    ctx->pc = 0x1D0FA4u;
    SET_GPR_U32(ctx, 31, 0x1D0FACu);
    ctx->pc = 0x1D0FA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D0FA4u;
    // 0x1d0fa8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D0DB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D0DB8u, 0x1D0FA4u, 0x1D0FACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D0FACu;
label_1d0fac:
    // 0x1d0fac: 0x2402fffc  addiu       $v0, $zero, -0x4
    ctx->pc = 0x1d0facu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
    // 0x1d0fb0: 0x2628024  and         $s0, $s3, $v0
    ctx->pc = 0x1d0fb0u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 19) & GPR_U64(ctx, 2));
    // 0x1d0fb4: 0x2701823  subu        $v1, $s3, $s0
    ctx->pc = 0x1d0fb4u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 19), GPR_U32(ctx, 16)));
    // 0x1d0fb8: 0x82080000  lb          $t0, 0x0($s0)
    ctx->pc = 0x1d0fb8u;
    SET_GPR_S32(ctx, 8, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1d0fbc: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1d0fbcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x1d0fc0: 0x388c0  sll         $s1, $v1, 3
    ctx->pc = 0x1d0fc0u;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x1d0fc4: 0x92040000  lbu         $a0, 0x0($s0)
    ctx->pc = 0x1d0fc4u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1d0fc8: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1d0fc8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x1d0fcc: 0x92050000  lbu         $a1, 0x0($s0)
    ctx->pc = 0x1d0fccu;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1d0fd0: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1d0fd0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x1d0fd4: 0x92060000  lbu         $a2, 0x0($s0)
    ctx->pc = 0x1d0fd4u;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1d0fd8: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1d0fd8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x1d0fdc: 0x82070000  lb          $a3, 0x0($s0)
    ctx->pc = 0x1d0fdcu;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1d0fe0: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1d0fe0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x1d0fe4: 0x92020000  lbu         $v0, 0x0($s0)
    ctx->pc = 0x1d0fe4u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1d0fe8: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1d0fe8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x1d0fec: 0x84200  sll         $t0, $t0, 8
    ctx->pc = 0x1d0fecu;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 8));
    // 0x1d0ff0: 0x73a00  sll         $a3, $a3, 8
    ctx->pc = 0x1d0ff0u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 8));
    // 0x1d0ff4: 0x1044025  or          $t0, $t0, $a0
    ctx->pc = 0x1d0ff4u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | GPR_U64(ctx, 4));
    // 0x1d0ff8: 0xe23825  or          $a3, $a3, $v0
    ctx->pc = 0x1d0ff8u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 2));
    // 0x1d0ffc: 0x92030000  lbu         $v1, 0x0($s0)
    ctx->pc = 0x1d0ffcu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1d1000: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1d1000u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x1d1004: 0x84200  sll         $t0, $t0, 8
    ctx->pc = 0x1d1004u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 8));
    // 0x1d1008: 0x73a00  sll         $a3, $a3, 8
    ctx->pc = 0x1d1008u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 8));
    // 0x1d100c: 0x1054025  or          $t0, $t0, $a1
    ctx->pc = 0x1d100cu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | GPR_U64(ctx, 5));
    // 0x1d1010: 0x92020000  lbu         $v0, 0x0($s0)
    ctx->pc = 0x1d1010u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1d1014: 0xe33825  or          $a3, $a3, $v1
    ctx->pc = 0x1d1014u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 3));
    // 0x1d1018: 0x84200  sll         $t0, $t0, 8
    ctx->pc = 0x1d1018u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 8));
    // 0x1d101c: 0x73a00  sll         $a3, $a3, 8
    ctx->pc = 0x1d101cu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 8));
    // 0x1d1020: 0x1064025  or          $t0, $t0, $a2
    ctx->pc = 0x1d1020u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | GPR_U64(ctx, 6));
    // 0x1d1024: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1d1024u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x1d1028: 0xe23825  or          $a3, $a3, $v0
    ctx->pc = 0x1d1028u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 2));
    // 0x1d102c: 0x12200008  beqz        $s1, . + 4 + (0x8 << 2)
    ctx->pc = 0x1D102Cu;
    {
        const bool branch_taken_0x1d102c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D1030u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D102Cu;
        // 0x1d1030: 0x2284004  sllv        $t0, $t0, $s1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), GPR_U32(ctx, 17) & 0x1F));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d102c) {
            ctx->pc = 0x1D1050u;
            goto label_1d1050;
        }
    }
    ctx->pc = 0x1D1034u;
    // 0x1d1034: 0x111023  negu        $v0, $s1
    ctx->pc = 0x1d1034u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 17)));
    // 0x1d1038: 0x471006  srlv        $v0, $a3, $v0
    ctx->pc = 0x1d1038u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 7), GPR_U32(ctx, 2) & 0x1F));
    // 0x1d103c: 0x1021025  or          $v0, $t0, $v0
    ctx->pc = 0x1d103cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 8) | GPR_U64(ctx, 2));
    // 0x1d1040: 0x2274004  sllv        $t0, $a3, $s1
    ctx->pc = 0x1d1040u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 7), GPR_U32(ctx, 17) & 0x1F));
    // 0x1d1044: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1D1044u;
    {
        const bool branch_taken_0x1d1044 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D1048u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D1044u;
        // 0x1d1048: 0xae420000  sw          $v0, 0x0($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d1044) {
            ctx->pc = 0x1D1058u;
            goto label_1d1058;
        }
    }
    ctx->pc = 0x1D104Cu;
    // 0x1d104c: 0x0  nop
    ctx->pc = 0x1d104cu;
    // NOP
label_1d1050:
    // 0x1d1050: 0xae480000  sw          $t0, 0x0($s2)
    ctx->pc = 0x1d1050u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 8));
    // 0x1d1054: 0xe0402d  daddu       $t0, $a3, $zero
    ctx->pc = 0x1d1054u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_1d1058:
    // 0x1d1058: 0x82070000  lb          $a3, 0x0($s0)
    ctx->pc = 0x1d1058u;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1d105c: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1d105cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x1d1060: 0x92020000  lbu         $v0, 0x0($s0)
    ctx->pc = 0x1d1060u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1d1064: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1d1064u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x1d1068: 0x73a00  sll         $a3, $a3, 8
    ctx->pc = 0x1d1068u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 8));
    // 0x1d106c: 0x92030000  lbu         $v1, 0x0($s0)
    ctx->pc = 0x1d106cu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1d1070: 0xe23825  or          $a3, $a3, $v0
    ctx->pc = 0x1d1070u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 2));
    // 0x1d1074: 0x2a220014  slti        $v0, $s1, 0x14
    ctx->pc = 0x1d1074u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)20) ? 1 : 0);
    // 0x1d1078: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1d1078u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x1d107c: 0x73a00  sll         $a3, $a3, 8
    ctx->pc = 0x1d107cu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 8));
    // 0x1d1080: 0x92040000  lbu         $a0, 0x0($s0)
    ctx->pc = 0x1d1080u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1d1084: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1d1084u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x1d1088: 0xe33825  or          $a3, $a3, $v1
    ctx->pc = 0x1d1088u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 3));
    // 0x1d108c: 0x73a00  sll         $a3, $a3, 8
    ctx->pc = 0x1d108cu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 8));
    // 0x1d1090: 0x1440001d  bnez        $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x1D1090u;
    {
        const bool branch_taken_0x1d1090 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D1094u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D1090u;
        // 0x1d1094: 0xe43825  or          $a3, $a3, $a0 (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d1090) {
            ctx->pc = 0x1D1108u;
            goto label_1d1108;
        }
    }
    ctx->pc = 0x1D1098u;
    // 0x1d1098: 0x2631ffec  addiu       $s1, $s1, -0x14
    ctx->pc = 0x1d1098u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967276));
    // 0x1d109c: 0x12200008  beqz        $s1, . + 4 + (0x8 << 2)
    ctx->pc = 0x1D109Cu;
    {
        const bool branch_taken_0x1d109c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D10A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D109Cu;
        // 0x1d10a0: 0x2402000c  addiu       $v0, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d109c) {
            ctx->pc = 0x1D10C0u;
            goto label_1d10c0;
        }
    }
    ctx->pc = 0x1D10A4u;
    // 0x1d10a4: 0x511023  subu        $v0, $v0, $s1
    ctx->pc = 0x1d10a4u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x1d10a8: 0x471006  srlv        $v0, $a3, $v0
    ctx->pc = 0x1d10a8u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 7), GPR_U32(ctx, 2) & 0x1F));
    // 0x1d10ac: 0x1024025  or          $t0, $t0, $v0
    ctx->pc = 0x1d10acu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | GPR_U64(ctx, 2));
    // 0x1d10b0: 0x81d02  srl         $v1, $t0, 20
    ctx->pc = 0x1d10b0u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 8), 20));
    // 0x1d10b4: 0x2274004  sllv        $t0, $a3, $s1
    ctx->pc = 0x1d10b4u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 7), GPR_U32(ctx, 17) & 0x1F));
    // 0x1d10b8: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1D10B8u;
    {
        const bool branch_taken_0x1d10b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D10BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D10B8u;
        // 0x1d10bc: 0xae430004  sw          $v1, 0x4($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d10b8) {
            ctx->pc = 0x1D10CCu;
            goto label_1d10cc;
        }
    }
    ctx->pc = 0x1D10C0u;
label_1d10c0:
    // 0x1d10c0: 0x81502  srl         $v0, $t0, 20
    ctx->pc = 0x1d10c0u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 8), 20));
    // 0x1d10c4: 0xe0402d  daddu       $t0, $a3, $zero
    ctx->pc = 0x1d10c4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d10c8: 0xae420004  sw          $v0, 0x4($s2)
    ctx->pc = 0x1d10c8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 2));
label_1d10cc:
    // 0x1d10cc: 0x82070000  lb          $a3, 0x0($s0)
    ctx->pc = 0x1d10ccu;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1d10d0: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1d10d0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x1d10d4: 0x92020000  lbu         $v0, 0x0($s0)
    ctx->pc = 0x1d10d4u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1d10d8: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1d10d8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x1d10dc: 0x73a00  sll         $a3, $a3, 8
    ctx->pc = 0x1d10dcu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 8));
    // 0x1d10e0: 0x92030000  lbu         $v1, 0x0($s0)
    ctx->pc = 0x1d10e0u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1d10e4: 0xe23825  or          $a3, $a3, $v0
    ctx->pc = 0x1d10e4u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 2));
    // 0x1d10e8: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1d10e8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x1d10ec: 0x73a00  sll         $a3, $a3, 8
    ctx->pc = 0x1d10ecu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 8));
    // 0x1d10f0: 0x92020000  lbu         $v0, 0x0($s0)
    ctx->pc = 0x1d10f0u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1d10f4: 0xe33825  or          $a3, $a3, $v1
    ctx->pc = 0x1d10f4u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 3));
    // 0x1d10f8: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1d10f8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x1d10fc: 0x73a00  sll         $a3, $a3, 8
    ctx->pc = 0x1d10fcu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 8));
    // 0x1d1100: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x1D1100u;
    {
        const bool branch_taken_0x1d1100 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D1104u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D1100u;
        // 0x1d1104: 0xe23825  or          $a3, $a3, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d1100) {
            ctx->pc = 0x1D1118u;
            goto label_1d1118;
        }
    }
    ctx->pc = 0x1D1108u;
label_1d1108:
    // 0x1d1108: 0x81502  srl         $v0, $t0, 20
    ctx->pc = 0x1d1108u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 8), 20));
    // 0x1d110c: 0x84300  sll         $t0, $t0, 12
    ctx->pc = 0x1d110cu;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 12));
    // 0x1d1110: 0xae420004  sw          $v0, 0x4($s2)
    ctx->pc = 0x1d1110u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 2));
    // 0x1d1114: 0x2631000c  addiu       $s1, $s1, 0xC
    ctx->pc = 0x1d1114u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 12));
label_1d1118:
    // 0x1d1118: 0x2a220014  slti        $v0, $s1, 0x14
    ctx->pc = 0x1d1118u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)20) ? 1 : 0);
    // 0x1d111c: 0x1440001e  bnez        $v0, . + 4 + (0x1E << 2)
    ctx->pc = 0x1D111Cu;
    {
        const bool branch_taken_0x1d111c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D1120u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D111Cu;
        // 0x1d1120: 0x81502  srl         $v0, $t0, 20 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 8), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d111c) {
            ctx->pc = 0x1D1198u;
            goto label_1d1198;
        }
    }
    ctx->pc = 0x1D1124u;
    // 0x1d1124: 0x2631ffec  addiu       $s1, $s1, -0x14
    ctx->pc = 0x1d1124u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967276));
    // 0x1d1128: 0x12200009  beqz        $s1, . + 4 + (0x9 << 2)
    ctx->pc = 0x1D1128u;
    {
        const bool branch_taken_0x1d1128 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D112Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D1128u;
        // 0x1d112c: 0x2402000c  addiu       $v0, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d1128) {
            ctx->pc = 0x1D1150u;
            goto label_1d1150;
        }
    }
    ctx->pc = 0x1D1130u;
    // 0x1d1130: 0x511023  subu        $v0, $v0, $s1
    ctx->pc = 0x1d1130u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x1d1134: 0x471006  srlv        $v0, $a3, $v0
    ctx->pc = 0x1d1134u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 7), GPR_U32(ctx, 2) & 0x1F));
    // 0x1d1138: 0x1024025  or          $t0, $t0, $v0
    ctx->pc = 0x1d1138u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | GPR_U64(ctx, 2));
    // 0x1d113c: 0x81d02  srl         $v1, $t0, 20
    ctx->pc = 0x1d113cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 8), 20));
    // 0x1d1140: 0x2274004  sllv        $t0, $a3, $s1
    ctx->pc = 0x1d1140u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 7), GPR_U32(ctx, 17) & 0x1F));
    // 0x1d1144: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x1D1144u;
    {
        const bool branch_taken_0x1d1144 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D1148u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D1144u;
        // 0x1d1148: 0xae430008  sw          $v1, 0x8($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d1144) {
            ctx->pc = 0x1D115Cu;
            goto label_1d115c;
        }
    }
    ctx->pc = 0x1D114Cu;
    // 0x1d114c: 0x0  nop
    ctx->pc = 0x1d114cu;
    // NOP
label_1d1150:
    // 0x1d1150: 0x81502  srl         $v0, $t0, 20
    ctx->pc = 0x1d1150u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 8), 20));
    // 0x1d1154: 0xe0402d  daddu       $t0, $a3, $zero
    ctx->pc = 0x1d1154u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d1158: 0xae420008  sw          $v0, 0x8($s2)
    ctx->pc = 0x1d1158u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 2));
label_1d115c:
    // 0x1d115c: 0x82070000  lb          $a3, 0x0($s0)
    ctx->pc = 0x1d115cu;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1d1160: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1d1160u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x1d1164: 0x92020000  lbu         $v0, 0x0($s0)
    ctx->pc = 0x1d1164u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1d1168: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1d1168u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x1d116c: 0x73a00  sll         $a3, $a3, 8
    ctx->pc = 0x1d116cu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 8));
    // 0x1d1170: 0x92030000  lbu         $v1, 0x0($s0)
    ctx->pc = 0x1d1170u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1d1174: 0xe23825  or          $a3, $a3, $v0
    ctx->pc = 0x1d1174u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 2));
    // 0x1d1178: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1d1178u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x1d117c: 0x73a00  sll         $a3, $a3, 8
    ctx->pc = 0x1d117cu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 8));
    // 0x1d1180: 0x92020000  lbu         $v0, 0x0($s0)
    ctx->pc = 0x1d1180u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1d1184: 0xe33825  or          $a3, $a3, $v1
    ctx->pc = 0x1d1184u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 3));
    // 0x1d1188: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1d1188u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x1d118c: 0x73a00  sll         $a3, $a3, 8
    ctx->pc = 0x1d118cu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 8));
    // 0x1d1190: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1D1190u;
    {
        const bool branch_taken_0x1d1190 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D1194u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D1190u;
        // 0x1d1194: 0xe23825  or          $a3, $a3, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d1190) {
            ctx->pc = 0x1D11A4u;
            goto label_1d11a4;
        }
    }
    ctx->pc = 0x1D1198u;
label_1d1198:
    // 0x1d1198: 0x84300  sll         $t0, $t0, 12
    ctx->pc = 0x1d1198u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 12));
    // 0x1d119c: 0xae420008  sw          $v0, 0x8($s2)
    ctx->pc = 0x1d119cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 2));
    // 0x1d11a0: 0x2631000c  addiu       $s1, $s1, 0xC
    ctx->pc = 0x1d11a0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 12));
label_1d11a4:
    // 0x1d11a4: 0x2a22001c  slti        $v0, $s1, 0x1C
    ctx->pc = 0x1d11a4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)28) ? 1 : 0);
    // 0x1d11a8: 0x1440001d  bnez        $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x1D11A8u;
    {
        const bool branch_taken_0x1d11a8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D11ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D11A8u;
        // 0x1d11ac: 0x81702  srl         $v0, $t0, 28 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 8), 28));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d11a8) {
            ctx->pc = 0x1D1220u;
            goto label_1d1220;
        }
    }
    ctx->pc = 0x1D11B0u;
    // 0x1d11b0: 0x2631ffe4  addiu       $s1, $s1, -0x1C
    ctx->pc = 0x1d11b0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967268));
    // 0x1d11b4: 0x12200008  beqz        $s1, . + 4 + (0x8 << 2)
    ctx->pc = 0x1D11B4u;
    {
        const bool branch_taken_0x1d11b4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D11B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D11B4u;
        // 0x1d11b8: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d11b4) {
            ctx->pc = 0x1D11D8u;
            goto label_1d11d8;
        }
    }
    ctx->pc = 0x1D11BCu;
    // 0x1d11bc: 0x511023  subu        $v0, $v0, $s1
    ctx->pc = 0x1d11bcu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x1d11c0: 0x471006  srlv        $v0, $a3, $v0
    ctx->pc = 0x1d11c0u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 7), GPR_U32(ctx, 2) & 0x1F));
    // 0x1d11c4: 0x1024025  or          $t0, $t0, $v0
    ctx->pc = 0x1d11c4u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | GPR_U64(ctx, 2));
    // 0x1d11c8: 0x81f02  srl         $v1, $t0, 28
    ctx->pc = 0x1d11c8u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 8), 28));
    // 0x1d11cc: 0x2274004  sllv        $t0, $a3, $s1
    ctx->pc = 0x1d11ccu;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 7), GPR_U32(ctx, 17) & 0x1F));
    // 0x1d11d0: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1D11D0u;
    {
        const bool branch_taken_0x1d11d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D11D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D11D0u;
        // 0x1d11d4: 0xae43000c  sw          $v1, 0xC($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 12), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d11d0) {
            ctx->pc = 0x1D11E4u;
            goto label_1d11e4;
        }
    }
    ctx->pc = 0x1D11D8u;
label_1d11d8:
    // 0x1d11d8: 0x81702  srl         $v0, $t0, 28
    ctx->pc = 0x1d11d8u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 8), 28));
    // 0x1d11dc: 0xe0402d  daddu       $t0, $a3, $zero
    ctx->pc = 0x1d11dcu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d11e0: 0xae42000c  sw          $v0, 0xC($s2)
    ctx->pc = 0x1d11e0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 12), GPR_U32(ctx, 2));
label_1d11e4:
    // 0x1d11e4: 0x82070000  lb          $a3, 0x0($s0)
    ctx->pc = 0x1d11e4u;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1d11e8: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1d11e8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x1d11ec: 0x92020000  lbu         $v0, 0x0($s0)
    ctx->pc = 0x1d11ecu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1d11f0: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1d11f0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x1d11f4: 0x73a00  sll         $a3, $a3, 8
    ctx->pc = 0x1d11f4u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 8));
    // 0x1d11f8: 0x92030000  lbu         $v1, 0x0($s0)
    ctx->pc = 0x1d11f8u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1d11fc: 0xe23825  or          $a3, $a3, $v0
    ctx->pc = 0x1d11fcu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 2));
    // 0x1d1200: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1d1200u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x1d1204: 0x73a00  sll         $a3, $a3, 8
    ctx->pc = 0x1d1204u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 8));
    // 0x1d1208: 0x92020000  lbu         $v0, 0x0($s0)
    ctx->pc = 0x1d1208u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1d120c: 0xe33825  or          $a3, $a3, $v1
    ctx->pc = 0x1d120cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 3));
    // 0x1d1210: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1d1210u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x1d1214: 0x73a00  sll         $a3, $a3, 8
    ctx->pc = 0x1d1214u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 8));
    // 0x1d1218: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1D1218u;
    {
        const bool branch_taken_0x1d1218 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D121Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D1218u;
        // 0x1d121c: 0xe23825  or          $a3, $a3, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d1218) {
            ctx->pc = 0x1D122Cu;
            goto label_1d122c;
        }
    }
    ctx->pc = 0x1D1220u;
label_1d1220:
    // 0x1d1220: 0x84100  sll         $t0, $t0, 4
    ctx->pc = 0x1d1220u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 4));
    // 0x1d1224: 0xae42000c  sw          $v0, 0xC($s2)
    ctx->pc = 0x1d1224u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 12), GPR_U32(ctx, 2));
    // 0x1d1228: 0x26310004  addiu       $s1, $s1, 0x4
    ctx->pc = 0x1d1228u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
label_1d122c:
    // 0x1d122c: 0x2a22001c  slti        $v0, $s1, 0x1C
    ctx->pc = 0x1d122cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)28) ? 1 : 0);
    // 0x1d1230: 0x1440001d  bnez        $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x1D1230u;
    {
        const bool branch_taken_0x1d1230 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D1234u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D1230u;
        // 0x1d1234: 0x81702  srl         $v0, $t0, 28 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 8), 28));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d1230) {
            ctx->pc = 0x1D12A8u;
            goto label_1d12a8;
        }
    }
    ctx->pc = 0x1D1238u;
    // 0x1d1238: 0x2631ffe4  addiu       $s1, $s1, -0x1C
    ctx->pc = 0x1d1238u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967268));
    // 0x1d123c: 0x12200008  beqz        $s1, . + 4 + (0x8 << 2)
    ctx->pc = 0x1D123Cu;
    {
        const bool branch_taken_0x1d123c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D1240u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D123Cu;
        // 0x1d1240: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d123c) {
            ctx->pc = 0x1D1260u;
            goto label_1d1260;
        }
    }
    ctx->pc = 0x1D1244u;
    // 0x1d1244: 0x511023  subu        $v0, $v0, $s1
    ctx->pc = 0x1d1244u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x1d1248: 0x471006  srlv        $v0, $a3, $v0
    ctx->pc = 0x1d1248u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 7), GPR_U32(ctx, 2) & 0x1F));
    // 0x1d124c: 0x1024025  or          $t0, $t0, $v0
    ctx->pc = 0x1d124cu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | GPR_U64(ctx, 2));
    // 0x1d1250: 0x81f02  srl         $v1, $t0, 28
    ctx->pc = 0x1d1250u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 8), 28));
    // 0x1d1254: 0x2274004  sllv        $t0, $a3, $s1
    ctx->pc = 0x1d1254u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 7), GPR_U32(ctx, 17) & 0x1F));
    // 0x1d1258: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1D1258u;
    {
        const bool branch_taken_0x1d1258 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D125Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D1258u;
        // 0x1d125c: 0xae430010  sw          $v1, 0x10($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 16), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d1258) {
            ctx->pc = 0x1D126Cu;
            goto label_1d126c;
        }
    }
    ctx->pc = 0x1D1260u;
label_1d1260:
    // 0x1d1260: 0x81702  srl         $v0, $t0, 28
    ctx->pc = 0x1d1260u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 8), 28));
    // 0x1d1264: 0xe0402d  daddu       $t0, $a3, $zero
    ctx->pc = 0x1d1264u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d1268: 0xae420010  sw          $v0, 0x10($s2)
    ctx->pc = 0x1d1268u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 16), GPR_U32(ctx, 2));
label_1d126c:
    // 0x1d126c: 0x82070000  lb          $a3, 0x0($s0)
    ctx->pc = 0x1d126cu;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1d1270: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1d1270u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x1d1274: 0x92020000  lbu         $v0, 0x0($s0)
    ctx->pc = 0x1d1274u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1d1278: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1d1278u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x1d127c: 0x73a00  sll         $a3, $a3, 8
    ctx->pc = 0x1d127cu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 8));
    // 0x1d1280: 0x92030000  lbu         $v1, 0x0($s0)
    ctx->pc = 0x1d1280u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1d1284: 0xe23825  or          $a3, $a3, $v0
    ctx->pc = 0x1d1284u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 2));
    // 0x1d1288: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1d1288u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x1d128c: 0x73a00  sll         $a3, $a3, 8
    ctx->pc = 0x1d128cu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 8));
    // 0x1d1290: 0x92020000  lbu         $v0, 0x0($s0)
    ctx->pc = 0x1d1290u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1d1294: 0xe33825  or          $a3, $a3, $v1
    ctx->pc = 0x1d1294u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 3));
    // 0x1d1298: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1d1298u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x1d129c: 0x73a00  sll         $a3, $a3, 8
    ctx->pc = 0x1d129cu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 8));
    // 0x1d12a0: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1D12A0u;
    {
        const bool branch_taken_0x1d12a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D12A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D12A0u;
        // 0x1d12a4: 0xe23825  or          $a3, $a3, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d12a0) {
            ctx->pc = 0x1D12B4u;
            goto label_1d12b4;
        }
    }
    ctx->pc = 0x1D12A8u;
label_1d12a8:
    // 0x1d12a8: 0x84100  sll         $t0, $t0, 4
    ctx->pc = 0x1d12a8u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 4));
    // 0x1d12ac: 0xae420010  sw          $v0, 0x10($s2)
    ctx->pc = 0x1d12acu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 16), GPR_U32(ctx, 2));
    // 0x1d12b0: 0x26310004  addiu       $s1, $s1, 0x4
    ctx->pc = 0x1d12b0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
label_1d12b4:
    // 0x1d12b4: 0x2a22000e  slti        $v0, $s1, 0xE
    ctx->pc = 0x1d12b4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)14) ? 1 : 0);
    // 0x1d12b8: 0x1440001d  bnez        $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x1D12B8u;
    {
        const bool branch_taken_0x1d12b8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D12BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D12B8u;
        // 0x1d12bc: 0x81382  srl         $v0, $t0, 14 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 8), 14));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d12b8) {
            ctx->pc = 0x1D1330u;
            goto label_1d1330;
        }
    }
    ctx->pc = 0x1D12C0u;
    // 0x1d12c0: 0x2631fff2  addiu       $s1, $s1, -0xE
    ctx->pc = 0x1d12c0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967282));
    // 0x1d12c4: 0x12200008  beqz        $s1, . + 4 + (0x8 << 2)
    ctx->pc = 0x1D12C4u;
    {
        const bool branch_taken_0x1d12c4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D12C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D12C4u;
        // 0x1d12c8: 0x24020012  addiu       $v0, $zero, 0x12 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d12c4) {
            ctx->pc = 0x1D12E8u;
            goto label_1d12e8;
        }
    }
    ctx->pc = 0x1D12CCu;
    // 0x1d12cc: 0x511023  subu        $v0, $v0, $s1
    ctx->pc = 0x1d12ccu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x1d12d0: 0x471006  srlv        $v0, $a3, $v0
    ctx->pc = 0x1d12d0u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 7), GPR_U32(ctx, 2) & 0x1F));
    // 0x1d12d4: 0x1024025  or          $t0, $t0, $v0
    ctx->pc = 0x1d12d4u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | GPR_U64(ctx, 2));
    // 0x1d12d8: 0x81b82  srl         $v1, $t0, 14
    ctx->pc = 0x1d12d8u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 8), 14));
    // 0x1d12dc: 0x2274004  sllv        $t0, $a3, $s1
    ctx->pc = 0x1d12dcu;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 7), GPR_U32(ctx, 17) & 0x1F));
    // 0x1d12e0: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1D12E0u;
    {
        const bool branch_taken_0x1d12e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D12E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D12E0u;
        // 0x1d12e4: 0xae430014  sw          $v1, 0x14($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 20), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d12e0) {
            ctx->pc = 0x1D12F4u;
            goto label_1d12f4;
        }
    }
    ctx->pc = 0x1D12E8u;
label_1d12e8:
    // 0x1d12e8: 0x81382  srl         $v0, $t0, 14
    ctx->pc = 0x1d12e8u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 8), 14));
    // 0x1d12ec: 0xe0402d  daddu       $t0, $a3, $zero
    ctx->pc = 0x1d12ecu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d12f0: 0xae420014  sw          $v0, 0x14($s2)
    ctx->pc = 0x1d12f0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 20), GPR_U32(ctx, 2));
label_1d12f4:
    // 0x1d12f4: 0x82070000  lb          $a3, 0x0($s0)
    ctx->pc = 0x1d12f4u;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1d12f8: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1d12f8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x1d12fc: 0x92020000  lbu         $v0, 0x0($s0)
    ctx->pc = 0x1d12fcu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1d1300: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1d1300u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x1d1304: 0x73a00  sll         $a3, $a3, 8
    ctx->pc = 0x1d1304u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 8));
    // 0x1d1308: 0x92030000  lbu         $v1, 0x0($s0)
    ctx->pc = 0x1d1308u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1d130c: 0xe23825  or          $a3, $a3, $v0
    ctx->pc = 0x1d130cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 2));
    // 0x1d1310: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1d1310u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x1d1314: 0x73a00  sll         $a3, $a3, 8
    ctx->pc = 0x1d1314u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 8));
    // 0x1d1318: 0x92020000  lbu         $v0, 0x0($s0)
    ctx->pc = 0x1d1318u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1d131c: 0xe33825  or          $a3, $a3, $v1
    ctx->pc = 0x1d131cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 3));
    // 0x1d1320: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1d1320u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x1d1324: 0x73a00  sll         $a3, $a3, 8
    ctx->pc = 0x1d1324u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 8));
    // 0x1d1328: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1D1328u;
    {
        const bool branch_taken_0x1d1328 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D132Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D1328u;
        // 0x1d132c: 0xe23825  or          $a3, $a3, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d1328) {
            ctx->pc = 0x1D133Cu;
            goto label_1d133c;
        }
    }
    ctx->pc = 0x1D1330u;
label_1d1330:
    // 0x1d1330: 0x84480  sll         $t0, $t0, 18
    ctx->pc = 0x1d1330u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 18));
    // 0x1d1334: 0xae420014  sw          $v0, 0x14($s2)
    ctx->pc = 0x1d1334u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 20), GPR_U32(ctx, 2));
    // 0x1d1338: 0x26310012  addiu       $s1, $s1, 0x12
    ctx->pc = 0x1d1338u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 18));
label_1d133c:
    // 0x1d133c: 0x2a22001f  slti        $v0, $s1, 0x1F
    ctx->pc = 0x1d133cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)31) ? 1 : 0);
    // 0x1d1340: 0x1440001d  bnez        $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x1D1340u;
    {
        const bool branch_taken_0x1d1340 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D1344u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D1340u;
        // 0x1d1344: 0x817c2  srl         $v0, $t0, 31 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 8), 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d1340) {
            ctx->pc = 0x1D13B8u;
            goto label_1d13b8;
        }
    }
    ctx->pc = 0x1D1348u;
    // 0x1d1348: 0x2631ffe1  addiu       $s1, $s1, -0x1F
    ctx->pc = 0x1d1348u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967265));
    // 0x1d134c: 0x12200008  beqz        $s1, . + 4 + (0x8 << 2)
    ctx->pc = 0x1D134Cu;
    {
        const bool branch_taken_0x1d134c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D1350u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D134Cu;
        // 0x1d1350: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d134c) {
            ctx->pc = 0x1D1370u;
            goto label_1d1370;
        }
    }
    ctx->pc = 0x1D1354u;
    // 0x1d1354: 0x511023  subu        $v0, $v0, $s1
    ctx->pc = 0x1d1354u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x1d1358: 0x471006  srlv        $v0, $a3, $v0
    ctx->pc = 0x1d1358u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 7), GPR_U32(ctx, 2) & 0x1F));
    // 0x1d135c: 0x1024025  or          $t0, $t0, $v0
    ctx->pc = 0x1d135cu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | GPR_U64(ctx, 2));
    // 0x1d1360: 0x81fc2  srl         $v1, $t0, 31
    ctx->pc = 0x1d1360u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 8), 31));
    // 0x1d1364: 0x2274004  sllv        $t0, $a3, $s1
    ctx->pc = 0x1d1364u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 7), GPR_U32(ctx, 17) & 0x1F));
    // 0x1d1368: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1D1368u;
    {
        const bool branch_taken_0x1d1368 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D136Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D1368u;
        // 0x1d136c: 0xae430018  sw          $v1, 0x18($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 24), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d1368) {
            ctx->pc = 0x1D137Cu;
            goto label_1d137c;
        }
    }
    ctx->pc = 0x1D1370u;
label_1d1370:
    // 0x1d1370: 0x817c2  srl         $v0, $t0, 31
    ctx->pc = 0x1d1370u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 8), 31));
    // 0x1d1374: 0xe0402d  daddu       $t0, $a3, $zero
    ctx->pc = 0x1d1374u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d1378: 0xae420018  sw          $v0, 0x18($s2)
    ctx->pc = 0x1d1378u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 24), GPR_U32(ctx, 2));
label_1d137c:
    // 0x1d137c: 0x82070000  lb          $a3, 0x0($s0)
    ctx->pc = 0x1d137cu;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1d1380: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1d1380u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x1d1384: 0x92020000  lbu         $v0, 0x0($s0)
    ctx->pc = 0x1d1384u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1d1388: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1d1388u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x1d138c: 0x73a00  sll         $a3, $a3, 8
    ctx->pc = 0x1d138cu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 8));
    // 0x1d1390: 0x92030000  lbu         $v1, 0x0($s0)
    ctx->pc = 0x1d1390u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1d1394: 0xe23825  or          $a3, $a3, $v0
    ctx->pc = 0x1d1394u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 2));
    // 0x1d1398: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1d1398u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x1d139c: 0x73a00  sll         $a3, $a3, 8
    ctx->pc = 0x1d139cu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 8));
    // 0x1d13a0: 0x92020000  lbu         $v0, 0x0($s0)
    ctx->pc = 0x1d13a0u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1d13a4: 0xe33825  or          $a3, $a3, $v1
    ctx->pc = 0x1d13a4u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 3));
    // 0x1d13a8: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1d13a8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x1d13ac: 0x73a00  sll         $a3, $a3, 8
    ctx->pc = 0x1d13acu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 8));
    // 0x1d13b0: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1D13B0u;
    {
        const bool branch_taken_0x1d13b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D13B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D13B0u;
        // 0x1d13b4: 0xe23825  or          $a3, $a3, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d13b0) {
            ctx->pc = 0x1D13C4u;
            goto label_1d13c4;
        }
    }
    ctx->pc = 0x1D13B8u;
label_1d13b8:
    // 0x1d13b8: 0x84040  sll         $t0, $t0, 1
    ctx->pc = 0x1d13b8u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 1));
    // 0x1d13bc: 0xae420018  sw          $v0, 0x18($s2)
    ctx->pc = 0x1d13bcu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 24), GPR_U32(ctx, 2));
    // 0x1d13c0: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1d13c0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_1d13c4:
    // 0x1d13c4: 0x2a220016  slti        $v0, $s1, 0x16
    ctx->pc = 0x1d13c4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)22) ? 1 : 0);
    // 0x1d13c8: 0x1440001d  bnez        $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x1D13C8u;
    {
        const bool branch_taken_0x1d13c8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D13CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D13C8u;
        // 0x1d13cc: 0x81582  srl         $v0, $t0, 22 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 8), 22));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d13c8) {
            ctx->pc = 0x1D1440u;
            goto label_1d1440;
        }
    }
    ctx->pc = 0x1D13D0u;
    // 0x1d13d0: 0x2631ffea  addiu       $s1, $s1, -0x16
    ctx->pc = 0x1d13d0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967274));
    // 0x1d13d4: 0x12200008  beqz        $s1, . + 4 + (0x8 << 2)
    ctx->pc = 0x1D13D4u;
    {
        const bool branch_taken_0x1d13d4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D13D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D13D4u;
        // 0x1d13d8: 0x2402000a  addiu       $v0, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d13d4) {
            ctx->pc = 0x1D13F8u;
            goto label_1d13f8;
        }
    }
    ctx->pc = 0x1D13DCu;
    // 0x1d13dc: 0x511023  subu        $v0, $v0, $s1
    ctx->pc = 0x1d13dcu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x1d13e0: 0x471006  srlv        $v0, $a3, $v0
    ctx->pc = 0x1d13e0u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 7), GPR_U32(ctx, 2) & 0x1F));
    // 0x1d13e4: 0x1024025  or          $t0, $t0, $v0
    ctx->pc = 0x1d13e4u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | GPR_U64(ctx, 2));
    // 0x1d13e8: 0x81d82  srl         $v1, $t0, 22
    ctx->pc = 0x1d13e8u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 8), 22));
    // 0x1d13ec: 0x2274004  sllv        $t0, $a3, $s1
    ctx->pc = 0x1d13ecu;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 7), GPR_U32(ctx, 17) & 0x1F));
    // 0x1d13f0: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1D13F0u;
    {
        const bool branch_taken_0x1d13f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D13F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D13F0u;
        // 0x1d13f4: 0xae43001c  sw          $v1, 0x1C($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 28), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d13f0) {
            ctx->pc = 0x1D1404u;
            goto label_1d1404;
        }
    }
    ctx->pc = 0x1D13F8u;
label_1d13f8:
    // 0x1d13f8: 0x81582  srl         $v0, $t0, 22
    ctx->pc = 0x1d13f8u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 8), 22));
    // 0x1d13fc: 0xe0402d  daddu       $t0, $a3, $zero
    ctx->pc = 0x1d13fcu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d1400: 0xae42001c  sw          $v0, 0x1C($s2)
    ctx->pc = 0x1d1400u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 28), GPR_U32(ctx, 2));
label_1d1404:
    // 0x1d1404: 0x82070000  lb          $a3, 0x0($s0)
    ctx->pc = 0x1d1404u;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1d1408: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1d1408u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x1d140c: 0x92020000  lbu         $v0, 0x0($s0)
    ctx->pc = 0x1d140cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1d1410: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1d1410u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x1d1414: 0x73a00  sll         $a3, $a3, 8
    ctx->pc = 0x1d1414u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 8));
    // 0x1d1418: 0x92030000  lbu         $v1, 0x0($s0)
    ctx->pc = 0x1d1418u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1d141c: 0xe23825  or          $a3, $a3, $v0
    ctx->pc = 0x1d141cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 2));
    // 0x1d1420: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1d1420u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x1d1424: 0x73a00  sll         $a3, $a3, 8
    ctx->pc = 0x1d1424u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 8));
    // 0x1d1428: 0x92020000  lbu         $v0, 0x0($s0)
    ctx->pc = 0x1d1428u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1d142c: 0xe33825  or          $a3, $a3, $v1
    ctx->pc = 0x1d142cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 3));
    // 0x1d1430: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1d1430u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x1d1434: 0x73a00  sll         $a3, $a3, 8
    ctx->pc = 0x1d1434u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 8));
    // 0x1d1438: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1D1438u;
    {
        const bool branch_taken_0x1d1438 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D143Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D1438u;
        // 0x1d143c: 0xe23825  or          $a3, $a3, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d1438) {
            ctx->pc = 0x1D144Cu;
            goto label_1d144c;
        }
    }
    ctx->pc = 0x1D1440u;
label_1d1440:
    // 0x1d1440: 0x84280  sll         $t0, $t0, 10
    ctx->pc = 0x1d1440u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 10));
    // 0x1d1444: 0xae42001c  sw          $v0, 0x1C($s2)
    ctx->pc = 0x1d1444u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 28), GPR_U32(ctx, 2));
    // 0x1d1448: 0x2631000a  addiu       $s1, $s1, 0xA
    ctx->pc = 0x1d1448u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 10));
label_1d144c:
    // 0x1d144c: 0x2a22001f  slti        $v0, $s1, 0x1F
    ctx->pc = 0x1d144cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)31) ? 1 : 0);
    // 0x1d1450: 0x1440001d  bnez        $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x1D1450u;
    {
        const bool branch_taken_0x1d1450 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D1454u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D1450u;
        // 0x1d1454: 0x817c2  srl         $v0, $t0, 31 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 8), 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d1450) {
            ctx->pc = 0x1D14C8u;
            goto label_1d14c8;
        }
    }
    ctx->pc = 0x1D1458u;
    // 0x1d1458: 0x2631ffe1  addiu       $s1, $s1, -0x1F
    ctx->pc = 0x1d1458u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967265));
    // 0x1d145c: 0x12200008  beqz        $s1, . + 4 + (0x8 << 2)
    ctx->pc = 0x1D145Cu;
    {
        const bool branch_taken_0x1d145c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D1460u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D145Cu;
        // 0x1d1460: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d145c) {
            ctx->pc = 0x1D1480u;
            goto label_1d1480;
        }
    }
    ctx->pc = 0x1D1464u;
    // 0x1d1464: 0x511023  subu        $v0, $v0, $s1
    ctx->pc = 0x1d1464u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x1d1468: 0x471006  srlv        $v0, $a3, $v0
    ctx->pc = 0x1d1468u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 7), GPR_U32(ctx, 2) & 0x1F));
    // 0x1d146c: 0x1024025  or          $t0, $t0, $v0
    ctx->pc = 0x1d146cu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | GPR_U64(ctx, 2));
    // 0x1d1470: 0x81fc2  srl         $v1, $t0, 31
    ctx->pc = 0x1d1470u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 8), 31));
    // 0x1d1474: 0x2274004  sllv        $t0, $a3, $s1
    ctx->pc = 0x1d1474u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 7), GPR_U32(ctx, 17) & 0x1F));
    // 0x1d1478: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1D1478u;
    {
        const bool branch_taken_0x1d1478 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D147Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D1478u;
        // 0x1d147c: 0xae430020  sw          $v1, 0x20($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 32), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d1478) {
            ctx->pc = 0x1D148Cu;
            goto label_1d148c;
        }
    }
    ctx->pc = 0x1D1480u;
label_1d1480:
    // 0x1d1480: 0x817c2  srl         $v0, $t0, 31
    ctx->pc = 0x1d1480u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 8), 31));
    // 0x1d1484: 0xe0402d  daddu       $t0, $a3, $zero
    ctx->pc = 0x1d1484u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d1488: 0xae420020  sw          $v0, 0x20($s2)
    ctx->pc = 0x1d1488u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 32), GPR_U32(ctx, 2));
label_1d148c:
    // 0x1d148c: 0x82070000  lb          $a3, 0x0($s0)
    ctx->pc = 0x1d148cu;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1d1490: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1d1490u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x1d1494: 0x92020000  lbu         $v0, 0x0($s0)
    ctx->pc = 0x1d1494u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1d1498: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1d1498u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x1d149c: 0x73a00  sll         $a3, $a3, 8
    ctx->pc = 0x1d149cu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 8));
    // 0x1d14a0: 0x92030000  lbu         $v1, 0x0($s0)
    ctx->pc = 0x1d14a0u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1d14a4: 0xe23825  or          $a3, $a3, $v0
    ctx->pc = 0x1d14a4u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 2));
    // 0x1d14a8: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1d14a8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x1d14ac: 0x73a00  sll         $a3, $a3, 8
    ctx->pc = 0x1d14acu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 8));
    // 0x1d14b0: 0x92020000  lbu         $v0, 0x0($s0)
    ctx->pc = 0x1d14b0u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1d14b4: 0xe33825  or          $a3, $a3, $v1
    ctx->pc = 0x1d14b4u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 3));
    // 0x1d14b8: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1d14b8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x1d14bc: 0x73a00  sll         $a3, $a3, 8
    ctx->pc = 0x1d14bcu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 8));
    // 0x1d14c0: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1D14C0u;
    {
        const bool branch_taken_0x1d14c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D14C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D14C0u;
        // 0x1d14c4: 0xe23825  or          $a3, $a3, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d14c0) {
            ctx->pc = 0x1D14D4u;
            goto label_1d14d4;
        }
    }
    ctx->pc = 0x1D14C8u;
label_1d14c8:
    // 0x1d14c8: 0x84040  sll         $t0, $t0, 1
    ctx->pc = 0x1d14c8u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 1));
    // 0x1d14cc: 0xae420020  sw          $v0, 0x20($s2)
    ctx->pc = 0x1d14ccu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 32), GPR_U32(ctx, 2));
    // 0x1d14d0: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1d14d0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_1d14d4:
    // 0x1d14d4: 0x2a22001f  slti        $v0, $s1, 0x1F
    ctx->pc = 0x1d14d4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)31) ? 1 : 0);
    // 0x1d14d8: 0x1440001d  bnez        $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x1D14D8u;
    {
        const bool branch_taken_0x1d14d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D14DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D14D8u;
        // 0x1d14dc: 0x817c2  srl         $v0, $t0, 31 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 8), 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d14d8) {
            ctx->pc = 0x1D1550u;
            goto label_1d1550;
        }
    }
    ctx->pc = 0x1D14E0u;
    // 0x1d14e0: 0x2631ffe1  addiu       $s1, $s1, -0x1F
    ctx->pc = 0x1d14e0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967265));
    // 0x1d14e4: 0x12200008  beqz        $s1, . + 4 + (0x8 << 2)
    ctx->pc = 0x1D14E4u;
    {
        const bool branch_taken_0x1d14e4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D14E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D14E4u;
        // 0x1d14e8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d14e4) {
            ctx->pc = 0x1D1508u;
            goto label_1d1508;
        }
    }
    ctx->pc = 0x1D14ECu;
    // 0x1d14ec: 0x511023  subu        $v0, $v0, $s1
    ctx->pc = 0x1d14ecu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x1d14f0: 0x471006  srlv        $v0, $a3, $v0
    ctx->pc = 0x1d14f0u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 7), GPR_U32(ctx, 2) & 0x1F));
    // 0x1d14f4: 0x1024025  or          $t0, $t0, $v0
    ctx->pc = 0x1d14f4u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | GPR_U64(ctx, 2));
    // 0x1d14f8: 0x81fc2  srl         $v1, $t0, 31
    ctx->pc = 0x1d14f8u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 8), 31));
    // 0x1d14fc: 0x2274004  sllv        $t0, $a3, $s1
    ctx->pc = 0x1d14fcu;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 7), GPR_U32(ctx, 17) & 0x1F));
    // 0x1d1500: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1D1500u;
    {
        const bool branch_taken_0x1d1500 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D1504u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D1500u;
        // 0x1d1504: 0xae430024  sw          $v1, 0x24($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 36), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d1500) {
            ctx->pc = 0x1D1514u;
            goto label_1d1514;
        }
    }
    ctx->pc = 0x1D1508u;
label_1d1508:
    // 0x1d1508: 0x817c2  srl         $v0, $t0, 31
    ctx->pc = 0x1d1508u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 8), 31));
    // 0x1d150c: 0xe0402d  daddu       $t0, $a3, $zero
    ctx->pc = 0x1d150cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d1510: 0xae420024  sw          $v0, 0x24($s2)
    ctx->pc = 0x1d1510u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 36), GPR_U32(ctx, 2));
label_1d1514:
    // 0x1d1514: 0x82070000  lb          $a3, 0x0($s0)
    ctx->pc = 0x1d1514u;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1d1518: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1d1518u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x1d151c: 0x92020000  lbu         $v0, 0x0($s0)
    ctx->pc = 0x1d151cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1d1520: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1d1520u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x1d1524: 0x73a00  sll         $a3, $a3, 8
    ctx->pc = 0x1d1524u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 8));
    // 0x1d1528: 0x92030000  lbu         $v1, 0x0($s0)
    ctx->pc = 0x1d1528u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1d152c: 0xe23825  or          $a3, $a3, $v0
    ctx->pc = 0x1d152cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 2));
    // 0x1d1530: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1d1530u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x1d1534: 0x73a00  sll         $a3, $a3, 8
    ctx->pc = 0x1d1534u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 8));
    // 0x1d1538: 0x92020000  lbu         $v0, 0x0($s0)
    ctx->pc = 0x1d1538u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1d153c: 0xe33825  or          $a3, $a3, $v1
    ctx->pc = 0x1d153cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 3));
    // 0x1d1540: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1d1540u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x1d1544: 0x73a00  sll         $a3, $a3, 8
    ctx->pc = 0x1d1544u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 8));
    // 0x1d1548: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1D1548u;
    {
        const bool branch_taken_0x1d1548 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D154Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D1548u;
        // 0x1d154c: 0xe23825  or          $a3, $a3, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d1548) {
            ctx->pc = 0x1D155Cu;
            goto label_1d155c;
        }
    }
    ctx->pc = 0x1D1550u;
label_1d1550:
    // 0x1d1550: 0x84040  sll         $t0, $t0, 1
    ctx->pc = 0x1d1550u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 1));
    // 0x1d1554: 0xae420024  sw          $v0, 0x24($s2)
    ctx->pc = 0x1d1554u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 36), GPR_U32(ctx, 2));
    // 0x1d1558: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1d1558u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_1d155c:
    // 0x1d155c: 0x8e420024  lw          $v0, 0x24($s2)
    ctx->pc = 0x1d155cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 36)));
    // 0x1d1560: 0x1040001a  beqz        $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x1D1560u;
    {
        const bool branch_taken_0x1d1560 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D1564u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D1560u;
        // 0x1d1564: 0x2a22001f  slti        $v0, $s1, 0x1F (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)31) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d1560) {
            ctx->pc = 0x1D15CCu;
            goto label_1d15cc;
        }
    }
    ctx->pc = 0x1D1568u;
    // 0x1d1568: 0x2404003f  addiu       $a0, $zero, 0x3F
    ctx->pc = 0x1d1568u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
    // 0x1d156c: 0x26310008  addiu       $s1, $s1, 0x8
    ctx->pc = 0x1d156cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
label_1d1570:
    // 0x1d1570: 0x2a220020  slti        $v0, $s1, 0x20
    ctx->pc = 0x1d1570u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)32) ? 1 : 0);
    // 0x1d1574: 0x54400011  bnel        $v0, $zero, . + 4 + (0x11 << 2)
    ctx->pc = 0x1D1574u;
    {
        const bool branch_taken_0x1d1574 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d1574) {
            ctx->pc = 0x1D1578u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1D1574u;
            // 0x1d1578: 0x84200  sll         $t0, $t0, 8 (Delay Slot)
            SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 8));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1D15BCu;
            goto label_1d15bc;
        }
    }
    ctx->pc = 0x1D157Cu;
    // 0x1d157c: 0x2631ffe0  addiu       $s1, $s1, -0x20
    ctx->pc = 0x1d157cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967264));
    // 0x1d1580: 0x2274004  sllv        $t0, $a3, $s1
    ctx->pc = 0x1d1580u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 7), GPR_U32(ctx, 17) & 0x1F));
    // 0x1d1584: 0x82070000  lb          $a3, 0x0($s0)
    ctx->pc = 0x1d1584u;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1d1588: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1d1588u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x1d158c: 0x92020000  lbu         $v0, 0x0($s0)
    ctx->pc = 0x1d158cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1d1590: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1d1590u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x1d1594: 0x73a00  sll         $a3, $a3, 8
    ctx->pc = 0x1d1594u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 8));
    // 0x1d1598: 0x92030000  lbu         $v1, 0x0($s0)
    ctx->pc = 0x1d1598u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1d159c: 0xe23825  or          $a3, $a3, $v0
    ctx->pc = 0x1d159cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 2));
    // 0x1d15a0: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1d15a0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x1d15a4: 0x73a00  sll         $a3, $a3, 8
    ctx->pc = 0x1d15a4u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 8));
    // 0x1d15a8: 0x92020000  lbu         $v0, 0x0($s0)
    ctx->pc = 0x1d15a8u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1d15ac: 0xe33825  or          $a3, $a3, $v1
    ctx->pc = 0x1d15acu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 3));
    // 0x1d15b0: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1d15b0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x1d15b4: 0x73a00  sll         $a3, $a3, 8
    ctx->pc = 0x1d15b4u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 8));
    // 0x1d15b8: 0xe23825  or          $a3, $a3, $v0
    ctx->pc = 0x1d15b8u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 2));
label_1d15bc:
    // 0x1d15bc: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x1d15bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x1d15c0: 0x483ffeb  bgezl       $a0, . + 4 + (-0x15 << 2)
    ctx->pc = 0x1D15C0u;
    {
        const bool branch_taken_0x1d15c0 = (GPR_S32(ctx, 4) >= 0);
        if (branch_taken_0x1d15c0) {
            ctx->pc = 0x1D15C4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1D15C0u;
            // 0x1d15c4: 0x26310008  addiu       $s1, $s1, 0x8 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1D1570u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1d1570;
        }
    }
    ctx->pc = 0x1D15C8u;
    // 0x1d15c8: 0x2a22001f  slti        $v0, $s1, 0x1F
    ctx->pc = 0x1d15c8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)31) ? 1 : 0);
label_1d15cc:
    // 0x1d15cc: 0x1440000e  bnez        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x1D15CCu;
    {
        const bool branch_taken_0x1d15cc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D15D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D15CCu;
        // 0x1d15d0: 0x817c2  srl         $v0, $t0, 31 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 8), 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d15cc) {
            ctx->pc = 0x1D1608u;
            goto label_1d1608;
        }
    }
    ctx->pc = 0x1D15D4u;
    // 0x1d15d4: 0x2631ffe1  addiu       $s1, $s1, -0x1F
    ctx->pc = 0x1d15d4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967265));
    // 0x1d15d8: 0x12200007  beqz        $s1, . + 4 + (0x7 << 2)
    ctx->pc = 0x1D15D8u;
    {
        const bool branch_taken_0x1d15d8 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D15DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D15D8u;
        // 0x1d15dc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d15d8) {
            ctx->pc = 0x1D15F8u;
            goto label_1d15f8;
        }
    }
    ctx->pc = 0x1D15E0u;
    // 0x1d15e0: 0x511023  subu        $v0, $v0, $s1
    ctx->pc = 0x1d15e0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x1d15e4: 0x471006  srlv        $v0, $a3, $v0
    ctx->pc = 0x1d15e4u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 7), GPR_U32(ctx, 2) & 0x1F));
    // 0x1d15e8: 0x1024025  or          $t0, $t0, $v0
    ctx->pc = 0x1d15e8u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | GPR_U64(ctx, 2));
    // 0x1d15ec: 0x81fc2  srl         $v1, $t0, 31
    ctx->pc = 0x1d15ecu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 8), 31));
    // 0x1d15f0: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1D15F0u;
    {
        const bool branch_taken_0x1d15f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D15F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D15F0u;
        // 0x1d15f4: 0xae430028  sw          $v1, 0x28($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 40), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d15f0) {
            ctx->pc = 0x1D1600u;
            goto label_1d1600;
        }
    }
    ctx->pc = 0x1D15F8u;
label_1d15f8:
    // 0x1d15f8: 0x817c2  srl         $v0, $t0, 31
    ctx->pc = 0x1d15f8u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 8), 31));
    // 0x1d15fc: 0xae420028  sw          $v0, 0x28($s2)
    ctx->pc = 0x1d15fcu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 40), GPR_U32(ctx, 2));
label_1d1600:
    // 0x1d1600: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1D1600u;
    {
        const bool branch_taken_0x1d1600 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D1604u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D1600u;
        // 0x1d1604: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d1600) {
            ctx->pc = 0x1D1610u;
            goto label_1d1610;
        }
    }
    ctx->pc = 0x1D1608u;
label_1d1608:
    // 0x1d1608: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1d1608u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1d160c: 0xae420028  sw          $v0, 0x28($s2)
    ctx->pc = 0x1d160cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 40), GPR_U32(ctx, 2));
label_1d1610:
    // 0x1d1610: 0x8e420028  lw          $v0, 0x28($s2)
    ctx->pc = 0x1d1610u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 40)));
    // 0x1d1614: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x1D1614u;
    {
        const bool branch_taken_0x1d1614 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D1618u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D1614u;
        // 0x1d1618: 0x2403003f  addiu       $v1, $zero, 0x3F (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d1614) {
            ctx->pc = 0x1D1644u;
            goto label_1d1644;
        }
    }
    ctx->pc = 0x1D161Cu;
    // 0x1d161c: 0x26310008  addiu       $s1, $s1, 0x8
    ctx->pc = 0x1d161cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
label_1d1620:
    // 0x1d1620: 0x2a220020  slti        $v0, $s1, 0x20
    ctx->pc = 0x1d1620u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)32) ? 1 : 0);
    // 0x1d1624: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1D1624u;
    {
        const bool branch_taken_0x1d1624 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D1628u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D1624u;
        // 0x1d1628: 0x2463ffff  addiu       $v1, $v1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d1624) {
            ctx->pc = 0x1D1634u;
            goto label_1d1634;
        }
    }
    ctx->pc = 0x1D162Cu;
    // 0x1d162c: 0x2631ffe0  addiu       $s1, $s1, -0x20
    ctx->pc = 0x1d162cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967264));
    // 0x1d1630: 0x26100004  addiu       $s0, $s0, 0x4
    ctx->pc = 0x1d1630u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
label_1d1634:
    // 0x1d1634: 0x0  nop
    ctx->pc = 0x1d1634u;
    // NOP
    // 0x1d1638: 0x0  nop
    ctx->pc = 0x1d1638u;
    // NOP
    // 0x1d163c: 0x463fff8  bgezl       $v1, . + 4 + (-0x8 << 2)
    ctx->pc = 0x1D163Cu;
    {
        const bool branch_taken_0x1d163c = (GPR_S32(ctx, 3) >= 0);
        if (branch_taken_0x1d163c) {
            ctx->pc = 0x1D1640u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1D163Cu;
            // 0x1d1640: 0x26310008  addiu       $s1, $s1, 0x8 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1D1620u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1d1620;
        }
    }
    ctx->pc = 0x1D1644u;
label_1d1644:
    // 0x1d1644: 0xc074370  jal         func_1D0DC0
    ctx->pc = 0x1D1644u;
    SET_GPR_U32(ctx, 31, 0x1D164Cu);
    ctx->pc = 0x1D1648u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D1644u;
    // 0x1d1648: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D0DC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D0DC0u, 0x1D1644u, 0x1D164Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D164Cu;
label_1d164c:
    // 0x1d164c: 0xc0743cc  jal         func_1D0F30
    ctx->pc = 0x1D164Cu;
    SET_GPR_U32(ctx, 31, 0x1D1654u);
    ctx->pc = 0x1D1650u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D164Cu;
    // 0x1d1650: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D0F30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D0F30u, 0x1D164Cu, 0x1D1654u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D1654u;
label_1d1654:
    // 0x1d1654: 0x8e4202c4  lw          $v0, 0x2C4($s2)
    ctx->pc = 0x1d1654u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 708)));
    // 0x1d1658: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x1D1658u;
    {
        const bool branch_taken_0x1d1658 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d1658) {
            ctx->pc = 0x1D165Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1D1658u;
            // 0x1d165c: 0x8e4202c8  lw          $v0, 0x2C8($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 712)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1D1670u;
            goto label_1d1670;
        }
    }
    ctx->pc = 0x1D1660u;
    // 0x1d1660: 0x8e420494  lw          $v0, 0x494($s2)
    ctx->pc = 0x1d1660u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1172)));
    // 0x1d1664: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1d1664u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1d1668: 0xae420494  sw          $v0, 0x494($s2)
    ctx->pc = 0x1d1668u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 1172), GPR_U32(ctx, 2));
    // 0x1d166c: 0x8e4202c8  lw          $v0, 0x2C8($s2)
    ctx->pc = 0x1d166cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 712)));
label_1d1670:
    // 0x1d1670: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x1D1670u;
    {
        const bool branch_taken_0x1d1670 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d1670) {
            ctx->pc = 0x1D1674u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1D1670u;
            // 0x1d1674: 0x8e42000c  lw          $v0, 0xC($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1D1688u;
            goto label_1d1688;
        }
    }
    ctx->pc = 0x1D1678u;
    // 0x1d1678: 0x8e420494  lw          $v0, 0x494($s2)
    ctx->pc = 0x1d1678u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1172)));
    // 0x1d167c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1d167cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1d1680: 0xae420494  sw          $v0, 0x494($s2)
    ctx->pc = 0x1d1680u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 1172), GPR_U32(ctx, 2));
    // 0x1d1684: 0x8e42000c  lw          $v0, 0xC($s2)
    ctx->pc = 0x1d1684u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
label_1d1688:
    // 0x1d1688: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1d1688u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1d168c: 0x2c420004  sltiu       $v0, $v0, 0x4
    ctx->pc = 0x1d168cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)4) ? 1 : 0);
    // 0x1d1690: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x1D1690u;
    {
        const bool branch_taken_0x1d1690 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d1690) {
            ctx->pc = 0x1D1694u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1D1690u;
            // 0x1d1694: 0x8e420010  lw          $v0, 0x10($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1D16A8u;
            goto label_1d16a8;
        }
    }
    ctx->pc = 0x1D1698u;
    // 0x1d1698: 0x8e420494  lw          $v0, 0x494($s2)
    ctx->pc = 0x1d1698u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1172)));
    // 0x1d169c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1d169cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1d16a0: 0xae420494  sw          $v0, 0x494($s2)
    ctx->pc = 0x1d16a0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 1172), GPR_U32(ctx, 2));
    // 0x1d16a4: 0x8e420010  lw          $v0, 0x10($s2)
    ctx->pc = 0x1d16a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
label_1d16a8:
    // 0x1d16a8: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1d16a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1d16ac: 0x2c420008  sltiu       $v0, $v0, 0x8
    ctx->pc = 0x1d16acu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
    // 0x1d16b0: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1D16B0u;
    {
        const bool branch_taken_0x1d16b0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D16B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D16B0u;
        // 0x1d16b4: 0x2131823  subu        $v1, $s0, $s3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 19)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d16b0) {
            ctx->pc = 0x1D16C4u;
            goto label_1d16c4;
        }
    }
    ctx->pc = 0x1D16B8u;
    // 0x1d16b8: 0x8e420494  lw          $v0, 0x494($s2)
    ctx->pc = 0x1d16b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1172)));
    // 0x1d16bc: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1d16bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1d16c0: 0xae420494  sw          $v0, 0x494($s2)
    ctx->pc = 0x1d16c0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 1172), GPR_U32(ctx, 2));
label_1d16c4:
    // 0x1d16c4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1d16c4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d16c8: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x1d16c8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x1d16cc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1d16ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d16d0: 0x2231821  addu        $v1, $s1, $v1
    ctx->pc = 0x1d16d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
    // 0x1d16d4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1d16d4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1d16d8: 0xae42030c  sw          $v0, 0x30C($s2)
    ctx->pc = 0x1d16d8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 780), GPR_U32(ctx, 2));
    // 0x1d16dc: 0x2462ffc7  addiu       $v0, $v1, -0x39
    ctx->pc = 0x1d16dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967239));
    // 0x1d16e0: 0x28440000  slti        $a0, $v0, 0x0
    ctx->pc = 0x1d16e0u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x1d16e4: 0x2463ffce  addiu       $v1, $v1, -0x32
    ctx->pc = 0x1d16e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967246));
    // 0x1d16e8: 0x64100b  movn        $v0, $v1, $a0
    ctx->pc = 0x1d16e8u;
    if (GPR_U64(ctx, 4) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 3));
    // 0x1d16ec: 0x24050010  addiu       $a1, $zero, 0x10
    ctx->pc = 0x1d16ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x1d16f0: 0x210c3  sra         $v0, $v0, 3
    ctx->pc = 0x1d16f0u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 3));
    // 0x1d16f4: 0xae450308  sw          $a1, 0x308($s2)
    ctx->pc = 0x1d16f4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 776), GPR_U32(ctx, 5));
    // 0x1d16f8: 0x2621021  addu        $v0, $s3, $v0
    ctx->pc = 0x1d16f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x1d16fc: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1d16fcu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d1700: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1d1700u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1d1704: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1d1704u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1d1708: 0x3e00008  jr          $ra
    ctx->pc = 0x1D1708u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D170Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D1708u;
        // 0x1d170c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D1708u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D1710u;
}
