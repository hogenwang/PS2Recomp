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

// Function: sub_00274DB0
// Address: 0x274db0 - 0x274e90
void sub_00274DB0_0x274db0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00274DB0_0x274db0");
#endif

    switch (ctx->pc) {
        case 0x274decu: goto label_274dec;
        case 0x274e48u: goto label_274e48;
        case 0x274e7cu: goto label_274e7c;
        default: break;
    }

    ctx->pc = 0x274db0u;

    // 0x274db0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x274db0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x274db4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x274db4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x274db8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x274db8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x274dbc: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x274dbcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x274dc0: 0x3c030027  lui         $v1, 0x27
    ctx->pc = 0x274dc0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)39 << 16));
    // 0x274dc4: 0x24634e0c  addiu       $v1, $v1, 0x4E0C
    ctx->pc = 0x274dc4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 19980));
    // 0x274dc8: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x274dc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x274dcc: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x274DCCu;
    {
        const bool branch_taken_0x274dcc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x274dcc) {
            ctx->pc = 0x274DECu;
            goto label_274dec;
        }
    }
    ctx->pc = 0x274DD4u;
    // 0x274dd4: 0x3c040027  lui         $a0, 0x27
    ctx->pc = 0x274dd4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)39 << 16));
    // 0x274dd8: 0x24844e20  addiu       $a0, $a0, 0x4E20
    ctx->pc = 0x274dd8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 20000));
    // 0x274ddc: 0x8c670008  lw          $a3, 0x8($v1)
    ctx->pc = 0x274ddcu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x274de0: 0x8c65000c  lw          $a1, 0xC($v1)
    ctx->pc = 0x274de0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x274de4: 0xc0a7814  jal         func_29E050
    ctx->pc = 0x274DE4u;
    SET_GPR_U32(ctx, 31, 0x274DECu);
    ctx->pc = 0x274DE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x274DE4u;
    // 0x274de8: 0x8c660004  lw          $a2, 0x4($v1) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29E050u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29E050u, 0x274DE4u, 0x274DECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x274DECu;
label_274dec:
    // 0x274dec: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x274DECu;
    {
        const bool branch_taken_0x274dec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x274dec) {
            ctx->pc = 0x274E20u;
            goto label_274e20;
        }
    }
    ctx->pc = 0x274DF4u;
    // 0x274df4: 0xa3627fa9  sb          $v0, 0x7FA9($k1)
    ctx->pc = 0x274df4u;
    WRITE8(ADD32(GPR_U32(ctx, 27), 32681), (uint8_t)GPR_U32(ctx, 2));
    // 0x274df8: 0x2450f010  addiu       $s0, $v0, -0xFF0
    ctx->pc = 0x274df8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294963216));
    // 0x274dfc: 0x8ccf5a45  lw          $t7, 0x5A45($a2)
    ctx->pc = 0x274dfcu;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 23109)));
    // 0x274e00: 0xa3dcb159  sb          $gp, -0x4EA7($fp)
    ctx->pc = 0x274e00u;
    WRITE8(ADD32(GPR_U32(ctx, 30), 4294947161), (uint8_t)GPR_U32(ctx, 28));
    // 0x274e04: 0xfd06062a  sd          $a2, 0x62A($t0)
    ctx->pc = 0x274e04u;
    WRITE64(ADD32(GPR_U32(ctx, 8), 1578), GPR_U64(ctx, 6));
    // 0x274e08: 0xa059c7b9  sb          $t9, -0x3847($v0)
    ctx->pc = 0x274e08u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 4294952889), (uint8_t)GPR_U32(ctx, 25));
    // 0x274e0c: 0x0  nop
    ctx->pc = 0x274e0cu;
    // NOP
    // 0x274e10: 0xf00e422e  scd         $t6, 0x422E($zero)
    ctx->pc = 0x274e10u;
    throw std::runtime_error("Unhandled opcode: 0x3C at 0x274E10 raw=0xF00E422E");
    // 0x274e14: 0x971e27b0  lhu         $fp, 0x27B0($t8)
    ctx->pc = 0x274e14u;
    SET_GPR_U32(ctx, 30, (uint16_t)READ16(ADD32(GPR_U32(ctx, 24), 10160)));
    // 0x274e18: 0xf00e4222  scd         $t6, 0x4222($zero)
    ctx->pc = 0x274e18u;
    throw std::runtime_error("Unhandled opcode: 0x3C at 0x274E18 raw=0xF00E4222");
    // 0x274e1c: 0x0  nop
    ctx->pc = 0x274e1cu;
    // NOP
