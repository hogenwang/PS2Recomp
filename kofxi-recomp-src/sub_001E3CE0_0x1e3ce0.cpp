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

// Function: sub_001E3CE0
// Address: 0x1e3ce0 - 0x1e3db0
void sub_001E3CE0_0x1e3ce0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001E3CE0_0x1e3ce0");
#endif

    switch (ctx->pc) {
        case 0x1e3d34u: goto label_1e3d34;
        case 0x1e3d50u: goto label_1e3d50;
        case 0x1e3d6cu: goto label_1e3d6c;
        case 0x1e3d80u: goto label_1e3d80;
        case 0x1e3d94u: goto label_1e3d94;
        default: break;
    }

    ctx->pc = 0x1e3ce0u;

    // 0x1e3ce0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1e3ce0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1e3ce4: 0x80402d  daddu       $t0, $a0, $zero
    ctx->pc = 0x1e3ce4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e3ce8: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x1e3ce8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x1e3cec: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x1e3cecu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e3cf0: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x1e3cf0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    // 0x1e3cf4: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x1e3cf4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1e3cf8: 0xffb10028  sd          $s1, 0x28($sp)
    ctx->pc = 0x1e3cf8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 17));
    // 0x1e3cfc: 0x26440004  addiu       $a0, $s2, 0x4
    ctx->pc = 0x1e3cfcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
    // 0x1e3d00: 0xffbf0038  sd          $ra, 0x38($sp)
    ctx->pc = 0x1e3d00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 31));
    // 0x1e3d04: 0x8d110010  lw          $s1, 0x10($t0)
    ctx->pc = 0x1e3d04u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 16)));
    // 0x1e3d08: 0x8d09000c  lw          $t1, 0xC($t0)
    ctx->pc = 0x1e3d08u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 12)));
    // 0x1e3d0c: 0x8d020008  lw          $v0, 0x8($t0)
    ctx->pc = 0x1e3d0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 8)));
    // 0x1e3d10: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x1e3d10u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e3d14: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x1e3d14u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e3d18: 0x120282d  daddu       $a1, $t1, $zero
    ctx->pc = 0x1e3d18u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e3d1c: 0xae490044  sw          $t1, 0x44($s2)
    ctx->pc = 0x1e3d1cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 68), GPR_U32(ctx, 9));
    // 0x1e3d20: 0x10430007  beq         $v0, $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x1E3D20u;
    {
        const bool branch_taken_0x1e3d20 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x1E3D24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E3D20u;
        // 0x1e3d24: 0xae510048  sw          $s1, 0x48($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 72), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e3d20) {
            ctx->pc = 0x1E3D40u;
            goto label_1e3d40;
        }
    }
    ctx->pc = 0x1E3D28u;
    // 0x1e3d28: 0x8d050000  lw          $a1, 0x0($t0)
    ctx->pc = 0x1e3d28u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x1e3d2c: 0xc078f70  jal         func_1E3DC0
    ctx->pc = 0x1E3D2Cu;
    SET_GPR_U32(ctx, 31, 0x1E3D34u);
    ctx->pc = 0x1E3D30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E3D2Cu;
    // 0x1e3d30: 0x120302d  daddu       $a2, $t1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E3DC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E3DC0u, 0x1E3D2Cu, 0x1E3D34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E3D34u;
label_1e3d34:
    // 0x1e3d34: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x1E3D34u;
    {
        const bool branch_taken_0x1e3d34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E3D38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E3D34u;
        // 0x1e3d38: 0xdfb00020  ld          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e3d34) {
            ctx->pc = 0x1E3D98u;
            goto label_1e3d98;
        }
    }
    ctx->pc = 0x1E3D3Cu;
    // 0x1e3d3c: 0x0  nop
    ctx->pc = 0x1e3d3cu;
    // NOP
