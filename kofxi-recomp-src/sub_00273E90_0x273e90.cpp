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

// Function: sub_00273E90
// Address: 0x273e90 - 0x2741e8
void sub_00273E90_0x273e90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00273E90_0x273e90");
#endif

    switch (ctx->pc) {
        case 0x273ec0u: goto label_273ec0;
        case 0x273f50u: goto label_273f50;
        case 0x273ff4u: goto label_273ff4;
        case 0x274070u: goto label_274070;
        case 0x274084u: goto label_274084;
        case 0x2740b0u: goto label_2740b0;
        case 0x2740fcu: goto label_2740fc;
        case 0x274198u: goto label_274198;
        case 0x2741b4u: goto label_2741b4;
        case 0x2741bcu: goto label_2741bc;
        case 0x2741c4u: goto label_2741c4;
        default: break;
    }

    ctx->pc = 0x273e90u;

    // 0x273e90: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x273e90u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x273e94: 0x2402fff5  addiu       $v0, $zero, -0xB
    ctx->pc = 0x273e94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967285));
    // 0x273e98: 0x10c00012  beqz        $a2, . + 4 + (0x12 << 2)
    ctx->pc = 0x273E98u;
    {
        const bool branch_taken_0x273e98 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x273E9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x273E98u;
        // 0x273e9c: 0x8cc8000c  lw          $t0, 0xC($a2) (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x273e98) {
            ctx->pc = 0x273EE4u;
            goto label_273ee4;
        }
    }
    ctx->pc = 0x273EA0u;
    // 0x273ea0: 0x3c04003a  lui         $a0, 0x3A
    ctx->pc = 0x273ea0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)58 << 16));
    // 0x273ea4: 0x8c832d74  lw          $v1, 0x2D74($a0)
    ctx->pc = 0x273ea4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 11636)));
    // 0x273ea8: 0x1060000e  beqz        $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x273EA8u;
    {
        const bool branch_taken_0x273ea8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x273EACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x273EA8u;
        // 0x273eac: 0x2402fff8  addiu       $v0, $zero, -0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967288));
        ctx->in_delay_slot = false;
        if (branch_taken_0x273ea8) {
            ctx->pc = 0x273EE4u;
            goto label_273ee4;
        }
    }
    ctx->pc = 0x273EB0u;
    // 0x273eb0: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x273eb0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x273eb4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x273eb4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x273eb8: 0x24473478  addiu       $a3, $v0, 0x3478
    ctx->pc = 0x273eb8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 13432));
    // 0x273ebc: 0x0  nop
    ctx->pc = 0x273ebcu;
    // NOP
label_273ec0:
    // 0x273ec0: 0xe51021  addu        $v0, $a3, $a1
    ctx->pc = 0x273ec0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 5)));
    // 0x273ec4: 0xc52021  addu        $a0, $a2, $a1
    ctx->pc = 0x273ec4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x273ec8: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x273ec8u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x273ecc: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x273eccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x273ed0: 0x2ca20010  sltiu       $v0, $a1, 0x10
    ctx->pc = 0x273ed0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)16) ? 1 : 0);
    // 0x273ed4: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x273ED4u;
    {
        const bool branch_taken_0x273ed4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x273ED8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x273ED4u;
        // 0x273ed8: 0xa0830000  sb          $v1, 0x0($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x273ed4) {
            ctx->pc = 0x273EC0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_273ec0;
        }
    }
    ctx->pc = 0x273EDCu;
    // 0x273edc: 0xacc8000c  sw          $t0, 0xC($a2)
    ctx->pc = 0x273edcu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 12), GPR_U32(ctx, 8));
    // 0x273ee0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x273ee0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_273ee4:
    // 0x273ee4: 0x3e00008  jr          $ra
    ctx->pc = 0x273EE4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x273EE4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x273EECu;
    // 0x273eec: 0x0  nop
    ctx->pc = 0x273eecu;
    // NOP
    // 0x273ef0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x273ef0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x273ef4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x273ef4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x273ef8: 0x30d1ffff  andi        $s1, $a2, 0xFFFF
    ctx->pc = 0x273ef8u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)65535);
    // 0x273efc: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x273efcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x273f00: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x273f00u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x273f04: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x273f04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x273f08: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x273F08u;
    {
        const bool branch_taken_0x273f08 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x273F0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x273F08u;
        // 0x273f0c: 0xffbf0018  sd          $ra, 0x18($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x273f08) {
            ctx->pc = 0x273F18u;
            goto label_273f18;
        }
    }
    ctx->pc = 0x273F10u;
    // 0x273f10: 0x16200003  bnez        $s1, . + 4 + (0x3 << 2)
    ctx->pc = 0x273F10u;
    {
        const bool branch_taken_0x273f10 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x273F14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x273F10u;
        // 0x273f14: 0x3c04003a  lui         $a0, 0x3A (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)58 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x273f10) {
            ctx->pc = 0x273F20u;
            goto label_273f20;
        }
    }
    ctx->pc = 0x273F18u;
