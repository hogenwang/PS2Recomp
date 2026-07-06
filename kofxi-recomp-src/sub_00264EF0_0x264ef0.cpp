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

// Function: sub_00264EF0
// Address: 0x264ef0 - 0x265130
void sub_00264EF0_0x264ef0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00264EF0_0x264ef0");
#endif

    switch (ctx->pc) {
        case 0x264f34u: goto label_264f34;
        case 0x264f48u: goto label_264f48;
        case 0x264f60u: goto label_264f60;
        case 0x264f88u: goto label_264f88;
        case 0x264fb4u: goto label_264fb4;
        case 0x264fc4u: goto label_264fc4;
        case 0x264ffcu: goto label_264ffc;
        case 0x2650c4u: goto label_2650c4;
        case 0x2650f0u: goto label_2650f0;
        default: break;
    }

    ctx->pc = 0x264ef0u;

    // 0x264ef0: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x264ef0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x264ef4: 0xffb70070  sd          $s7, 0x70($sp)
    ctx->pc = 0x264ef4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 23));
    // 0x264ef8: 0xffb60060  sd          $s6, 0x60($sp)
    ctx->pc = 0x264ef8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 22));
    // 0x264efc: 0xa0b82d  daddu       $s7, $a1, $zero
    ctx->pc = 0x264efcu;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x264f00: 0xffb50050  sd          $s5, 0x50($sp)
    ctx->pc = 0x264f00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 21));
    // 0x264f04: 0x2e6b021  addu        $s6, $s7, $a2
    ctx->pc = 0x264f04u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 6)));
    // 0x264f08: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x264f08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x264f0c: 0x2e0a82d  daddu       $s5, $s7, $zero
    ctx->pc = 0x264f0cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x264f10: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x264f10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x264f14: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x264f14u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x264f18: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x264f18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x264f1c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x264f1cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x264f20: 0xffbe0080  sd          $fp, 0x80($sp)
    ctx->pc = 0x264f20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 30));
    // 0x264f24: 0x26f10001  addiu       $s1, $s7, 0x1
    ctx->pc = 0x264f24u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 23), 1));
    // 0x264f28: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x264f28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x264f2c: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x264f2cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x264f30: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x264f30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_264f34:
    // 0x264f34: 0x82700000  lb          $s0, 0x0($s3)
    ctx->pc = 0x264f34u;
    SET_GPR_S32(ctx, 16, (int8_t)READ8(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x264f38: 0x12000058  beqz        $s0, . + 4 + (0x58 << 2)
    ctx->pc = 0x264F38u;
    {
        const bool branch_taken_0x264f38 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x264F3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x264F38u;
        // 0x264f3c: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x264f38) {
            ctx->pc = 0x26509Cu;
            goto label_26509c;
        }
    }
    ctx->pc = 0x264F40u;
    // 0x264f40: 0x241e007a  addiu       $fp, $zero, 0x7A
    ctx->pc = 0x264f40u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 0), 122));
    // 0x264f44: 0x0  nop
    ctx->pc = 0x264f44u;
    // NOP
label_264f48:
    // 0x264f48: 0x10800027  beqz        $a0, . + 4 + (0x27 << 2)
    ctx->pc = 0x264F48u;
    {
        const bool branch_taken_0x264f48 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x264F4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x264F48u;
        // 0x264f4c: 0x3c02003a  lui         $v0, 0x3A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)58 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x264f48) {
            ctx->pc = 0x264FE8u;
            goto label_264fe8;
        }
    }
    ctx->pc = 0x264F50u;
    // 0x264f50: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x264f50u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x264f54: 0x24541a20  addiu       $s4, $v0, 0x1A20
    ctx->pc = 0x264f54u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), 6688));
    // 0x264f58: 0xc04a726  jal         func_129C98
    ctx->pc = 0x264F58u;
    SET_GPR_U32(ctx, 31, 0x264F60u);
    ctx->pc = 0x264F5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x264F58u;
    // 0x264f5c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x129C98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x129C98u, 0x264F58u, 0x264F60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x264F60u;
