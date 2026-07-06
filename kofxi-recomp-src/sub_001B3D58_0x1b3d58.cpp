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

// Function: sub_001B3D58
// Address: 0x1b3d58 - 0x1b3e28
void sub_001B3D58_0x1b3d58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001B3D58_0x1b3d58");
#endif

    switch (ctx->pc) {
        case 0x1b3da8u: goto label_1b3da8;
        case 0x1b3db8u: goto label_1b3db8;
        case 0x1b3dc0u: goto label_1b3dc0;
        case 0x1b3dc8u: goto label_1b3dc8;
        default: break;
    }

    ctx->pc = 0x1b3d58u;

    // 0x1b3d58: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1b3d58u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1b3d5c: 0xffb60030  sd          $s6, 0x30($sp)
    ctx->pc = 0x1b3d5cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 22));
    // 0x1b3d60: 0x3c160037  lui         $s6, 0x37
    ctx->pc = 0x1b3d60u;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)55 << 16));
    // 0x1b3d64: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1b3d64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1b3d68: 0x26c330b0  addiu       $v1, $s6, 0x30B0
    ctx->pc = 0x1b3d68u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 22), 12464));
    // 0x1b3d6c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1b3d6cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1b3d70: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1b3d70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1b3d74: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x1b3d74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x1b3d78: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x1b3d78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x1b3d7c: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x1b3d7cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x1b3d80: 0xffbf0038  sd          $ra, 0x38($sp)
    ctx->pc = 0x1b3d80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 31));
    // 0x1b3d84: 0xdc620000  ld          $v0, 0x0($v1)
    ctx->pc = 0x1b3d84u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1b3d88: 0x14400015  bnez        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x1B3D88u;
    {
        const bool branch_taken_0x1b3d88 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B3D8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B3D88u;
        // 0x1b3d8c: 0x3c150037  lui         $s5, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)55 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b3d88) {
            ctx->pc = 0x1B3DE0u;
            goto label_1b3de0;
        }
    }
    ctx->pc = 0x1B3D90u;
    // 0x1b3d90: 0x3c140037  lui         $s4, 0x37
    ctx->pc = 0x1b3d90u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)55 << 16));
    // 0x1b3d94: 0x60982d  daddu       $s3, $v1, $zero
    ctx->pc = 0x1b3d94u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b3d98: 0x26b230a8  addiu       $s2, $s5, 0x30A8
    ctx->pc = 0x1b3d98u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 21), 12456));
    // 0x1b3d9c: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x1b3d9cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b3da0: 0x26903088  addiu       $s0, $s4, 0x3088
    ctx->pc = 0x1b3da0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 20), 12424));
    // 0x1b3da4: 0x0  nop
    ctx->pc = 0x1b3da4u;
    // NOP
label_1b3da8:
    // 0x1b3da8: 0xfe510000  sd          $s1, 0x0($s2)
    ctx->pc = 0x1b3da8u;
    WRITE64(ADD32(GPR_U32(ctx, 18), 0), GPR_U64(ctx, 17));
    // 0x1b3dac: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1b3dacu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b3db0: 0xc0432bc  jal         func_10CAF0
    ctx->pc = 0x1B3DB0u;
    SET_GPR_U32(ctx, 31, 0x1B3DB8u);
    ctx->pc = 0x1B3DB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B3DB0u;
    // 0x1b3db4: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10CAF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10CAF0u, 0x1B3DB0u, 0x1B3DB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B3DB8u;
label_1b3db8:
    // 0x1b3db8: 0xc0432e4  jal         func_10CB90
    ctx->pc = 0x1B3DB8u;
    SET_GPR_U32(ctx, 31, 0x1B3DC0u);
    ctx->pc = 0x1B3DBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B3DB8u;
    // 0x1b3dbc: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10CB90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10CB90u, 0x1B3DB8u, 0x1B3DC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B3DC0u;
label_1b3dc0:
    // 0x1b3dc0: 0xc06cc66  jal         func_1B3198
    ctx->pc = 0x1B3DC0u;
    SET_GPR_U32(ctx, 31, 0x1B3DC8u);
    ctx->pc = 0x1B3DC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B3DC0u;
    // 0x1b3dc4: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B3198u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B3198u, 0x1B3DC0u, 0x1B3DC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B3DC8u;
label_1b3dc8:
    // 0x1b3dc8: 0xde630000  ld          $v1, 0x0($s3)
    ctx->pc = 0x1b3dc8u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x1b3dcc: 0x1060fff6  beqz        $v1, . + 4 + (-0xA << 2)
    ctx->pc = 0x1B3DCCu;
    {
        const bool branch_taken_0x1b3dcc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B3DD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B3DCCu;
        // 0x1b3dd0: 0x26c230b0  addiu       $v0, $s6, 0x30B0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), 12464));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b3dcc) {
            ctx->pc = 0x1B3DA8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1b3da8;
        }
    }
    ctx->pc = 0x1B3DD4u;
    // 0x1b3dd4: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x1B3DD4u;
    {
        const bool branch_taken_0x1b3dd4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B3DD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B3DD4u;
        // 0x1b3dd8: 0xdfb60030  ld          $s6, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b3dd4) {
            ctx->pc = 0x1B3DECu;
            goto label_1b3dec;
        }
    }
    ctx->pc = 0x1B3DDCu;
    // 0x1b3ddc: 0x0  nop
    ctx->pc = 0x1b3ddcu;
    // NOP
label_1b3de0:
    // 0x1b3de0: 0x3c140037  lui         $s4, 0x37
    ctx->pc = 0x1b3de0u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)55 << 16));
    // 0x1b3de4: 0x26c230b0  addiu       $v0, $s6, 0x30B0
    ctx->pc = 0x1b3de4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), 12464));
    // 0x1b3de8: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x1b3de8u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_1b3dec:
    // 0x1b3dec: 0x26a330a8  addiu       $v1, $s5, 0x30A8
    ctx->pc = 0x1b3decu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 21), 12456));
    // 0x1b3df0: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x1b3df0u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1b3df4: 0x26843088  addiu       $a0, $s4, 0x3088
    ctx->pc = 0x1b3df4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 12424));
    // 0x1b3df8: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x1b3df8u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1b3dfc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1b3dfcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b3e00: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1b3e00u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1b3e04: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1b3e04u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b3e08: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1b3e08u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1b3e0c: 0xdfbf0038  ld          $ra, 0x38($sp)
    ctx->pc = 0x1b3e0cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1b3e10: 0xfc400000  sd          $zero, 0x0($v0)
    ctx->pc = 0x1b3e10u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 0));
    // 0x1b3e14: 0xfc600000  sd          $zero, 0x0($v1)
    ctx->pc = 0x1b3e14u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 0), GPR_U64(ctx, 0));
    // 0x1b3e18: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x1b3e18u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
    // 0x1b3e1c: 0x3e00008  jr          $ra
    ctx->pc = 0x1B3E1Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B3E20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B3E1Cu;
        // 0x1b3e20: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B3E1Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B3E24u;
    // 0x1b3e24: 0x0  nop
    ctx->pc = 0x1b3e24u;
    // NOP
    if (ctx->pc == 0x1b3e24u) { ctx->pc = 0x1b3e28u; }
}