label_273f18:
    // 0x273f18: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x273F18u;
    {
        const bool branch_taken_0x273f18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x273F1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x273F18u;
        // 0x273f1c: 0x2402fff5  addiu       $v0, $zero, -0xB (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967285));
        ctx->in_delay_slot = false;
        if (branch_taken_0x273f18) {
            ctx->pc = 0x273F70u;
            goto label_273f70;
        }
    }
    ctx->pc = 0x273F20u;
label_273f20:
    // 0x273f20: 0x8c832d74  lw          $v1, 0x2D74($a0)
    ctx->pc = 0x273f20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 11636)));
    // 0x273f24: 0x10600012  beqz        $v1, . + 4 + (0x12 << 2)
    ctx->pc = 0x273F24u;
    {
        const bool branch_taken_0x273f24 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x273F28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x273F24u;
        // 0x273f28: 0x2402fff8  addiu       $v0, $zero, -0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967288));
        ctx->in_delay_slot = false;
        if (branch_taken_0x273f24) {
            ctx->pc = 0x273F70u;
            goto label_273f70;
        }
    }
    ctx->pc = 0x273F2Cu;
    // 0x273f2c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x273f2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x273f30: 0x5642000d  bnel        $s2, $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x273F30u;
    {
        const bool branch_taken_0x273f30 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 2));
        if (branch_taken_0x273f30) {
            ctx->pc = 0x273F34u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x273F30u;
            // 0x273f34: 0x3c02003a  lui         $v0, 0x3A (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)58 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x273F68u;
            goto label_273f68;
        }
    }
    ctx->pc = 0x273F38u;
    // 0x273f38: 0x3c10003a  lui         $s0, 0x3A
    ctx->pc = 0x273f38u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)58 << 16));
    // 0x273f3c: 0x24060200  addiu       $a2, $zero, 0x200
    ctx->pc = 0x273f3cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
    // 0x273f40: 0x26102f7c  addiu       $s0, $s0, 0x2F7C
    ctx->pc = 0x273f40u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 12156));
    // 0x273f44: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x273f44u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x273f48: 0xc04a966  jal         func_12A598
    ctx->pc = 0x273F48u;
    SET_GPR_U32(ctx, 31, 0x273F50u);
    ctx->pc = 0x273F4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x273F48u;
    // 0x273f4c: 0x2610fdfc  addiu       $s0, $s0, -0x204 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294966780));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12A598u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12A598u, 0x273F48u, 0x273F50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x273F50u;
label_273f50:
    // 0x273f50: 0x82030403  lb          $v1, 0x403($s0)
    ctx->pc = 0x273f50u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 1027)));
    // 0x273f54: 0x2402fffb  addiu       $v0, $zero, -0x5
    ctx->pc = 0x273f54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967291));
    // 0x273f58: 0x14600005  bnez        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x273F58u;
    {
        const bool branch_taken_0x273f58 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x273F5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x273F58u;
        // 0x273f5c: 0xa6110408  sh          $s1, 0x408($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 1032), (uint16_t)GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x273f58) {
            ctx->pc = 0x273F70u;
            goto label_273f70;
        }
    }
    ctx->pc = 0x273F60u;
    // 0x273f60: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x273F60u;
    {
        const bool branch_taken_0x273f60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x273F64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x273F60u;
        // 0x273f64: 0xae120404  sw          $s2, 0x404($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 1028), GPR_U32(ctx, 18));
        ctx->in_delay_slot = false;
        if (branch_taken_0x273f60) {
            ctx->pc = 0x273F6Cu;
            goto label_273f6c;
        }
    }
    ctx->pc = 0x273F68u;