label_264f60:
    // 0x264f60: 0x1040001f  beqz        $v0, . + 4 + (0x1F << 2)
    ctx->pc = 0x264F60u;
    {
        const bool branch_taken_0x264f60 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x264F64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x264F60u;
        // 0x264f64: 0x541823  subu        $v1, $v0, $s4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x264f60) {
            ctx->pc = 0x264FE0u;
            goto label_264fe0;
        }
    }
    ctx->pc = 0x264F68u;
    // 0x264f68: 0x82700000  lb          $s0, 0x0($s3)
    ctx->pc = 0x264f68u;
    SET_GPR_S32(ctx, 16, (int8_t)READ8(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x264f6c: 0x24020064  addiu       $v0, $zero, 0x64
    ctx->pc = 0x264f6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    // 0x264f70: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x264f70u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x264f74: 0x12000011  beqz        $s0, . + 4 + (0x11 << 2)
    ctx->pc = 0x264F74u;
    {
        const bool branch_taken_0x264f74 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x264F78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x264F74u;
        // 0x264f78: 0x629018  mult        $s2, $v1, $v0 (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 18, (int32_t)result); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x264f74) {
            ctx->pc = 0x264FBCu;
            goto label_264fbc;
        }
    }
    ctx->pc = 0x264F7Cu;
    // 0x264f7c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x264f7cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x264f80: 0xc04a726  jal         func_129C98
    ctx->pc = 0x264F80u;
    SET_GPR_U32(ctx, 31, 0x264F88u);
    ctx->pc = 0x264F84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x264F80u;
    // 0x264f84: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x129C98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x129C98u, 0x264F80u, 0x264F88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x264F88u;
label_264f88:
    // 0x264f88: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x264F88u;
    {
        const bool branch_taken_0x264f88 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x264F8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x264F88u;
        // 0x264f8c: 0x541823  subu        $v1, $v0, $s4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x264f88) {
            ctx->pc = 0x264FBCu;
            goto label_264fbc;
        }
    }
    ctx->pc = 0x264F90u;
    // 0x264f90: 0x82700000  lb          $s0, 0x0($s3)
    ctx->pc = 0x264f90u;
    SET_GPR_S32(ctx, 16, (int8_t)READ8(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x264f94: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x264f94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x264f98: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x264f98u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x264f9c: 0x622018  mult        $a0, $v1, $v0
    ctx->pc = 0x264f9cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x264fa0: 0x12000006  beqz        $s0, . + 4 + (0x6 << 2)
    ctx->pc = 0x264FA0u;
    {
        const bool branch_taken_0x264fa0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x264FA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x264FA0u;
        // 0x264fa4: 0x929021  addu        $s2, $a0, $s2 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 18)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x264fa0) {
            ctx->pc = 0x264FBCu;
            goto label_264fbc;
        }
    }
    ctx->pc = 0x264FA8u;
    // 0x264fa8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x264fa8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x264fac: 0xc04a726  jal         func_129C98
    ctx->pc = 0x264FACu;
    SET_GPR_U32(ctx, 31, 0x264FB4u);
    ctx->pc = 0x264FB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x264FACu;
    // 0x264fb0: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x129C98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x129C98u, 0x264FACu, 0x264FB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x264FB4u;
label_264fb4:
    // 0x264fb4: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x264FB4u;
    {
        const bool branch_taken_0x264fb4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x264fb4) {
            ctx->pc = 0x264FB8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x264FB4u;
            // 0x264fb8: 0x541023  subu        $v0, $v0, $s4 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x264FD0u;
            goto label_264fd0;
        }
    }
    ctx->pc = 0x264FBCu;
label_264fbc:
    // 0x264fbc: 0xc0972fa  jal         func_25CBE8
    ctx->pc = 0x264FBCu;
    SET_GPR_U32(ctx, 31, 0x264FC4u);
    ctx->pc = 0x25CBE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25CBE8u, 0x264FBCu, 0x264FC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x264FC4u;
label_264fc4:
    // 0x264fc4: 0xac5e0000  sw          $fp, 0x0($v0)
    ctx->pc = 0x264fc4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 30));
    // 0x264fc8: 0x1000004c  b           . + 4 + (0x4C << 2)
    ctx->pc = 0x264FC8u;
    {
        const bool branch_taken_0x264fc8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x264FCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x264FC8u;
        // 0x264fcc: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x264fc8) {
            ctx->pc = 0x2650FCu;
            goto label_2650fc;
        }
    }
    ctx->pc = 0x264FD0u;