label_274e20:
    // 0x274e20: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x274e20u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x274e24: 0xf06aed6e  scd         $t2, -0x1292($v1)
    ctx->pc = 0x274e24u;
    throw std::runtime_error("Unhandled opcode: 0x3C at 0x274E24 raw=0xF06AED6E");
    // 0x274e28: 0xa0433411  sb          $v1, 0x3411($v0)
    ctx->pc = 0x274e28u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 13329), (uint8_t)GPR_U32(ctx, 3));
    // 0x274e2c: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x274E2Cu;
    {
        const bool branch_taken_0x274e2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x274e2c) {
            ctx->pc = 0x274E5Cu;
            goto label_274e5c;
        }
    }
    ctx->pc = 0x274E34u;
    // 0x274e34: 0x87d1bf23  lh          $s1, -0x40DD($fp)
    ctx->pc = 0x274e34u;
    SET_GPR_S32(ctx, 17, (int16_t)READ16(ADD32(GPR_U32(ctx, 30), 4294950691)));
    // 0x274e38: 0x852ca123  lh          $t4, -0x5EDD($t1)
    ctx->pc = 0x274e38u;
    SET_GPR_S32(ctx, 12, (int16_t)READ16(ADD32(GPR_U32(ctx, 9), 4294943011)));
    // 0x274e3c: 0xa07fcdd9  sb          $ra, -0x3227($v1)
    ctx->pc = 0x274e3cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 4294954457), (uint8_t)GPR_U32(ctx, 31));
    // 0x274e40: 0xceabd6e  jal         func_3AAF5B8
    ctx->pc = 0x274E40u;
    SET_GPR_U32(ctx, 31, 0x274E48u);
    ctx->pc = 0x274E44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x274E40u;
    // 0x274e44: 0xa10e59c1  sb          $t6, 0x59C1($t0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 8), 22977), (uint8_t)GPR_U32(ctx, 14));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3AAF5B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3AAF5B8u, 0x274E40u, 0x274E48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x274E48u;
label_274e48:
    // 0x274e48: 0xa1621aa1  sb          $v0, 0x1AA1($t3)
    ctx->pc = 0x274e48u;
    WRITE8(ADD32(GPR_U32(ctx, 11), 6817), (uint8_t)GPR_U32(ctx, 2));
    // 0x274e4c: 0xfe224e00  sd          $v0, 0x4E00($s1)
    ctx->pc = 0x274e4cu;
    WRITE64(ADD32(GPR_U32(ctx, 17), 19968), GPR_U64(ctx, 2));
    // 0x274e50: 0x971e27b1  lhu         $fp, 0x27B1($t8)
    ctx->pc = 0x274e50u;
    SET_GPR_U32(ctx, 30, (uint16_t)READ16(ADD32(GPR_U32(ctx, 24), 10161)));
    // 0x274e54: 0xfe224e0c  sd          $v0, 0x4E0C($s1)
    ctx->pc = 0x274e54u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 19980), GPR_U64(ctx, 2));
    // 0x274e58: 0x0  nop
    ctx->pc = 0x274e58u;
    // NOP
label_274e5c:
    // 0x274e5c: 0x3c020027  lui         $v0, 0x27
    ctx->pc = 0x274e5cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)39 << 16));
    // 0x274e60: 0x24424e4c  addiu       $v0, $v0, 0x4E4C
    ctx->pc = 0x274e60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 20044));
    // 0x274e64: 0x3c040027  lui         $a0, 0x27
    ctx->pc = 0x274e64u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)39 << 16));
    // 0x274e68: 0x24844e2c  addiu       $a0, $a0, 0x4E2C
    ctx->pc = 0x274e68u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 20012));
    // 0x274e6c: 0x8c470004  lw          $a3, 0x4($v0)
    ctx->pc = 0x274e6cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x274e70: 0x8c450008  lw          $a1, 0x8($v0)
    ctx->pc = 0x274e70u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x274e74: 0xc0a7814  jal         func_29E050
    ctx->pc = 0x274E74u;
    SET_GPR_U32(ctx, 31, 0x274E7Cu);
    ctx->pc = 0x274E78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x274E74u;
    // 0x274e78: 0x8c460000  lw          $a2, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29E050u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29E050u, 0x274E74u, 0x274E7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x274E7Cu;
label_274e7c:
    // 0x274e7c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x274e7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x274e80: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x274e80u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x274e84: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x274e84u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x274e88: 0x3e00008  jr          $ra
    ctx->pc = 0x274E88u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x274E8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x274E88u;
        // 0x274e8c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x274E88u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x274E90u;
}