label_273f68:
    // 0x273f68: 0xac40317c  sw          $zero, 0x317C($v0)
    ctx->pc = 0x273f68u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12668), GPR_U32(ctx, 0));
label_273f6c:
    // 0x273f6c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x273f6cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_273f70:
    // 0x273f70: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x273f70u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x273f74: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x273f74u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x273f78: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x273f78u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x273f7c: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x273f7cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x273f80: 0x3e00008  jr          $ra
    ctx->pc = 0x273F80u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x273F84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x273F80u;
        // 0x273f84: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x273F80u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x273F88u;
    // 0x273f88: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x273f88u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x273f8c: 0xa0482d  daddu       $t1, $a1, $zero
    ctx->pc = 0x273f8cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x273f90: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x273f90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x273f94: 0xe0882d  daddu       $s1, $a3, $zero
    ctx->pc = 0x273f94u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x273f98: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x273f98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x273f9c: 0x80402d  daddu       $t0, $a0, $zero
    ctx->pc = 0x273f9cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x273fa0: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x273fa0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x273fa4: 0x11200005  beqz        $t1, . + 4 + (0x5 << 2)
    ctx->pc = 0x273FA4u;
    {
        const bool branch_taken_0x273fa4 = (GPR_U64(ctx, 9) == GPR_U64(ctx, 0));
        ctx->pc = 0x273FA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x273FA4u;
        // 0x273fa8: 0xc0102d  daddu       $v0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x273fa4) {
            ctx->pc = 0x273FBCu;
            goto label_273fbc;
        }
    }
    ctx->pc = 0x273FACu;
    // 0x273fac: 0x52200016  beql        $s1, $zero, . + 4 + (0x16 << 2)
    ctx->pc = 0x273FACu;
    {
        const bool branch_taken_0x273fac = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x273fac) {
            ctx->pc = 0x273FB0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x273FACu;
            // 0x273fb0: 0x2402fff5  addiu       $v0, $zero, -0xB (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967285));
            ctx->in_delay_slot = false;
            ctx->pc = 0x274008u;
            goto label_274008;
        }
    }
    ctx->pc = 0x273FB4u;
    // 0x273fb4: 0x1c400004  bgtz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x273FB4u;
    {
        const bool branch_taken_0x273fb4 = (GPR_S32(ctx, 2) > 0);
        ctx->pc = 0x273FB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x273FB4u;
        // 0x273fb8: 0x3c04003a  lui         $a0, 0x3A (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)58 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x273fb4) {
            ctx->pc = 0x273FC8u;
            goto label_273fc8;
        }
    }
    ctx->pc = 0x273FBCu;
label_273fbc:
    // 0x273fbc: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x273FBCu;
    {
        const bool branch_taken_0x273fbc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x273FC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x273FBCu;
        // 0x273fc0: 0x2402fff5  addiu       $v0, $zero, -0xB (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967285));
        ctx->in_delay_slot = false;
        if (branch_taken_0x273fbc) {
            ctx->pc = 0x274008u;
            goto label_274008;
        }
    }
    ctx->pc = 0x273FC4u;
    // 0x273fc4: 0x0  nop
    ctx->pc = 0x273fc4u;
    // NOP