label_264fd0:
    // 0x264fd0: 0x2429021  addu        $s2, $s2, $v0
    ctx->pc = 0x264fd0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x264fd4: 0x2a430100  slti        $v1, $s2, 0x100
    ctx->pc = 0x264fd4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)256) ? 1 : 0);
    // 0x264fd8: 0x10600043  beqz        $v1, . + 4 + (0x43 << 2)
    ctx->pc = 0x264FD8u;
    {
        const bool branch_taken_0x264fd8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x264FDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x264FD8u;
        // 0x264fdc: 0x240802d  daddu       $s0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x264fd8) {
            ctx->pc = 0x2650E8u;
            goto label_2650e8;
        }
    }
    ctx->pc = 0x264FE0u;
label_264fe0:
    // 0x264fe0: 0x10000024  b           . + 4 + (0x24 << 2)
    ctx->pc = 0x264FE0u;
    {
        const bool branch_taken_0x264fe0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x264FE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x264FE0u;
        // 0x264fe4: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x264fe0) {
            ctx->pc = 0x265074u;
            goto label_265074;
        }
    }
    ctx->pc = 0x264FE8u;
label_264fe8:
    // 0x264fe8: 0x2402005c  addiu       $v0, $zero, 0x5C
    ctx->pc = 0x264fe8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 92));
    // 0x264fec: 0x16020003  bne         $s0, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x264FECu;
    {
        const bool branch_taken_0x264fec = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        ctx->pc = 0x264FF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x264FECu;
        // 0x264ff0: 0x2402002e  addiu       $v0, $zero, 0x2E (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 46));
        ctx->in_delay_slot = false;
        if (branch_taken_0x264fec) {
            ctx->pc = 0x264FFCu;
            goto label_264ffc;
        }
    }
    ctx->pc = 0x264FF4u;
    // 0x264ff4: 0x10000024  b           . + 4 + (0x24 << 2)
    ctx->pc = 0x264FF4u;
    {
        const bool branch_taken_0x264ff4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x264FF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x264FF4u;
        // 0x264ff8: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x264ff4) {
            ctx->pc = 0x265088u;
            goto label_265088;
        }
    }
    ctx->pc = 0x264FFCu;
label_264ffc:
    // 0x264ffc: 0x1602001e  bne         $s0, $v0, . + 4 + (0x1E << 2)
    ctx->pc = 0x264FFCu;
    {
        const bool branch_taken_0x264ffc = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        ctx->pc = 0x265000u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x264FFCu;
        // 0x265000: 0x236102b  sltu        $v0, $s1, $s6 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 22)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x264ffc) {
            ctx->pc = 0x265078u;
            goto label_265078;
        }
    }
    ctx->pc = 0x265004u;
    // 0x265004: 0x2351023  subu        $v0, $s1, $s5
    ctx->pc = 0x265004u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 21)));
    // 0x265008: 0x2450ffff  addiu       $s0, $v0, -0x1
    ctx->pc = 0x265008u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x26500c: 0x320300c0  andi        $v1, $s0, 0xC0
    ctx->pc = 0x26500cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)192);
    // 0x265010: 0x14600035  bnez        $v1, . + 4 + (0x35 << 2)
    ctx->pc = 0x265010u;
    {
        const bool branch_taken_0x265010 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x265010) {
            ctx->pc = 0x2650E8u;
            goto label_2650e8;
        }
    }
    ctx->pc = 0x265018u;
    // 0x265018: 0x2b6102b  sltu        $v0, $s5, $s6
    ctx->pc = 0x265018u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 21) < (uint64_t)GPR_U64(ctx, 22)) ? 1 : 0);
    // 0x26501c: 0x10400032  beqz        $v0, . + 4 + (0x32 << 2)
    ctx->pc = 0x26501Cu;
    {
        const bool branch_taken_0x26501c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x26501c) {
            ctx->pc = 0x2650E8u;
            goto label_2650e8;
        }
    }
    ctx->pc = 0x265024u;
    // 0x265024: 0xa2b00000  sb          $s0, 0x0($s5)
    ctx->pc = 0x265024u;
    WRITE8(ADD32(GPR_U32(ctx, 21), 0), (uint8_t)GPR_U32(ctx, 16));
    // 0x265028: 0x82620000  lb          $v0, 0x0($s3)
    ctx->pc = 0x265028u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x26502c: 0x1440000d  bnez        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x26502Cu;
    {
        const bool branch_taken_0x26502c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x265030u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26502Cu;
        // 0x265030: 0x92630000  lbu         $v1, 0x0($s3) (Delay Slot)
        SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26502c) {
            ctx->pc = 0x265064u;
            goto label_265064;
        }
    }
    ctx->pc = 0x265034u;
    // 0x265034: 0x12000005  beqz        $s0, . + 4 + (0x5 << 2)
    ctx->pc = 0x265034u;
    {
        const bool branch_taken_0x265034 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x265038u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x265034u;
        // 0x265038: 0x236102b  sltu        $v0, $s1, $s6 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 22)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x265034) {
            ctx->pc = 0x26504Cu;
            goto label_26504c;
        }
    }
    ctx->pc = 0x26503Cu;
    // 0x26503c: 0x1040002a  beqz        $v0, . + 4 + (0x2A << 2)
    ctx->pc = 0x26503Cu;
    {
        const bool branch_taken_0x26503c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x26503c) {
            ctx->pc = 0x2650E8u;
            goto label_2650e8;
        }
    }
    ctx->pc = 0x265044u;
    // 0x265044: 0xa2200000  sb          $zero, 0x0($s1)
    ctx->pc = 0x265044u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x265048: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x265048u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_26504c:
    // 0x26504c: 0x2371023  subu        $v0, $s1, $s7
    ctx->pc = 0x26504cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 23)));
    // 0x265050: 0x28420100  slti        $v0, $v0, 0x100
    ctx->pc = 0x265050u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)256) ? 1 : 0);
    // 0x265054: 0x10400024  beqz        $v0, . + 4 + (0x24 << 2)
    ctx->pc = 0x265054u;
    {
        const bool branch_taken_0x265054 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x265054) {
            ctx->pc = 0x2650E8u;
            goto label_2650e8;
        }
    }
    ctx->pc = 0x26505Cu;
    // 0x26505c: 0x10000027  b           . + 4 + (0x27 << 2)
    ctx->pc = 0x26505Cu;
    {
        const bool branch_taken_0x26505c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x265060u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26505Cu;
        // 0x265060: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26505c) {
            ctx->pc = 0x2650FCu;
            goto label_2650fc;
        }
    }
    ctx->pc = 0x265064u;
