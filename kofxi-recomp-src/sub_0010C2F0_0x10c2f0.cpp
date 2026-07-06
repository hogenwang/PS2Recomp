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

// Function: sub_0010C2F0
// Address: 0x10c2f0 - 0x10c3d8
void sub_0010C2F0_0x10c2f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0010C2F0_0x10c2f0");
#endif

    switch (ctx->pc) {
        case 0x10c308u: goto label_10c308;
        case 0x10c350u: goto label_10c350;
        case 0x10c374u: goto label_10c374;
        default: break;
    }

    ctx->pc = 0x10c2f0u;

    // 0x10c2f0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x10c2f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x10c2f4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x10c2f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x10c2f8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x10c2f8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10c2fc: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x10c2fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x10c300: 0xc04309e  jal         func_10C278
    ctx->pc = 0x10C300u;
    SET_GPR_U32(ctx, 31, 0x10C308u);
    ctx->pc = 0x10C304u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10C300u;
    // 0x10c304: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10C278u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10C278u, 0x10C300u, 0x10C308u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10C308u;
label_10c308:
    // 0x10c308: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x10c308u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x10c30c: 0x3c061000  lui         $a2, 0x1000
    ctx->pc = 0x10c30cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)4096 << 16));
    // 0x10c310: 0x3442b410  ori         $v0, $v0, 0xB410
    ctx->pc = 0x10c310u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)46096);
    // 0x10c314: 0x34c6b430  ori         $a2, $a2, 0xB430
    ctx->pc = 0x10c314u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)46128);
    // 0x10c318: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x10c318u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x10c31c: 0x3c041000  lui         $a0, 0x1000
    ctx->pc = 0x10c31cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4096 << 16));
    // 0x10c320: 0x3484b420  ori         $a0, $a0, 0xB420
    ctx->pc = 0x10c320u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)46112);
    // 0x10c324: 0x3c051000  lui         $a1, 0x1000
    ctx->pc = 0x10c324u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)4096 << 16));
    // 0x10c328: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x10c328u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x10c32c: 0x34a5b400  ori         $a1, $a1, 0xB400
    ctx->pc = 0x10c32cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)46080);
    // 0x10c330: 0x3c071000  lui         $a3, 0x1000
    ctx->pc = 0x10c330u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)4096 << 16));
    // 0x10c334: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x10c334u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x10c338: 0x34e72010  ori         $a3, $a3, 0x2010
    ctx->pc = 0x10c338u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)8208);
    // 0x10c33c: 0xae030004  sw          $v1, 0x4($s0)
    ctx->pc = 0x10c33cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 3));
    // 0x10c340: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x10c340u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x10c344: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x10c344u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
    // 0x10c348: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x10c348u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x10c34c: 0xae03000c  sw          $v1, 0xC($s0)
    ctx->pc = 0x10c34cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 3));
label_10c350:
    // 0x10c350: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x10c350u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x10c354: 0x304200f0  andi        $v0, $v0, 0xF0
    ctx->pc = 0x10c354u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)240);
    // 0x10c358: 0x0  nop
    ctx->pc = 0x10c358u;
    // NOP
    // 0x10c35c: 0x0  nop
    ctx->pc = 0x10c35cu;
    // NOP
    // 0x10c360: 0x0  nop
    ctx->pc = 0x10c360u;
    // NOP
    // 0x10c364: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x10C364u;
    {
        const bool branch_taken_0x10c364 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x10c364) {
            ctx->pc = 0x10C350u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_10c350;
        }
    }
    ctx->pc = 0x10C36Cu;
    // 0x10c36c: 0xc043080  jal         func_10C200
    ctx->pc = 0x10C36Cu;
    SET_GPR_U32(ctx, 31, 0x10C374u);
    ctx->pc = 0x10C370u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10C36Cu;
    // 0x10c370: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10C200u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10C200u, 0x10C36Cu, 0x10C374u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10C374u;
label_10c374:
    // 0x10c374: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x10c374u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x10c378: 0x3c071000  lui         $a3, 0x1000
    ctx->pc = 0x10c378u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)4096 << 16));
    // 0x10c37c: 0x3442b010  ori         $v0, $v0, 0xB010
    ctx->pc = 0x10c37cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)45072);
    // 0x10c380: 0x34e7b020  ori         $a3, $a3, 0xB020
    ctx->pc = 0x10c380u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)45088);
    // 0x10c384: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x10c384u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x10c388: 0x3c051000  lui         $a1, 0x1000
    ctx->pc = 0x10c388u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)4096 << 16));
    // 0x10c38c: 0x34a5b000  ori         $a1, $a1, 0xB000
    ctx->pc = 0x10c38cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)45056);
    // 0x10c390: 0x3c061000  lui         $a2, 0x1000
    ctx->pc = 0x10c390u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)4096 << 16));
    // 0x10c394: 0xae030010  sw          $v1, 0x10($s0)
    ctx->pc = 0x10c394u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 3));
    // 0x10c398: 0x34c62020  ori         $a2, $a2, 0x2020
    ctx->pc = 0x10c398u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)8224);
    // 0x10c39c: 0x3c041000  lui         $a0, 0x1000
    ctx->pc = 0x10c39cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4096 << 16));
    // 0x10c3a0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x10c3a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x10c3a4: 0x8ce30000  lw          $v1, 0x0($a3)
    ctx->pc = 0x10c3a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x10c3a8: 0x34842010  ori         $a0, $a0, 0x2010
    ctx->pc = 0x10c3a8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)8208);
    // 0x10c3ac: 0xae030014  sw          $v1, 0x14($s0)
    ctx->pc = 0x10c3acu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 3));
    // 0x10c3b0: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x10c3b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x10c3b4: 0xae020018  sw          $v0, 0x18($s0)
    ctx->pc = 0x10c3b4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 2));
    // 0x10c3b8: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x10c3b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x10c3bc: 0xae03001c  sw          $v1, 0x1C($s0)
    ctx->pc = 0x10c3bcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 3));
    // 0x10c3c0: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x10c3c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x10c3c4: 0xae020020  sw          $v0, 0x20($s0)
    ctx->pc = 0x10c3c4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 2));
    // 0x10c3c8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x10c3c8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x10c3cc: 0x3e00008  jr          $ra
    ctx->pc = 0x10C3CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10C3D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10C3CCu;
        // 0x10c3d0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10C3CCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10C3D4u;
    // 0x10c3d4: 0x0  nop
    ctx->pc = 0x10c3d4u;
    // NOP
}