label_273fc8:
    // 0x273fc8: 0x8c832d74  lw          $v1, 0x2D74($a0)
    ctx->pc = 0x273fc8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 11636)));
    // 0x273fcc: 0x1060000e  beqz        $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x273FCCu;
    {
        const bool branch_taken_0x273fcc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x273FD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x273FCCu;
        // 0x273fd0: 0x2402fff8  addiu       $v0, $zero, -0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967288));
        ctx->in_delay_slot = false;
        if (branch_taken_0x273fcc) {
            ctx->pc = 0x274008u;
            goto label_274008;
        }
    }
    ctx->pc = 0x273FD4u;
    // 0x273fd4: 0x3c02003a  lui         $v0, 0x3A
    ctx->pc = 0x273fd4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)58 << 16));
    // 0x273fd8: 0x24502d78  addiu       $s0, $v0, 0x2D78
    ctx->pc = 0x273fd8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 11640));
    // 0x273fdc: 0x8e020404  lw          $v0, 0x404($s0)
    ctx->pc = 0x273fdcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1028)));
    // 0x273fe0: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x273FE0u;
    {
        const bool branch_taken_0x273fe0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x273FE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x273FE0u;
        // 0x273fe4: 0x26050204  addiu       $a1, $s0, 0x204 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 516));
        ctx->in_delay_slot = false;
        if (branch_taken_0x273fe0) {
            ctx->pc = 0x274000u;
            goto label_274000;
        }
    }
    ctx->pc = 0x273FE8u;
    // 0x273fe8: 0xad020000  sw          $v0, 0x0($t0)
    ctx->pc = 0x273fe8u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 2));
    // 0x273fec: 0xc04a966  jal         func_12A598
    ctx->pc = 0x273FECu;
    SET_GPR_U32(ctx, 31, 0x273FF4u);
    ctx->pc = 0x273FF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x273FECu;
    // 0x273ff0: 0x120202d  daddu       $a0, $t1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12A598u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12A598u, 0x273FECu, 0x273FF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x273FF4u;
label_273ff4:
    // 0x273ff4: 0x96030408  lhu         $v1, 0x408($s0)
    ctx->pc = 0x273ff4u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 1032)));
    // 0x273ff8: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x273FF8u;
    {
        const bool branch_taken_0x273ff8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x273FFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x273FF8u;
        // 0x273ffc: 0xa6230000  sh          $v1, 0x0($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 0), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x273ff8) {
            ctx->pc = 0x274004u;
            goto label_274004;
        }
    }
    ctx->pc = 0x274000u;
label_274000:
    // 0x274000: 0xad000000  sw          $zero, 0x0($t0)
    ctx->pc = 0x274000u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 0));
label_274004:
    // 0x274004: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x274004u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_274008:
    // 0x274008: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x274008u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x27400c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x27400cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x274010: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x274010u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x274014: 0x3e00008  jr          $ra
    ctx->pc = 0x274014u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x274018u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x274014u;
        // 0x274018: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x274014u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x27401Cu;
    // 0x27401c: 0x0  nop
    ctx->pc = 0x27401cu;
    // NOP
    // 0x274020: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x274020u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x274024: 0x2402fff5  addiu       $v0, $zero, -0xB
    ctx->pc = 0x274024u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967285));
    // 0x274028: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x274028u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x27402c: 0x3c10003a  lui         $s0, 0x3A
    ctx->pc = 0x27402cu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)58 << 16));
    // 0x274030: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x274030u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x274034: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x274034u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x274038: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x274038u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x27403c: 0x26122d78  addiu       $s2, $s0, 0x2D78
    ctx->pc = 0x27403cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 16), 11640));
    // 0x274040: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x274040u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x274044: 0x3c130001  lui         $s3, 0x1
    ctx->pc = 0x274044u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)1 << 16));
    // 0x274048: 0x36730700  ori         $s3, $s3, 0x700
    ctx->pc = 0x274048u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) | (uint64_t)(uint16_t)1792);
    // 0x27404c: 0x2729821  addu        $s3, $s3, $s2
    ctx->pc = 0x27404cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 18)));
    // 0x274050: 0x1220005d  beqz        $s1, . + 4 + (0x5D << 2)
    ctx->pc = 0x274050u;
    {
        const bool branch_taken_0x274050 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x274054u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x274050u;
        // 0x274054: 0xffbf0020  sd          $ra, 0x20($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x274050) {
            ctx->pc = 0x2741C8u;
            goto label_2741c8;
        }
    }
    ctx->pc = 0x274058u;
    // 0x274058: 0x3c04003a  lui         $a0, 0x3A
    ctx->pc = 0x274058u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)58 << 16));
    // 0x27405c: 0x8c832d74  lw          $v1, 0x2D74($a0)
    ctx->pc = 0x27405cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 11636)));
    // 0x274060: 0x10600059  beqz        $v1, . + 4 + (0x59 << 2)
    ctx->pc = 0x274060u;
    {
        const bool branch_taken_0x274060 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x274064u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x274060u;
        // 0x274064: 0x2402fff8  addiu       $v0, $zero, -0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967288));
        ctx->in_delay_slot = false;
        if (branch_taken_0x274060) {
            ctx->pc = 0x2741C8u;
            goto label_2741c8;
        }
    }
    ctx->pc = 0x274068u;
    // 0x274068: 0xc0b6c32  jal         func_2DB0C8
    ctx->pc = 0x274068u;
    SET_GPR_U32(ctx, 31, 0x274070u);
    ctx->pc = 0x2DB0C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB0C8u, 0x274068u, 0x274070u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x274070u;