label_265064:
    // 0x265064: 0x12000020  beqz        $s0, . + 4 + (0x20 << 2)
    ctx->pc = 0x265064u;
    {
        const bool branch_taken_0x265064 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x265068u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x265064u;
        // 0x265068: 0x220a82d  daddu       $s5, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x265064) {
            ctx->pc = 0x2650E8u;
            goto label_2650e8;
        }
    }
    ctx->pc = 0x26506Cu;
    // 0x26506c: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x26506Cu;
    {
        const bool branch_taken_0x26506c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x265070u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26506Cu;
        // 0x265070: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26506c) {
            ctx->pc = 0x26508Cu;
            goto label_26508c;
        }
    }
    ctx->pc = 0x265074u;
label_265074:
    // 0x265074: 0x236102b  sltu        $v0, $s1, $s6
    ctx->pc = 0x265074u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 22)) ? 1 : 0);
label_265078:
    // 0x265078: 0x1040001b  beqz        $v0, . + 4 + (0x1B << 2)
    ctx->pc = 0x265078u;
    {
        const bool branch_taken_0x265078 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x265078) {
            ctx->pc = 0x2650E8u;
            goto label_2650e8;
        }
    }
    ctx->pc = 0x265080u;
    // 0x265080: 0xa2300000  sb          $s0, 0x0($s1)
    ctx->pc = 0x265080u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 0), (uint8_t)GPR_U32(ctx, 16));
    // 0x265084: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x265084u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_265088:
    // 0x265088: 0x92630000  lbu         $v1, 0x0($s3)
    ctx->pc = 0x265088u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 0)));
label_26508c:
    // 0x26508c: 0x31600  sll         $v0, $v1, 24
    ctx->pc = 0x26508cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 24));
    // 0x265090: 0x28603  sra         $s0, $v0, 24
    ctx->pc = 0x265090u;
    SET_GPR_S32(ctx, 16, SRA32(GPR_S32(ctx, 2), 24));
    // 0x265094: 0x1600ffac  bnez        $s0, . + 4 + (-0x54 << 2)
    ctx->pc = 0x265094u;
    {
        const bool branch_taken_0x265094 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x265098u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x265094u;
        // 0x265098: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x265094) {
            ctx->pc = 0x264F48u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_264f48;
        }
    }
    ctx->pc = 0x26509Cu;