label_1e3d40:
    // 0x1e3d40: 0x8d040000  lw          $a0, 0x0($t0)
    ctx->pc = 0x1e3d40u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x1e3d44: 0x3a0382d  daddu       $a3, $sp, $zero
    ctx->pc = 0x1e3d44u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e3d48: 0xc077e3e  jal         func_1DF8F8
    ctx->pc = 0x1E3D48u;
    SET_GPR_U32(ctx, 31, 0x1E3D50u);
    ctx->pc = 0x1E3D4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E3D48u;
    // 0x1e3d4c: 0x1187c2  srl         $s0, $s1, 31 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)SRL32(GPR_U32(ctx, 17), 31));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DF8F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DF8F8u, 0x1E3D48u, 0x1E3D50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E3D50u;
label_1e3d50:
    // 0x1e3d50: 0x26440004  addiu       $a0, $s2, 0x4
    ctx->pc = 0x1e3d50u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
    // 0x1e3d54: 0x8fa50000  lw          $a1, 0x0($sp)
    ctx->pc = 0x1e3d54u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e3d58: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x1e3d58u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e3d5c: 0x8fa6000c  lw          $a2, 0xC($sp)
    ctx->pc = 0x1e3d5cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
    // 0x1e3d60: 0x2308021  addu        $s0, $s1, $s0
    ctx->pc = 0x1e3d60u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 16)));
    // 0x1e3d64: 0xc078f70  jal         func_1E3DC0
    ctx->pc = 0x1E3D64u;
    SET_GPR_U32(ctx, 31, 0x1E3D6Cu);
    ctx->pc = 0x1E3D68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E3D64u;
    // 0x1e3d68: 0x108043  sra         $s0, $s0, 1 (Delay Slot)
    SET_GPR_S32(ctx, 16, SRA32(GPR_S32(ctx, 16), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E3DC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E3DC0u, 0x1E3D64u, 0x1E3D6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E3D6Cu;
label_1e3d6c:
    // 0x1e3d6c: 0x26440014  addiu       $a0, $s2, 0x14
    ctx->pc = 0x1e3d6cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 20));
    // 0x1e3d70: 0x8fa50004  lw          $a1, 0x4($sp)
    ctx->pc = 0x1e3d70u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x1e3d74: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x1e3d74u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e3d78: 0xc078f70  jal         func_1E3DC0
    ctx->pc = 0x1E3D78u;
    SET_GPR_U32(ctx, 31, 0x1E3D80u);
    ctx->pc = 0x1E3D7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E3D78u;
    // 0x1e3d7c: 0x8fa60010  lw          $a2, 0x10($sp) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E3DC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E3DC0u, 0x1E3D78u, 0x1E3D80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E3D80u;
label_1e3d80:
    // 0x1e3d80: 0x26440024  addiu       $a0, $s2, 0x24
    ctx->pc = 0x1e3d80u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 36));
    // 0x1e3d84: 0x8fa50008  lw          $a1, 0x8($sp)
    ctx->pc = 0x1e3d84u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1e3d88: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x1e3d88u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e3d8c: 0xc078f70  jal         func_1E3DC0
    ctx->pc = 0x1E3D8Cu;
    SET_GPR_U32(ctx, 31, 0x1E3D94u);
    ctx->pc = 0x1E3D90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E3D8Cu;
    // 0x1e3d90: 0x8fa60014  lw          $a2, 0x14($sp) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E3DC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E3DC0u, 0x1E3D8Cu, 0x1E3D94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E3D94u;
label_1e3d94:
    // 0x1e3d94: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x1e3d94u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_1e3d98:
    // 0x1e3d98: 0xdfb10028  ld          $s1, 0x28($sp)
    ctx->pc = 0x1e3d98u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1e3d9c: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x1e3d9cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1e3da0: 0xdfbf0038  ld          $ra, 0x38($sp)
    ctx->pc = 0x1e3da0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1e3da4: 0x3e00008  jr          $ra
    ctx->pc = 0x1E3DA4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E3DA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E3DA4u;
        // 0x1e3da8: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E3DA4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E3DACu;
    // 0x1e3dac: 0x0  nop
    ctx->pc = 0x1e3dacu;
    // NOP
    if (ctx->pc == 0x1e3dacu) { ctx->pc = 0x1e3db0u; }
}