label_274070:
    // 0x274070: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x274070u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x274074: 0x1860000a  blez        $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x274074u;
    {
        const bool branch_taken_0x274074 = (GPR_S32(ctx, 3) <= 0);
        if (branch_taken_0x274074) {
            ctx->pc = 0x2740A0u;
            goto label_2740a0;
        }
    }
    ctx->pc = 0x27407Cu;
    // 0x27407c: 0xc0b6ce0  jal         func_2DB380
    ctx->pc = 0x27407Cu;
    SET_GPR_U32(ctx, 31, 0x274084u);
    ctx->pc = 0x2DB380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB380u, 0x27407Cu, 0x274084u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x274084u;
label_274084:
    // 0x274084: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x274084u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x274088: 0x4620050  bltzl       $v1, . + 4 + (0x50 << 2)
    ctx->pc = 0x274088u;
    {
        const bool branch_taken_0x274088 = (GPR_S32(ctx, 3) < 0);
        if (branch_taken_0x274088) {
            ctx->pc = 0x27408Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x274088u;
            // 0x27408c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2741CCu;
            goto label_2741cc;
        }
    }
    ctx->pc = 0x274090u;
    // 0x274090: 0x14600005  bnez        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x274090u;
    {
        const bool branch_taken_0x274090 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x274090) {
            ctx->pc = 0x2740A8u;
            goto label_2740a8;
        }
    }
    ctx->pc = 0x274098u;
    // 0x274098: 0x1000004b  b           . + 4 + (0x4B << 2)
    ctx->pc = 0x274098u;
    {
        const bool branch_taken_0x274098 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27409Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x274098u;
        // 0x27409c: 0x2402fe6c  addiu       $v0, $zero, -0x194 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966892));
        ctx->in_delay_slot = false;
        if (branch_taken_0x274098) {
            ctx->pc = 0x2741C8u;
            goto label_2741c8;
        }
    }
    ctx->pc = 0x2740A0u;
label_2740a0:
    // 0x2740a0: 0x462004a  bltzl       $v1, . + 4 + (0x4A << 2)
    ctx->pc = 0x2740A0u;
    {
        const bool branch_taken_0x2740a0 = (GPR_S32(ctx, 3) < 0);
        if (branch_taken_0x2740a0) {
            ctx->pc = 0x2740A4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2740A0u;
            // 0x2740a4: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2741CCu;
            goto label_2741cc;
        }
    }
    ctx->pc = 0x2740A8u;
label_2740a8:
    // 0x2740a8: 0xc09c8a8  jal         func_2722A0
    ctx->pc = 0x2740A8u;
    SET_GPR_U32(ctx, 31, 0x2740B0u);
    ctx->pc = 0x2722A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2722A0u, 0x2740A8u, 0x2740B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2740B0u;
label_2740b0:
    // 0x2740b0: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2740B0u;
    {
        const bool branch_taken_0x2740b0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2740B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2740B0u;
        // 0x2740b4: 0x2403c7ff  addiu       $v1, $zero, -0x3801 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294952959));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2740b0) {
            ctx->pc = 0x2740C0u;
            goto label_2740c0;
        }
    }
    ctx->pc = 0x2740B8u;
    // 0x2740b8: 0x10000043  b           . + 4 + (0x43 << 2)
    ctx->pc = 0x2740B8u;
    {
        const bool branch_taken_0x2740b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2740BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2740B8u;
        // 0x2740bc: 0x2402fffd  addiu       $v0, $zero, -0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2740b8) {
            ctx->pc = 0x2741C8u;
            goto label_2741c8;
        }
    }
    ctx->pc = 0x2740C0u;