label_26509c:
    // 0x26509c: 0x2351023  subu        $v0, $s1, $s5
    ctx->pc = 0x26509cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 21)));
    // 0x2650a0: 0x2450ffff  addiu       $s0, $v0, -0x1
    ctx->pc = 0x2650a0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x2650a4: 0x320300c0  andi        $v1, $s0, 0xC0
    ctx->pc = 0x2650a4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)192);
    // 0x2650a8: 0x1460000f  bnez        $v1, . + 4 + (0xF << 2)
    ctx->pc = 0x2650A8u;
    {
        const bool branch_taken_0x2650a8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2650a8) {
            ctx->pc = 0x2650E8u;
            goto label_2650e8;
        }
    }
    ctx->pc = 0x2650B0u;
    // 0x2650b0: 0x2b6102b  sltu        $v0, $s5, $s6
    ctx->pc = 0x2650b0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 21) < (uint64_t)GPR_U64(ctx, 22)) ? 1 : 0);
    // 0x2650b4: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x2650B4u;
    {
        const bool branch_taken_0x2650b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2650b4) {
            ctx->pc = 0x2650E8u;
            goto label_2650e8;
        }
    }
    ctx->pc = 0x2650BCu;
    // 0x2650bc: 0x12000006  beqz        $s0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2650BCu;
    {
        const bool branch_taken_0x2650bc = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2650C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2650BCu;
        // 0x2650c0: 0xa2b00000  sb          $s0, 0x0($s5) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 21), 0), (uint8_t)GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2650bc) {
            ctx->pc = 0x2650D8u;
            goto label_2650d8;
        }
    }
    ctx->pc = 0x2650C4u;
label_2650c4:
    // 0x2650c4: 0x236102b  sltu        $v0, $s1, $s6
    ctx->pc = 0x2650c4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 22)) ? 1 : 0);
    // 0x2650c8: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2650C8u;
    {
        const bool branch_taken_0x2650c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2650c8) {
            ctx->pc = 0x2650E8u;
            goto label_2650e8;
        }
    }
    ctx->pc = 0x2650D0u;
    // 0x2650d0: 0xa2200000  sb          $zero, 0x0($s1)
    ctx->pc = 0x2650d0u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x2650d4: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x2650d4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_2650d8:
    // 0x2650d8: 0x2371023  subu        $v0, $s1, $s7
    ctx->pc = 0x2650d8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 23)));
    // 0x2650dc: 0x28420100  slti        $v0, $v0, 0x100
    ctx->pc = 0x2650dcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)256) ? 1 : 0);
    // 0x2650e0: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x2650E0u;
    {
        const bool branch_taken_0x2650e0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2650e0) {
            ctx->pc = 0x2650E4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2650E0u;
            // 0x2650e4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2650FCu;
            goto label_2650fc;
        }
    }
    ctx->pc = 0x2650E8u;
label_2650e8:
    // 0x2650e8: 0xc0972fa  jal         func_25CBE8
    ctx->pc = 0x2650E8u;
    SET_GPR_U32(ctx, 31, 0x2650F0u);
    ctx->pc = 0x25CBE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25CBE8u, 0x2650E8u, 0x2650F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2650F0u;
label_2650f0:
    // 0x2650f0: 0x2403007a  addiu       $v1, $zero, 0x7A
    ctx->pc = 0x2650f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 122));
    // 0x2650f4: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x2650f4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x2650f8: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x2650f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_2650fc:
    // 0x2650fc: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x2650fcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x265100: 0xdfbe0080  ld          $fp, 0x80($sp)
    ctx->pc = 0x265100u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x265104: 0xdfb70070  ld          $s7, 0x70($sp)
    ctx->pc = 0x265104u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x265108: 0xdfb60060  ld          $s6, 0x60($sp)
    ctx->pc = 0x265108u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x26510c: 0xdfb50050  ld          $s5, 0x50($sp)
    ctx->pc = 0x26510cu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x265110: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x265110u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x265114: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x265114u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x265118: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x265118u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x26511c: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x26511cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x265120: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x265120u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x265124: 0x3e00008  jr          $ra
    ctx->pc = 0x265124u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x265128u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x265124u;
        // 0x265128: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x265124u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x26512Cu;
    // 0x26512c: 0x0  nop
    ctx->pc = 0x26512cu;
    // NOP
    if (ctx->pc == 0x26512cu) { ctx->pc = 0x265130u; }
}
