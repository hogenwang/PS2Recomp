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

// Function: sub_00100CD8
// Address: 0x100cd8 - 0x100dc0
void sub_00100CD8_0x100cd8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00100CD8_0x100cd8");
#endif

    switch (ctx->pc) {
        case 0x100d10u: goto label_100d10;
        case 0x100d84u: goto label_100d84;
        default: break;
    }

    ctx->pc = 0x100cd8u;

    // 0x100cd8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x100cd8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x100cdc: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x100cdcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x100ce0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x100ce0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x100ce4: 0x3463a000  ori         $v1, $v1, 0xA000
    ctx->pc = 0x100ce4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)40960);
    // 0x100ce8: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x100ce8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x100cec: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x100cecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x100cf0: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x100cf0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x100cf4: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x100CF4u;
    {
        const bool branch_taken_0x100cf4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x100CF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x100CF4u;
        // 0x100cf8: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x100cf4) {
            ctx->pc = 0x100D2Cu;
            goto label_100d2c;
        }
    }
    ctx->pc = 0x100CFCu;
    // 0x100cfc: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x100cfcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x100d00: 0x3c050100  lui         $a1, 0x100
    ctx->pc = 0x100d00u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)256 << 16));
    // 0x100d04: 0x3463a000  ori         $v1, $v1, 0xA000
    ctx->pc = 0x100d04u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)40960);
    // 0x100d08: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x100d08u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x100d0c: 0x0  nop
    ctx->pc = 0x100d0cu;
    // NOP
label_100d10:
    // 0x100d10: 0xa2102b  sltu        $v0, $a1, $v0
    ctx->pc = 0x100d10u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x100d14: 0x14400018  bnez        $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x100D14u;
    {
        const bool branch_taken_0x100d14 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x100D18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x100D14u;
        // 0x100d18: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x100d14) {
            ctx->pc = 0x100D78u;
            goto label_100d78;
        }
    }
    ctx->pc = 0x100D1Cu;
    // 0x100d1c: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x100d1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x100d20: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x100d20u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x100d24: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x100D24u;
    {
        const bool branch_taken_0x100d24 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x100D28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x100D24u;
        // 0x100d28: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x100d24) {
            ctx->pc = 0x100D10u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_100d10;
        }
    }
    ctx->pc = 0x100D2Cu;
label_100d2c:
    // 0x100d2c: 0xdcc20000  ld          $v0, 0x0($a2)
    ctx->pc = 0x100d2cu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x100d30: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x100d30u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x100d34: 0x3463a020  ori         $v1, $v1, 0xA020
    ctx->pc = 0x100d34u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)40992);
    // 0x100d38: 0x3c047000  lui         $a0, 0x7000
    ctx->pc = 0x100d38u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)28672 << 16));
    // 0x100d3c: 0x30427fff  andi        $v0, $v0, 0x7FFF
    ctx->pc = 0x100d3cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32767);
    // 0x100d40: 0xc42824  and         $a1, $a2, $a0
    ctx->pc = 0x100d40u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 6) & GPR_U64(ctx, 4));
    // 0x100d44: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x100d44u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x100d48: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x100d48u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x100d4c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x100d4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x100d50: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x100d50u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x100d54: 0x14a4000d  bne         $a1, $a0, . + 4 + (0xD << 2)
    ctx->pc = 0x100D54u;
    {
        const bool branch_taken_0x100d54 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 4));
        ctx->pc = 0x100D58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x100D54u;
        // 0x100d58: 0x3c020fff  lui         $v0, 0xFFF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4095 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x100d54) {
            ctx->pc = 0x100D8Cu;
            goto label_100d8c;
        }
    }
    ctx->pc = 0x100D5Cu;
    // 0x100d5c: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x100d5cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x100d60: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x100d60u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x100d64: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x100d64u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
    // 0x100d68: 0xc21024  and         $v0, $a2, $v0
    ctx->pc = 0x100d68u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & GPR_U64(ctx, 2));
    // 0x100d6c: 0x3463a010  ori         $v1, $v1, 0xA010
    ctx->pc = 0x100d6cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)40976);
    // 0x100d70: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x100D70u;
    {
        const bool branch_taken_0x100d70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x100D74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x100D70u;
        // 0x100d74: 0x441025  or          $v0, $v0, $a0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x100d70) {
            ctx->pc = 0x100D9Cu;
            goto label_100d9c;
        }
    }
    ctx->pc = 0x100D78u;
label_100d78:
    // 0x100d78: 0x3c04003e  lui         $a0, 0x3E
    ctx->pc = 0x100d78u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)62 << 16));
    // 0x100d7c: 0xc043e52  jal         func_10F948
    ctx->pc = 0x100D7Cu;
    SET_GPR_U32(ctx, 31, 0x100D84u);
    ctx->pc = 0x100D80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x100D7Cu;
    // 0x100d80: 0x248499c8  addiu       $a0, $a0, -0x6638 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F948u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F948u, 0x100D7Cu, 0x100D84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x100D84u;
label_100d84:
    // 0x100d84: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x100D84u;
    {
        const bool branch_taken_0x100d84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x100D88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x100D84u;
        // 0x100d88: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x100d84) {
            ctx->pc = 0x100DB4u;
            goto label_100db4;
        }
    }
    ctx->pc = 0x100D8Cu;
label_100d8c:
    // 0x100d8c: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x100d8cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x100d90: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x100d90u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x100d94: 0x3463a010  ori         $v1, $v1, 0xA010
    ctx->pc = 0x100d94u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)40976);
    // 0x100d98: 0xc21024  and         $v0, $a2, $v0
    ctx->pc = 0x100d98u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & GPR_U64(ctx, 2));
label_100d9c:
    // 0x100d9c: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x100d9cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x100da0: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x100da0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x100da4: 0x24040101  addiu       $a0, $zero, 0x101
    ctx->pc = 0x100da4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 257));
    // 0x100da8: 0x3463a000  ori         $v1, $v1, 0xA000
    ctx->pc = 0x100da8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)40960);
    // 0x100dac: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x100dacu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x100db0: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x100db0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
label_100db4:
    // 0x100db4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x100db4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x100db8: 0x3e00008  jr          $ra
    ctx->pc = 0x100DB8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x100DBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x100DB8u;
        // 0x100dbc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x100DB8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x100DC0u;
}