label_2740c0:
    // 0x2740c0: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x2740c0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x2740c4: 0x320821  addu        $at, $at, $s2
    ctx->pc = 0x2740c4u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 18)));
    // 0x2740c8: 0xac31068c  sw          $s1, 0x68C($at)
    ctx->pc = 0x2740c8u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 1676), GPR_U32(ctx, 17));
    // 0x2740cc: 0x24042800  addiu       $a0, $zero, 0x2800
    ctx->pc = 0x2740ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10240));
    // 0x2740d0: 0x2405f8ff  addiu       $a1, $zero, -0x701
    ctx->pc = 0x2740d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294965503));
    // 0x2740d4: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x2740d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x2740d8: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x2740d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x2740dc: 0xdc420688  ld          $v0, 0x688($v0)
    ctx->pc = 0x2740dcu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 2), 1672)));
    // 0x2740e0: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2740e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x2740e4: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x2740e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x2740e8: 0x451024  and         $v0, $v0, $a1
    ctx->pc = 0x2740e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 5));
    // 0x2740ec: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x2740ecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x2740f0: 0x320821  addu        $at, $at, $s2
    ctx->pc = 0x2740f0u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 18)));
    // 0x2740f4: 0xc0b6c32  jal         func_2DB0C8
    ctx->pc = 0x2740F4u;
    SET_GPR_U32(ctx, 31, 0x2740FCu);
    ctx->pc = 0x2740F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2740F4u;
    // 0x2740f8: 0xfc220688  sd          $v0, 0x688($at) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 1), 1672), GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DB0C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB0C8u, 0x2740F4u, 0x2740FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2740FCu;
label_2740fc:
    // 0x2740fc: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x2740fcu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x274100: 0x18600011  blez        $v1, . + 4 + (0x11 << 2)
    ctx->pc = 0x274100u;
    {
        const bool branch_taken_0x274100 = (GPR_S32(ctx, 3) <= 0);
        if (branch_taken_0x274100) {
            ctx->pc = 0x274148u;
            goto label_274148;
        }
    }
    ctx->pc = 0x274108u;
    // 0x274108: 0x26032d78  addiu       $v1, $s0, 0x2D78
    ctx->pc = 0x274108u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 11640));
    // 0x27410c: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x27410cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x274110: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x274110u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x274114: 0x8c4206b8  lw          $v0, 0x6B8($v0)
    ctx->pc = 0x274114u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1720)));
    // 0x274118: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x274118u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x27411c: 0x1440000c  bnez        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x27411Cu;
    {
        const bool branch_taken_0x27411c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x274120u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27411Cu;
        // 0x274120: 0x34048000  ori         $a0, $zero, 0x8000 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
        ctx->in_delay_slot = false;
        if (branch_taken_0x27411c) {
            ctx->pc = 0x274150u;
            goto label_274150;
        }
    }
    ctx->pc = 0x274124u;
    // 0x274124: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x274124u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x274128: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x274128u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x27412c: 0xdc420688  ld          $v0, 0x688($v0)
    ctx->pc = 0x27412cu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 2), 1672)));
    // 0x274130: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x274130u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
    // 0x274134: 0x34633fff  ori         $v1, $v1, 0x3FFF
    ctx->pc = 0x274134u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)16383);
    // 0x274138: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x274138u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x27413c: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x27413Cu;
    {
        const bool branch_taken_0x27413c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x274140u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27413Cu;
        // 0x274140: 0x441025  or          $v0, $v0, $a0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27413c) {
            ctx->pc = 0x274168u;
            goto label_274168;
        }
    }
    ctx->pc = 0x274144u;
    // 0x274144: 0x0  nop
    ctx->pc = 0x274144u;
    // NOP
label_274148:
    // 0x274148: 0x54600020  bnel        $v1, $zero, . + 4 + (0x20 << 2)
    ctx->pc = 0x274148u;
    {
        const bool branch_taken_0x274148 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x274148) {
            ctx->pc = 0x27414Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x274148u;
            // 0x27414c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2741CCu;
            goto label_2741cc;
        }
    }
    ctx->pc = 0x274150u;
label_274150:
    // 0x274150: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x274150u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x274154: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x274154u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x274158: 0xdc420688  ld          $v0, 0x688($v0)
    ctx->pc = 0x274158u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 2), 1672)));
    // 0x27415c: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x27415cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
    // 0x274160: 0x34633fff  ori         $v1, $v1, 0x3FFF
    ctx->pc = 0x274160u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)16383);
    // 0x274164: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x274164u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_274168:
    // 0x274168: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x274168u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x27416c: 0x320821  addu        $at, $at, $s2
    ctx->pc = 0x27416cu;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 18)));
    // 0x274170: 0xfc220688  sd          $v0, 0x688($at)
    ctx->pc = 0x274170u;
    WRITE64(ADD32(GPR_U32(ctx, 1), 1672), GPR_U64(ctx, 2));
    // 0x274174: 0x26102d78  addiu       $s0, $s0, 0x2D78
    ctx->pc = 0x274174u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 11640));
    // 0x274178: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x274178u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x27417c: 0x3c040001  lui         $a0, 0x1
    ctx->pc = 0x27417cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)1 << 16));
    // 0x274180: 0x902021  addu        $a0, $a0, $s0
    ctx->pc = 0x274180u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
    // 0x274184: 0x8c8406c8  lw          $a0, 0x6C8($a0)
    ctx->pc = 0x274184u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1736)));
    // 0x274188: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x274188u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x27418c: 0x320821  addu        $at, $at, $s2
    ctx->pc = 0x27418cu;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 18)));
    // 0x274190: 0xc043328  jal         func_10CCA0
    ctx->pc = 0x274190u;
    SET_GPR_U32(ctx, 31, 0x274198u);
    ctx->pc = 0x274194u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x274190u;
    // 0x274194: 0xac3106e0  sw          $s1, 0x6E0($at) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 1), 1760), GPR_U32(ctx, 17));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10CCA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10CCA0u, 0x274190u, 0x274198u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x274198u;
label_274198:
    // 0x274198: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x274198u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x27419c: 0x3c040001  lui         $a0, 0x1
    ctx->pc = 0x27419cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)1 << 16));
    // 0x2741a0: 0x902021  addu        $a0, $a0, $s0
    ctx->pc = 0x2741a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
    // 0x2741a4: 0x8c8406c8  lw          $a0, 0x6C8($a0)
    ctx->pc = 0x2741a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1736)));
    // 0x2741a8: 0xae630000  sw          $v1, 0x0($s3)
    ctx->pc = 0x2741a8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 3));
    // 0x2741ac: 0xc043320  jal         func_10CC80
    ctx->pc = 0x2741ACu;
    SET_GPR_U32(ctx, 31, 0x2741B4u);
    ctx->pc = 0x2741B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2741ACu;
    // 0x2741b0: 0xae710008  sw          $s1, 0x8($s3) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 19), 8), GPR_U32(ctx, 17));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10CC80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10CC80u, 0x2741ACu, 0x2741B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2741B4u;
label_2741b4:
    // 0x2741b4: 0xc09c8b0  jal         func_2722C0
    ctx->pc = 0x2741B4u;
    SET_GPR_U32(ctx, 31, 0x2741BCu);
    ctx->pc = 0x2722C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2722C0u, 0x2741B4u, 0x2741BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2741BCu;
label_2741bc:
    // 0x2741bc: 0xc09c8ba  jal         func_2722E8
    ctx->pc = 0x2741BCu;
    SET_GPR_U32(ctx, 31, 0x2741C4u);
    ctx->pc = 0x2722E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2722E8u, 0x2741BCu, 0x2741C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2741C4u;
label_2741c4:
    // 0x2741c4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2741c4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2741c8:
    // 0x2741c8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2741c8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2741cc:
    // 0x2741cc: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2741ccu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2741d0: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x2741d0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2741d4: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x2741d4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2741d8: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2741d8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2741dc: 0x3e00008  jr          $ra
    ctx->pc = 0x2741DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2741E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2741DCu;
        // 0x2741e0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2741DCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2741E4u;
    // 0x2741e4: 0x0  nop
    ctx->pc = 0x2741e4u;
    // NOP
    if (ctx->pc == 0x2741e4u) { ctx->pc = 0x2741e8u; }
}
