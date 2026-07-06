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

// Function: sub_00230CC0
// Address: 0x230cc0 - 0x231318
void sub_00230CC0_0x230cc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00230CC0_0x230cc0");
#endif

    switch (ctx->pc) {
        case 0x230d18u: goto label_230d18;
        case 0x230d50u: goto label_230d50;
        case 0x230dbcu: goto label_230dbc;
        case 0x230de4u: goto label_230de4;
        case 0x230df0u: goto label_230df0;
        case 0x230dfcu: goto label_230dfc;
        case 0x230e0cu: goto label_230e0c;
        case 0x230e30u: goto label_230e30;
        case 0x230ea0u: goto label_230ea0;
        case 0x230ebcu: goto label_230ebc;
        case 0x230ed8u: goto label_230ed8;
        case 0x230f30u: goto label_230f30;
        case 0x230fb0u: goto label_230fb0;
        case 0x230fd8u: goto label_230fd8;
        case 0x231020u: goto label_231020;
        case 0x231078u: goto label_231078;
        case 0x2310d0u: goto label_2310d0;
        case 0x231110u: goto label_231110;
        case 0x231140u: goto label_231140;
        case 0x231220u: goto label_231220;
        case 0x23124cu: goto label_23124c;
        default: break;
    }

    ctx->pc = 0x230cc0u;

    // 0x230cc0: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x230cc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x230cc4: 0xffb60060  sd          $s6, 0x60($sp)
    ctx->pc = 0x230cc4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 22));
    // 0x230cc8: 0xffb50050  sd          $s5, 0x50($sp)
    ctx->pc = 0x230cc8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 21));
    // 0x230ccc: 0xe0b02d  daddu       $s6, $a3, $zero
    ctx->pc = 0x230cccu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x230cd0: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x230cd0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x230cd4: 0xc0a82d  daddu       $s5, $a2, $zero
    ctx->pc = 0x230cd4u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x230cd8: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x230cd8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x230cdc: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x230cdcu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x230ce0: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x230ce0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x230ce4: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x230ce4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x230ce8: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x230ce8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x230cec: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x230cecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x230cf0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x230cf0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x230cf4: 0x12a0000a  beqz        $s5, . + 4 + (0xA << 2)
    ctx->pc = 0x230CF4u;
    {
        const bool branch_taken_0x230cf4 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x230CF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x230CF4u;
        // 0x230cf8: 0x92900000  lbu         $s0, 0x0($s4) (Delay Slot)
        SET_GPR_U32(ctx, 16, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x230cf4) {
            ctx->pc = 0x230D20u;
            goto label_230d20;
        }
    }
    ctx->pc = 0x230CFCu;
    // 0x230cfc: 0x96a20012  lhu         $v0, 0x12($s5)
    ctx->pc = 0x230cfcu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 21), 18)));
    // 0x230d00: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x230d00u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x230d04: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x230D04u;
    {
        const bool branch_taken_0x230d04 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x230d04) {
            ctx->pc = 0x230D08u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x230D04u;
            // 0x230d08: 0x8ea20018  lw          $v0, 0x18($s5) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 24)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x230D1Cu;
            goto label_230d1c;
        }
    }
    ctx->pc = 0x230D0Cu;
    // 0x230d0c: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x230d0cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    // 0x230d10: 0xc08b5e0  jal         func_22D780
    ctx->pc = 0x230D10u;
    SET_GPR_U32(ctx, 31, 0x230D18u);
    ctx->pc = 0x230D14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x230D10u;
    // 0x230d14: 0x24844698  addiu       $a0, $a0, 0x4698 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 18072));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22D780u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22D780u, 0x230D10u, 0x230D18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x230D18u;
label_230d18:
    // 0x230d18: 0x8ea20018  lw          $v0, 0x18($s5)
    ctx->pc = 0x230d18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 24)));
label_230d1c:
    // 0x230d1c: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x230d1cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_230d20:
    // 0x230d20: 0x2c0902d  daddu       $s2, $s6, $zero
    ctx->pc = 0x230d20u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x230d24: 0x52400015  beql        $s2, $zero, . + 4 + (0x15 << 2)
    ctx->pc = 0x230D24u;
    {
        const bool branch_taken_0x230d24 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x230d24) {
            ctx->pc = 0x230D28u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x230D24u;
            // 0x230d28: 0xde670008  ld          $a3, 0x8($s3) (Delay Slot)
            SET_GPR_U64(ctx, 7, READ64(ADD32(GPR_U32(ctx, 19), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x230D7Cu;
            goto label_230d7c;
        }
    }
    ctx->pc = 0x230D2Cu;
    // 0x230d2c: 0x8e42000c  lw          $v0, 0xC($s2)
    ctx->pc = 0x230d2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
    // 0x230d30: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x230d30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x230d34: 0x10600010  beqz        $v1, . + 4 + (0x10 << 2)
    ctx->pc = 0x230D34u;
    {
        const bool branch_taken_0x230d34 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x230D38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x230D34u;
        // 0x230d38: 0x2028021  addu        $s0, $s0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x230d34) {
            ctx->pc = 0x230D78u;
            goto label_230d78;
        }
    }
    ctx->pc = 0x230D3Cu;
    // 0x230d3c: 0xde670008  ld          $a3, 0x8($s3)
    ctx->pc = 0x230d3cu;
    SET_GPR_U64(ctx, 7, READ64(ADD32(GPR_U32(ctx, 19), 8)));
    // 0x230d40: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x230d40u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x230d44: 0xde660000  ld          $a2, 0x0($s3)
    ctx->pc = 0x230d44u;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x230d48: 0xde650018  ld          $a1, 0x18($s3)
    ctx->pc = 0x230d48u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 19), 24)));
    // 0x230d4c: 0xde640010  ld          $a0, 0x10($s3)
    ctx->pc = 0x230d4cu;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 19), 16)));
label_230d50:
    // 0x230d50: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x230d50u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x230d54: 0x1240000d  beqz        $s2, . + 4 + (0xD << 2)
    ctx->pc = 0x230D54u;
    {
        const bool branch_taken_0x230d54 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x230D58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x230D54u;
        // 0x230d58: 0xa4182f  dsubu       $v1, $a1, $a0 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) - GPR_U64(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x230d54) {
            ctx->pc = 0x230D8Cu;
            goto label_230d8c;
        }
    }
    ctx->pc = 0x230D5Cu;
    // 0x230d5c: 0x8e42000c  lw          $v0, 0xC($s2)
    ctx->pc = 0x230d5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
    // 0x230d60: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x230d60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x230d64: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x230d64u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x230d68: 0x1460fff9  bnez        $v1, . + 4 + (-0x7 << 2)
    ctx->pc = 0x230D68u;
    {
        const bool branch_taken_0x230d68 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x230D6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x230D68u;
        // 0x230d6c: 0x60102d  daddu       $v0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x230d68) {
            ctx->pc = 0x230D50u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_230d50;
        }
    }
    ctx->pc = 0x230D70u;
    // 0x230d70: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x230D70u;
    {
        const bool branch_taken_0x230d70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x230D74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x230D70u;
        // 0x230d74: 0xa4182f  dsubu       $v1, $a1, $a0 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) - GPR_U64(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x230d70) {
            ctx->pc = 0x230D8Cu;
            goto label_230d8c;
        }
    }
    ctx->pc = 0x230D78u;
label_230d78:
    // 0x230d78: 0xde670008  ld          $a3, 0x8($s3)
    ctx->pc = 0x230d78u;
    SET_GPR_U64(ctx, 7, READ64(ADD32(GPR_U32(ctx, 19), 8)));
label_230d7c:
    // 0x230d7c: 0xde660000  ld          $a2, 0x0($s3)
    ctx->pc = 0x230d7cu;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x230d80: 0xde650018  ld          $a1, 0x18($s3)
    ctx->pc = 0x230d80u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 19), 24)));
    // 0x230d84: 0xde640010  ld          $a0, 0x10($s3)
    ctx->pc = 0x230d84u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 19), 16)));
    // 0x230d88: 0xa4182f  dsubu       $v1, $a1, $a0
    ctx->pc = 0x230d88u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) - GPR_U64(ctx, 4));
label_230d8c:
    // 0x230d8c: 0xe6102f  dsubu       $v0, $a3, $a2
    ctx->pc = 0x230d8cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) - GPR_U64(ctx, 6));
    // 0x230d90: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x230d90u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x230d94: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x230d94u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x230d98: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x230d98u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x230d9c: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x230d9cu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x230da0: 0x43202a  slt         $a0, $v0, $v1
    ctx->pc = 0x230da0u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x230da4: 0x64100a  movz        $v0, $v1, $a0
    ctx->pc = 0x230da4u;
    if (GPR_U64(ctx, 4) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 3));
    // 0x230da8: 0x50102a  slt         $v0, $v0, $s0
    ctx->pc = 0x230da8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x230dac: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x230DACu;
    {
        const bool branch_taken_0x230dac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x230DB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x230DACu;
        // 0x230db0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x230dac) {
            ctx->pc = 0x230DDCu;
            goto label_230ddc;
        }
    }
    ctx->pc = 0x230DB4u;
    // 0x230db4: 0x10000068  b           . + 4 + (0x68 << 2)
    ctx->pc = 0x230DB4u;
    {
        const bool branch_taken_0x230db4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x230DB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x230DB4u;
        // 0x230db8: 0xdfbf0070  ld          $ra, 0x70($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x230db4) {
            ctx->pc = 0x230F58u;
            goto label_230f58;
        }
    }
    ctx->pc = 0x230DBCu;
label_230dbc:
    // 0x230dbc: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x230dbcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x230dc0: 0x26230014  addiu       $v1, $s1, 0x14
    ctx->pc = 0x230dc0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 20));
    // 0x230dc4: 0xa6220010  sh          $v0, 0x10($s1)
    ctx->pc = 0x230dc4u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 16), (uint16_t)GPR_U32(ctx, 2));
    // 0x230dc8: 0xae230008  sw          $v1, 0x8($s1)
    ctx->pc = 0x230dc8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 3));
    // 0x230dcc: 0xae200000  sw          $zero, 0x0($s1)
    ctx->pc = 0x230dccu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
    // 0x230dd0: 0xae200004  sw          $zero, 0x4($s1)
    ctx->pc = 0x230dd0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 0));
    // 0x230dd4: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x230DD4u;
    {
        const bool branch_taken_0x230dd4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x230DD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x230DD4u;
        // 0x230dd8: 0xa6200012  sh          $zero, 0x12($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 18), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x230dd4) {
            ctx->pc = 0x230E10u;
            goto label_230e10;
        }
    }
    ctx->pc = 0x230DDCu;
label_230ddc:
    // 0x230ddc: 0xc08c682  jal         func_231A08
    ctx->pc = 0x230DDCu;
    SET_GPR_U32(ctx, 31, 0x230DE4u);
    ctx->pc = 0x231A08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231A08u, 0x230DDCu, 0x230DE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x230DE4u;
label_230de4:
    // 0x230de4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x230de4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x230de8: 0xc098552  jal         func_261548
    ctx->pc = 0x230DE8u;
    SET_GPR_U32(ctx, 31, 0x230DF0u);
    ctx->pc = 0x230DECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x230DE8u;
    // 0x230dec: 0x24040100  addiu       $a0, $zero, 0x100 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    ctx->in_delay_slot = false;
    ctx->pc = 0x261548u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x261548u, 0x230DE8u, 0x230DF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x230DF0u;
label_230df0:
    // 0x230df0: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x230df0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x230df4: 0xc08c698  jal         func_231A60
    ctx->pc = 0x230DF4u;
    SET_GPR_U32(ctx, 31, 0x230DFCu);
    ctx->pc = 0x230DF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x230DF4u;
    // 0x230df8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x231A60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231A60u, 0x230DF4u, 0x230DFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x230DFCu;
label_230dfc:
    // 0x230dfc: 0x1620ffef  bnez        $s1, . + 4 + (-0x11 << 2)
    ctx->pc = 0x230DFCu;
    {
        const bool branch_taken_0x230dfc = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x230E00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x230DFCu;
        // 0x230e00: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x230dfc) {
            ctx->pc = 0x230DBCu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_230dbc;
        }
    }
    ctx->pc = 0x230E04u;
    // 0x230e04: 0xc08a8ae  jal         func_22A2B8
    ctx->pc = 0x230E04u;
    SET_GPR_U32(ctx, 31, 0x230E0Cu);
    ctx->pc = 0x230E08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x230E04u;
    // 0x230e08: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22A2B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22A2B8u, 0x230E04u, 0x230E0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x230E0Cu;
label_230e0c:
    // 0x230e0c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x230e0cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_230e10:
    // 0x230e10: 0x12200050  beqz        $s1, . + 4 + (0x50 << 2)
    ctx->pc = 0x230E10u;
    {
        const bool branch_taken_0x230e10 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x230E14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x230E10u;
        // 0x230e14: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x230e10) {
            ctx->pc = 0x230F54u;
            goto label_230f54;
        }
    }
    ctx->pc = 0x230E18u;
    // 0x230e18: 0x92820000  lbu         $v0, 0x0($s4)
    ctx->pc = 0x230e18u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x230e1c: 0x2c4200ed  sltiu       $v0, $v0, 0xED
    ctx->pc = 0x230e1cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)237) ? 1 : 0);
    // 0x230e20: 0x54400021  bnel        $v0, $zero, . + 4 + (0x21 << 2)
    ctx->pc = 0x230E20u;
    {
        const bool branch_taken_0x230e20 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x230e20) {
            ctx->pc = 0x230E24u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x230E20u;
            // 0x230e24: 0x92820000  lbu         $v0, 0x0($s4) (Delay Slot)
            SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x230EA8u;
            goto label_230ea8;
        }
    }
    ctx->pc = 0x230E28u;
    // 0x230e28: 0xc098552  jal         func_261548
    ctx->pc = 0x230E28u;
    SET_GPR_U32(ctx, 31, 0x230E30u);
    ctx->pc = 0x230E2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x230E28u;
    // 0x230e2c: 0x92840000  lbu         $a0, 0x0($s4) (Delay Slot)
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x261548u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x261548u, 0x230E28u, 0x230E30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x230E30u;
label_230e30:
    // 0x230e30: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x230e30u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x230e34: 0x10a00014  beqz        $a1, . + 4 + (0x14 << 2)
    ctx->pc = 0x230E34u;
    {
        const bool branch_taken_0x230e34 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x230E38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x230E34u;
        // 0x230e38: 0xae250020  sw          $a1, 0x20($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 32), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x230e34) {
            ctx->pc = 0x230E88u;
            goto label_230e88;
        }
    }
    ctx->pc = 0x230E3Cu;
    // 0x230e3c: 0x96220012  lhu         $v0, 0x12($s1)
    ctx->pc = 0x230e3cu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 18)));
    // 0x230e40: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x230e40u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    // 0x230e44: 0x86230010  lh          $v1, 0x10($s1)
    ctx->pc = 0x230e44u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x230e48: 0x24844550  addiu       $a0, $a0, 0x4550
    ctx->pc = 0x230e48u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17744));
    // 0x230e4c: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x230e4cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x230e50: 0xae250008  sw          $a1, 0x8($s1)
    ctx->pc = 0x230e50u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 5));
    // 0x230e54: 0x3042fff7  andi        $v0, $v0, 0xFFF7
    ctx->pc = 0x230e54u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65527);
    // 0x230e58: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x230e58u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x230e5c: 0xa6220012  sh          $v0, 0x12($s1)
    ctx->pc = 0x230e5cu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 18), (uint16_t)GPR_U32(ctx, 2));
    // 0x230e60: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x230e60u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x230e64: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x230e64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x230e68: 0x92840000  lbu         $a0, 0x0($s4)
    ctx->pc = 0x230e68u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x230e6c: 0xae220030  sw          $v0, 0x30($s1)
    ctx->pc = 0x230e6cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 48), GPR_U32(ctx, 2));
    // 0x230e70: 0xae24002c  sw          $a0, 0x2C($s1)
    ctx->pc = 0x230e70u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 44), GPR_U32(ctx, 4));
    // 0x230e74: 0xae200024  sw          $zero, 0x24($s1)
    ctx->pc = 0x230e74u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 36), GPR_U32(ctx, 0));
    // 0x230e78: 0xae200028  sw          $zero, 0x28($s1)
    ctx->pc = 0x230e78u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 40), GPR_U32(ctx, 0));
    // 0x230e7c: 0xae310038  sw          $s1, 0x38($s1)
    ctx->pc = 0x230e7cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 56), GPR_U32(ctx, 17));
    // 0x230e80: 0xae310034  sw          $s1, 0x34($s1)
    ctx->pc = 0x230e80u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 52), GPR_U32(ctx, 17));
    // 0x230e84: 0x0  nop
    ctx->pc = 0x230e84u;
    // NOP
label_230e88:
    // 0x230e88: 0x96220012  lhu         $v0, 0x12($s1)
    ctx->pc = 0x230e88u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 18)));
    // 0x230e8c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x230e8cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x230e90: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x230E90u;
    {
        const bool branch_taken_0x230e90 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x230e90) {
            ctx->pc = 0x230E94u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x230E90u;
            // 0x230e94: 0x92820000  lbu         $v0, 0x0($s4) (Delay Slot)
            SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x230EA8u;
            goto label_230ea8;
        }
    }
    ctx->pc = 0x230E98u;
    // 0x230e98: 0xc08a996  jal         func_22A658
    ctx->pc = 0x230E98u;
    SET_GPR_U32(ctx, 31, 0x230EA0u);
    ctx->pc = 0x230E9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x230E98u;
    // 0x230e9c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22A658u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22A658u, 0x230E98u, 0x230EA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x230EA0u;
label_230ea0:
    // 0x230ea0: 0x1000002c  b           . + 4 + (0x2C << 2)
    ctx->pc = 0x230EA0u;
    {
        const bool branch_taken_0x230ea0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x230EA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x230EA0u;
        // 0x230ea4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x230ea0) {
            ctx->pc = 0x230F54u;
            goto label_230f54;
        }
    }
    ctx->pc = 0x230EA8u;
label_230ea8:
    // 0x230ea8: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x230ea8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x230eac: 0x8e240008  lw          $a0, 0x8($s1)
    ctx->pc = 0x230eacu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x230eb0: 0xae22000c  sw          $v0, 0xC($s1)
    ctx->pc = 0x230eb0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 2));
    // 0x230eb4: 0xc08b538  jal         func_22D4E0
    ctx->pc = 0x230EB4u;
    SET_GPR_U32(ctx, 31, 0x230EBCu);
    ctx->pc = 0x230EB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x230EB4u;
    // 0x230eb8: 0x90a60000  lbu         $a2, 0x0($a1) (Delay Slot)
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22D4E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22D4E0u, 0x230EB4u, 0x230EBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x230EBCu;
label_230ebc:
    // 0x230ebc: 0x52400002  beql        $s2, $zero, . + 4 + (0x2 << 2)
    ctx->pc = 0x230EBCu;
    {
        const bool branch_taken_0x230ebc = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x230ebc) {
            ctx->pc = 0x230EC0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x230EBCu;
            // 0x230ec0: 0x2a0b02d  daddu       $s6, $s5, $zero (Delay Slot)
            SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x230EC8u;
            goto label_230ec8;
        }
    }
    ctx->pc = 0x230EC4u;
    // 0x230ec4: 0xae550000  sw          $s5, 0x0($s2)
    ctx->pc = 0x230ec4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 21));
label_230ec8:
    // 0x230ec8: 0xae360000  sw          $s6, 0x0($s1)
    ctx->pc = 0x230ec8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 22));
    // 0x230ecc: 0x220902d  daddu       $s2, $s1, $zero
    ctx->pc = 0x230eccu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x230ed0: 0x8e650028  lw          $a1, 0x28($s3)
    ctx->pc = 0x230ed0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 40)));
    // 0x230ed4: 0x8e44000c  lw          $a0, 0xC($s2)
    ctx->pc = 0x230ed4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
label_230ed8:
    // 0x230ed8: 0xde620000  ld          $v0, 0x0($s3)
    ctx->pc = 0x230ed8u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x230edc: 0xde630010  ld          $v1, 0x10($s3)
    ctx->pc = 0x230edcu;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 19), 16)));
    // 0x230ee0: 0x44102d  daddu       $v0, $v0, $a0
    ctx->pc = 0x230ee0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 4));
    // 0x230ee4: 0x64630100  daddiu      $v1, $v1, 0x100
    ctx->pc = 0x230ee4u;
    SET_GPR_S64(ctx, 3, (int64_t)GPR_S64(ctx, 3) + (int64_t)(int32_t)256);
    // 0x230ee8: 0xfe620000  sd          $v0, 0x0($s3)
    ctx->pc = 0x230ee8u;
    WRITE64(ADD32(GPR_U32(ctx, 19), 0), GPR_U64(ctx, 2));
    // 0x230eec: 0xfe630010  sd          $v1, 0x10($s3)
    ctx->pc = 0x230eecu;
    WRITE64(ADD32(GPR_U32(ctx, 19), 16), GPR_U64(ctx, 3));
    // 0x230ef0: 0x96420012  lhu         $v0, 0x12($s2)
    ctx->pc = 0x230ef0u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 18)));
    // 0x230ef4: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x230ef4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x230ef8: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x230EF8u;
    {
        const bool branch_taken_0x230ef8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x230ef8) {
            ctx->pc = 0x230EFCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x230EF8u;
            // 0x230efc: 0x8e520000  lw          $s2, 0x0($s2) (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x230F10u;
            goto label_230f10;
        }
    }
    ctx->pc = 0x230F00u;
    // 0x230f00: 0x9e42002c  lwu         $v0, 0x2C($s2)
    ctx->pc = 0x230f00u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 18), 44)));
    // 0x230f04: 0x62102d  daddu       $v0, $v1, $v0
    ctx->pc = 0x230f04u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 2));
    // 0x230f08: 0xfe620010  sd          $v0, 0x10($s3)
    ctx->pc = 0x230f08u;
    WRITE64(ADD32(GPR_U32(ctx, 19), 16), GPR_U64(ctx, 2));
    // 0x230f0c: 0x8e520000  lw          $s2, 0x0($s2)
    ctx->pc = 0x230f0cu;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_230f10:
    // 0x230f10: 0x5640fff1  bnel        $s2, $zero, . + 4 + (-0xF << 2)
    ctx->pc = 0x230F10u;
    {
        const bool branch_taken_0x230f10 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        if (branch_taken_0x230f10) {
            ctx->pc = 0x230F14u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x230F10u;
            // 0x230f14: 0x8e44000c  lw          $a0, 0xC($s2) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x230ED8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_230ed8;
        }
    }
    ctx->pc = 0x230F18u;
    // 0x230f18: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x230f18u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x230f1c: 0x5240000c  beql        $s2, $zero, . + 4 + (0xC << 2)
    ctx->pc = 0x230F1Cu;
    {
        const bool branch_taken_0x230f1c = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x230f1c) {
            ctx->pc = 0x230F20u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x230F1Cu;
            // 0x230f20: 0xae710028  sw          $s1, 0x28($s3) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 19), 40), GPR_U32(ctx, 17));
            ctx->in_delay_slot = false;
            ctx->pc = 0x230F50u;
            goto label_230f50;
        }
    }
    ctx->pc = 0x230F24u;
    // 0x230f24: 0x8e430004  lw          $v1, 0x4($s2)
    ctx->pc = 0x230f24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x230f28: 0x50600009  beql        $v1, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x230F28u;
    {
        const bool branch_taken_0x230f28 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x230f28) {
            ctx->pc = 0x230F2Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x230F28u;
            // 0x230f2c: 0xae510004  sw          $s1, 0x4($s2) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 17));
            ctx->in_delay_slot = false;
            ctx->pc = 0x230F50u;
            goto label_230f50;
        }
    }
    ctx->pc = 0x230F30u;
label_230f30:
    // 0x230f30: 0x60902d  daddu       $s2, $v1, $zero
    ctx->pc = 0x230f30u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x230f34: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x230f34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x230f38: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x230f38u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x230f3c: 0x0  nop
    ctx->pc = 0x230f3cu;
    // NOP
    // 0x230f40: 0x0  nop
    ctx->pc = 0x230f40u;
    // NOP
    // 0x230f44: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x230F44u;
    {
        const bool branch_taken_0x230f44 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x230f44) {
            ctx->pc = 0x230F30u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_230f30;
        }
    }
    ctx->pc = 0x230F4Cu;
    // 0x230f4c: 0xae510004  sw          $s1, 0x4($s2)
    ctx->pc = 0x230f4cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 17));
label_230f50:
    // 0x230f50: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x230f50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_230f54:
    // 0x230f54: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x230f54u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_230f58:
    // 0x230f58: 0xdfb60060  ld          $s6, 0x60($sp)
    ctx->pc = 0x230f58u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x230f5c: 0xdfb50050  ld          $s5, 0x50($sp)
    ctx->pc = 0x230f5cu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x230f60: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x230f60u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x230f64: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x230f64u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x230f68: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x230f68u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x230f6c: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x230f6cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x230f70: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x230f70u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x230f74: 0x3e00008  jr          $ra
    ctx->pc = 0x230F74u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x230F78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x230F74u;
        // 0x230f78: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x230F74u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x230F7Cu;
    // 0x230f7c: 0x0  nop
    ctx->pc = 0x230f7cu;
    // NOP
    // 0x230f80: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x230f80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x230f84: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x230f84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x230f88: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x230f88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x230f8c: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x230f8cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x230f90: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x230f90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x230f94: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x230f94u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x230f98: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x230f98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x230f9c: 0x16200004  bnez        $s1, . + 4 + (0x4 << 2)
    ctx->pc = 0x230F9Cu;
    {
        const bool branch_taken_0x230f9c = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x230FA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x230F9Cu;
        // 0x230fa0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x230f9c) {
            ctx->pc = 0x230FB0u;
            goto label_230fb0;
        }
    }
    ctx->pc = 0x230FA4u;
    // 0x230fa4: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x230fa4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    // 0x230fa8: 0xc08b5e0  jal         func_22D780
    ctx->pc = 0x230FA8u;
    SET_GPR_U32(ctx, 31, 0x230FB0u);
    ctx->pc = 0x230FACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x230FA8u;
    // 0x230fac: 0x248446a8  addiu       $a0, $a0, 0x46A8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 18088));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22D780u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22D780u, 0x230FA8u, 0x230FB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x230FB0u;
label_230fb0:
    // 0x230fb0: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x230fb0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x230fb4: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x230fb4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x230fb8: 0x10600010  beqz        $v1, . + 4 + (0x10 << 2)
    ctx->pc = 0x230FB8u;
    {
        const bool branch_taken_0x230fb8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x230FBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x230FB8u;
        // 0x230fbc: 0x8e27000c  lw          $a3, 0xC($s1) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x230fb8) {
            ctx->pc = 0x230FFCu;
            goto label_230ffc;
        }
    }
    ctx->pc = 0x230FC0u;
    // 0x230fc0: 0xde0a0008  ld          $t2, 0x8($s0)
    ctx->pc = 0x230fc0u;
    SET_GPR_U64(ctx, 10, READ64(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x230fc4: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x230fc4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x230fc8: 0xde090000  ld          $t1, 0x0($s0)
    ctx->pc = 0x230fc8u;
    SET_GPR_U64(ctx, 9, READ64(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x230fcc: 0xde080018  ld          $t0, 0x18($s0)
    ctx->pc = 0x230fccu;
    SET_GPR_U64(ctx, 8, READ64(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x230fd0: 0xde040010  ld          $a0, 0x10($s0)
    ctx->pc = 0x230fd0u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x230fd4: 0x0  nop
    ctx->pc = 0x230fd4u;
    // NOP
label_230fd8:
    // 0x230fd8: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x230fd8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x230fdc: 0x8ca2000c  lw          $v0, 0xC($a1)
    ctx->pc = 0x230fdcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
    // 0x230fe0: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x230fe0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x230fe4: 0xe23821  addu        $a3, $a3, $v0
    ctx->pc = 0x230fe4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x230fe8: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x230fe8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x230fec: 0x1460fffa  bnez        $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x230FECu;
    {
        const bool branch_taken_0x230fec = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x230fec) {
            ctx->pc = 0x230FD8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_230fd8;
        }
    }
    ctx->pc = 0x230FF4u;
    // 0x230ff4: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x230FF4u;
    {
        const bool branch_taken_0x230ff4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x230FF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x230FF4u;
        // 0x230ff8: 0xa0302d  daddu       $a2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x230ff4) {
            ctx->pc = 0x231010u;
            goto label_231010;
        }
    }
    ctx->pc = 0x230FFCu;
label_230ffc:
    // 0x230ffc: 0xde0a0008  ld          $t2, 0x8($s0)
    ctx->pc = 0x230ffcu;
    SET_GPR_U64(ctx, 10, READ64(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x231000: 0xde090000  ld          $t1, 0x0($s0)
    ctx->pc = 0x231000u;
    SET_GPR_U64(ctx, 9, READ64(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x231004: 0xde080018  ld          $t0, 0x18($s0)
    ctx->pc = 0x231004u;
    SET_GPR_U64(ctx, 8, READ64(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x231008: 0xde040010  ld          $a0, 0x10($s0)
    ctx->pc = 0x231008u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x23100c: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x23100cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_231010:
    // 0x231010: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x231010u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x231014: 0x10a0000a  beqz        $a1, . + 4 + (0xA << 2)
    ctx->pc = 0x231014u;
    {
        const bool branch_taken_0x231014 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x231018u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x231014u;
        // 0x231018: 0x104182f  dsubu       $v1, $t0, $a0 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 8) - GPR_U64(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x231014) {
            ctx->pc = 0x231040u;
            goto label_231040;
        }
    }
    ctx->pc = 0x23101Cu;
    // 0x23101c: 0x0  nop
    ctx->pc = 0x23101cu;
    // NOP
label_231020:
    // 0x231020: 0x8ca2000c  lw          $v0, 0xC($a1)
    ctx->pc = 0x231020u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
    // 0x231024: 0x8ca50000  lw          $a1, 0x0($a1)
    ctx->pc = 0x231024u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x231028: 0xe23821  addu        $a3, $a3, $v0
    ctx->pc = 0x231028u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x23102c: 0x0  nop
    ctx->pc = 0x23102cu;
    // NOP
    // 0x231030: 0x0  nop
    ctx->pc = 0x231030u;
    // NOP
    // 0x231034: 0x14a0fffa  bnez        $a1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x231034u;
    {
        const bool branch_taken_0x231034 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x231034) {
            ctx->pc = 0x231020u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_231020;
        }
    }
    ctx->pc = 0x23103Cu;
    // 0x23103c: 0x104182f  dsubu       $v1, $t0, $a0
    ctx->pc = 0x23103cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 8) - GPR_U64(ctx, 4));
label_231040:
    // 0x231040: 0x149102f  dsubu       $v0, $t2, $t1
    ctx->pc = 0x231040u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 10) - GPR_U64(ctx, 9));
    // 0x231044: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x231044u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x231048: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x231048u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x23104c: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x23104cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x231050: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x231050u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x231054: 0x43202a  slt         $a0, $v0, $v1
    ctx->pc = 0x231054u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x231058: 0x64100a  movz        $v0, $v1, $a0
    ctx->pc = 0x231058u;
    if (GPR_U64(ctx, 4) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 3));
    // 0x23105c: 0x47102a  slt         $v0, $v0, $a3
    ctx->pc = 0x23105cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 7)) ? 1 : 0);
    // 0x231060: 0x14400024  bnez        $v0, . + 4 + (0x24 << 2)
    ctx->pc = 0x231060u;
    {
        const bool branch_taken_0x231060 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x231064u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x231060u;
        // 0x231064: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x231060) {
            ctx->pc = 0x2310F4u;
            goto label_2310f4;
        }
    }
    ctx->pc = 0x231068u;
    // 0x231068: 0xacd20000  sw          $s2, 0x0($a2)
    ctx->pc = 0x231068u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 18));
    // 0x23106c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x23106cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x231070: 0x8e060028  lw          $a2, 0x28($s0)
    ctx->pc = 0x231070u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
    // 0x231074: 0x8ca4000c  lw          $a0, 0xC($a1)
    ctx->pc = 0x231074u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
label_231078:
    // 0x231078: 0xde020000  ld          $v0, 0x0($s0)
    ctx->pc = 0x231078u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x23107c: 0xde030010  ld          $v1, 0x10($s0)
    ctx->pc = 0x23107cu;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x231080: 0x44102d  daddu       $v0, $v0, $a0
    ctx->pc = 0x231080u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 4));
    // 0x231084: 0x64630100  daddiu      $v1, $v1, 0x100
    ctx->pc = 0x231084u;
    SET_GPR_S64(ctx, 3, (int64_t)GPR_S64(ctx, 3) + (int64_t)(int32_t)256);
    // 0x231088: 0xfe020000  sd          $v0, 0x0($s0)
    ctx->pc = 0x231088u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 0), GPR_U64(ctx, 2));
    // 0x23108c: 0xfe030010  sd          $v1, 0x10($s0)
    ctx->pc = 0x23108cu;
    WRITE64(ADD32(GPR_U32(ctx, 16), 16), GPR_U64(ctx, 3));
    // 0x231090: 0x94a20012  lhu         $v0, 0x12($a1)
    ctx->pc = 0x231090u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 18)));
    // 0x231094: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x231094u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x231098: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x231098u;
    {
        const bool branch_taken_0x231098 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x231098) {
            ctx->pc = 0x23109Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x231098u;
            // 0x23109c: 0x8ca50000  lw          $a1, 0x0($a1) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2310B0u;
            goto label_2310b0;
        }
    }
    ctx->pc = 0x2310A0u;
    // 0x2310a0: 0x9ca2002c  lwu         $v0, 0x2C($a1)
    ctx->pc = 0x2310a0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 5), 44)));
    // 0x2310a4: 0x62102d  daddu       $v0, $v1, $v0
    ctx->pc = 0x2310a4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 2));
    // 0x2310a8: 0xfe020010  sd          $v0, 0x10($s0)
    ctx->pc = 0x2310a8u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 16), GPR_U64(ctx, 2));
    // 0x2310ac: 0x8ca50000  lw          $a1, 0x0($a1)
    ctx->pc = 0x2310acu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_2310b0:
    // 0x2310b0: 0x54a0fff1  bnel        $a1, $zero, . + 4 + (-0xF << 2)
    ctx->pc = 0x2310B0u;
    {
        const bool branch_taken_0x2310b0 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x2310b0) {
            ctx->pc = 0x2310B4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2310B0u;
            // 0x2310b4: 0x8ca4000c  lw          $a0, 0xC($a1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x231078u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_231078;
        }
    }
    ctx->pc = 0x2310B8u;
    // 0x2310b8: 0x50c0000d  beql        $a2, $zero, . + 4 + (0xD << 2)
    ctx->pc = 0x2310B8u;
    {
        const bool branch_taken_0x2310b8 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x2310b8) {
            ctx->pc = 0x2310BCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2310B8u;
            // 0x2310bc: 0xae110028  sw          $s1, 0x28($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 17));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2310F0u;
            goto label_2310f0;
        }
    }
    ctx->pc = 0x2310C0u;
    // 0x2310c0: 0x8cc30004  lw          $v1, 0x4($a2)
    ctx->pc = 0x2310c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x2310c4: 0x5060000a  beql        $v1, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x2310C4u;
    {
        const bool branch_taken_0x2310c4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2310c4) {
            ctx->pc = 0x2310C8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2310C4u;
            // 0x2310c8: 0xacd10004  sw          $s1, 0x4($a2) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 17));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2310F0u;
            goto label_2310f0;
        }
    }
    ctx->pc = 0x2310CCu;
    // 0x2310cc: 0x0  nop
    ctx->pc = 0x2310ccu;
    // NOP
label_2310d0:
    // 0x2310d0: 0x60302d  daddu       $a2, $v1, $zero
    ctx->pc = 0x2310d0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2310d4: 0x8cc20004  lw          $v0, 0x4($a2)
    ctx->pc = 0x2310d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x2310d8: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x2310d8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2310dc: 0x0  nop
    ctx->pc = 0x2310dcu;
    // NOP
    // 0x2310e0: 0x0  nop
    ctx->pc = 0x2310e0u;
    // NOP
    // 0x2310e4: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x2310E4u;
    {
        const bool branch_taken_0x2310e4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2310e4) {
            ctx->pc = 0x2310D0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2310d0;
        }
    }
    ctx->pc = 0x2310ECu;
    // 0x2310ec: 0xacd10004  sw          $s1, 0x4($a2)
    ctx->pc = 0x2310ecu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 17));
label_2310f0:
    // 0x2310f0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2310f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2310f4:
    // 0x2310f4: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x2310f4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2310f8: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x2310f8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2310fc: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x2310fcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x231100: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x231100u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x231104: 0x3e00008  jr          $ra
    ctx->pc = 0x231104u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x231108u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x231104u;
        // 0x231108: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x231104u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x23110Cu;
    // 0x23110c: 0x0  nop
    ctx->pc = 0x23110cu;
    // NOP
label_231110:
    // 0x231110: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x231110u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x231114: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x231114u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x231118: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x231118u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x23111c: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x23111cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x231120: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x231120u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x231124: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x231124u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x231128: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x231128u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x23112c: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x23112cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x231130: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x231130u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x231134: 0x12200061  beqz        $s1, . + 4 + (0x61 << 2)
    ctx->pc = 0x231134u;
    {
        const bool branch_taken_0x231134 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x231138u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x231134u;
        // 0x231138: 0xc0802d  daddu       $s0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x231134) {
            ctx->pc = 0x2312BCu;
            goto label_2312bc;
        }
    }
    ctx->pc = 0x23113Cu;
    // 0x23113c: 0x96220012  lhu         $v0, 0x12($s1)
    ctx->pc = 0x23113cu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 18)));
label_231140:
    // 0x231140: 0x8e27000c  lw          $a3, 0xC($s1)
    ctx->pc = 0x231140u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x231144: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x231144u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
    // 0x231148: 0x14e0000c  bnez        $a3, . + 4 + (0xC << 2)
    ctx->pc = 0x231148u;
    {
        const bool branch_taken_0x231148 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        ctx->pc = 0x23114Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x231148u;
        // 0x23114c: 0x2629825  or          $s3, $s3, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x231148) {
            ctx->pc = 0x23117Cu;
            goto label_23117c;
        }
    }
    ctx->pc = 0x231150u;
    // 0x231150: 0x1260003c  beqz        $s3, . + 4 + (0x3C << 2)
    ctx->pc = 0x231150u;
    {
        const bool branch_taken_0x231150 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x231154u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x231150u;
        // 0x231154: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x231150) {
            ctx->pc = 0x231244u;
            goto label_231244;
        }
    }
    ctx->pc = 0x231158u;
    // 0x231158: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x231158u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x23115c: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x23115Cu;
    {
        const bool branch_taken_0x23115c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x23115c) {
            ctx->pc = 0x231160u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23115Cu;
            // 0x231160: 0x84430010  lh          $v1, 0x10($v0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x231170u;
            goto label_231170;
        }
    }
    ctx->pc = 0x231164u;
    // 0x231164: 0x1200003f  beqz        $s0, . + 4 + (0x3F << 2)
    ctx->pc = 0x231164u;
    {
        const bool branch_taken_0x231164 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x231168u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x231164u;
        // 0x231168: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x231164) {
            ctx->pc = 0x231264u;
            goto label_231264;
        }
    }
    ctx->pc = 0x23116Cu;
    // 0x23116c: 0x84430010  lh          $v1, 0x10($v0)
    ctx->pc = 0x23116cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 16)));
label_231170:
    // 0x231170: 0x86220010  lh          $v0, 0x10($s1)
    ctx->pc = 0x231170u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x231174: 0x10620033  beq         $v1, $v0, . + 4 + (0x33 << 2)
    ctx->pc = 0x231174u;
    {
        const bool branch_taken_0x231174 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x231178u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x231174u;
        // 0x231178: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x231174) {
            ctx->pc = 0x231244u;
            goto label_231244;
        }
    }
    ctx->pc = 0x23117Cu;
label_23117c:
    // 0x23117c: 0x5200003a  beql        $s0, $zero, . + 4 + (0x3A << 2)
    ctx->pc = 0x23117Cu;
    {
        const bool branch_taken_0x23117c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x23117c) {
            ctx->pc = 0x231180u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23117Cu;
            // 0x231180: 0xae510028  sw          $s1, 0x28($s2) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 18), 40), GPR_U32(ctx, 17));
            ctx->in_delay_slot = false;
            ctx->pc = 0x231268u;
            goto label_231268;
        }
    }
    ctx->pc = 0x231184u;
    // 0x231184: 0x96050012  lhu         $a1, 0x12($s0)
    ctx->pc = 0x231184u;
    SET_GPR_U32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 18)));
    // 0x231188: 0x30a20004  andi        $v0, $a1, 0x4
    ctx->pc = 0x231188u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)4);
    // 0x23118c: 0x14400031  bnez        $v0, . + 4 + (0x31 << 2)
    ctx->pc = 0x23118Cu;
    {
        const bool branch_taken_0x23118c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x23118c) {
            ctx->pc = 0x231254u;
            goto label_231254;
        }
    }
    ctx->pc = 0x231194u;
    // 0x231194: 0x86030010  lh          $v1, 0x10($s0)
    ctx->pc = 0x231194u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x231198: 0x86220010  lh          $v0, 0x10($s1)
    ctx->pc = 0x231198u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x23119c: 0x1462002d  bne         $v1, $v0, . + 4 + (0x2D << 2)
    ctx->pc = 0x23119Cu;
    {
        const bool branch_taken_0x23119c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2311A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23119Cu;
        // 0x2311a0: 0x30a20001  andi        $v0, $a1, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x23119c) {
            ctx->pc = 0x231254u;
            goto label_231254;
        }
    }
    ctx->pc = 0x2311A4u;
    // 0x2311a4: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x2311A4u;
    {
        const bool branch_taken_0x2311a4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2311A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2311A4u;
        // 0x2311a8: 0x51400  sll         $v0, $a1, 16 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2311a4) {
            ctx->pc = 0x2311CCu;
            goto label_2311cc;
        }
    }
    ctx->pc = 0x2311ACu;
    // 0x2311ac: 0x8e040008  lw          $a0, 0x8($s0)
    ctx->pc = 0x2311acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x2311b0: 0x26030100  addiu       $v1, $s0, 0x100
    ctx->pc = 0x2311b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 256));
    // 0x2311b4: 0x8e06000c  lw          $a2, 0xC($s0)
    ctx->pc = 0x2311b4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x2311b8: 0x861021  addu        $v0, $a0, $a2
    ctx->pc = 0x2311b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
    // 0x2311bc: 0x471021  addu        $v0, $v0, $a3
    ctx->pc = 0x2311bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x2311c0: 0x62182b  sltu        $v1, $v1, $v0
    ctx->pc = 0x2311c0u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x2311c4: 0x10600012  beqz        $v1, . + 4 + (0x12 << 2)
    ctx->pc = 0x2311C4u;
    {
        const bool branch_taken_0x2311c4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2311C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2311C4u;
        // 0x2311c8: 0x51400  sll         $v0, $a1, 16 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2311c4) {
            ctx->pc = 0x231210u;
            goto label_231210;
        }
    }
    ctx->pc = 0x2311CCu;
label_2311cc:
    // 0x2311cc: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x2311ccu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x2311d0: 0x21027  nor         $v0, $zero, $v0
    ctx->pc = 0x2311d0u;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 2)));
    // 0x2311d4: 0x30420009  andi        $v0, $v0, 0x9
    ctx->pc = 0x2311d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)9);
    // 0x2311d8: 0x1440001e  bnez        $v0, . + 4 + (0x1E << 2)
    ctx->pc = 0x2311D8u;
    {
        const bool branch_taken_0x2311d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2311d8) {
            ctx->pc = 0x231254u;
            goto label_231254;
        }
    }
    ctx->pc = 0x2311E0u;
    // 0x2311e0: 0x8e020034  lw          $v0, 0x34($s0)
    ctx->pc = 0x2311e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 52)));
    // 0x2311e4: 0x1450001b  bne         $v0, $s0, . + 4 + (0x1B << 2)
    ctx->pc = 0x2311E4u;
    {
        const bool branch_taken_0x2311e4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        if (branch_taken_0x2311e4) {
            ctx->pc = 0x231254u;
            goto label_231254;
        }
    }
    ctx->pc = 0x2311ECu;
    // 0x2311ec: 0x8e040008  lw          $a0, 0x8($s0)
    ctx->pc = 0x2311ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x2311f0: 0x8e06000c  lw          $a2, 0xC($s0)
    ctx->pc = 0x2311f0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x2311f4: 0x8e030020  lw          $v1, 0x20($s0)
    ctx->pc = 0x2311f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x2311f8: 0x861021  addu        $v0, $a0, $a2
    ctx->pc = 0x2311f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
    // 0x2311fc: 0x471021  addu        $v0, $v0, $a3
    ctx->pc = 0x2311fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x231200: 0x24630800  addiu       $v1, $v1, 0x800
    ctx->pc = 0x231200u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 2048));
    // 0x231204: 0x62182b  sltu        $v1, $v1, $v0
    ctx->pc = 0x231204u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x231208: 0x14600012  bnez        $v1, . + 4 + (0x12 << 2)
    ctx->pc = 0x231208u;
    {
        const bool branch_taken_0x231208 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x231208) {
            ctx->pc = 0x231254u;
            goto label_231254;
        }
    }
    ctx->pc = 0x231210u;
label_231210:
    // 0x231210: 0x862021  addu        $a0, $a0, $a2
    ctx->pc = 0x231210u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
    // 0x231214: 0x8e250008  lw          $a1, 0x8($s1)
    ctx->pc = 0x231214u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x231218: 0xc08b538  jal         func_22D4E0
    ctx->pc = 0x231218u;
    SET_GPR_U32(ctx, 31, 0x231220u);
    ctx->pc = 0x23121Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x231218u;
    // 0x23121c: 0x8e26000c  lw          $a2, 0xC($s1) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22D4E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22D4E0u, 0x231218u, 0x231220u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x231220u;
label_231220:
    // 0x231220: 0x8e23000c  lw          $v1, 0xC($s1)
    ctx->pc = 0x231220u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x231224: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x231224u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x231228: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x231228u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x23122c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x23122cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x231230: 0xae02000c  sw          $v0, 0xC($s0)
    ctx->pc = 0x231230u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
    // 0x231234: 0x8e23000c  lw          $v1, 0xC($s1)
    ctx->pc = 0x231234u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x231238: 0xde420000  ld          $v0, 0x0($s2)
    ctx->pc = 0x231238u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x23123c: 0x43102d  daddu       $v0, $v0, $v1
    ctx->pc = 0x23123cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 3));
    // 0x231240: 0xfe420000  sd          $v0, 0x0($s2)
    ctx->pc = 0x231240u;
    WRITE64(ADD32(GPR_U32(ctx, 18), 0), GPR_U64(ctx, 2));
label_231244:
    // 0x231244: 0xc08a996  jal         func_22A658
    ctx->pc = 0x231244u;
    SET_GPR_U32(ctx, 31, 0x23124Cu);
    ctx->pc = 0x22A658u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22A658u, 0x231244u, 0x23124Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23124Cu;
label_23124c:
    // 0x23124c: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x23124Cu;
    {
        const bool branch_taken_0x23124c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x231250u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23124Cu;
        // 0x231250: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23124c) {
            ctx->pc = 0x2312B4u;
            goto label_2312b4;
        }
    }
    ctx->pc = 0x231254u;
label_231254:
    // 0x231254: 0x52000004  beql        $s0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x231254u;
    {
        const bool branch_taken_0x231254 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x231254) {
            ctx->pc = 0x231258u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x231254u;
            // 0x231258: 0xae510028  sw          $s1, 0x28($s2) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 18), 40), GPR_U32(ctx, 17));
            ctx->in_delay_slot = false;
            ctx->pc = 0x231268u;
            goto label_231268;
        }
    }
    ctx->pc = 0x23125Cu;
    // 0x23125c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x23125Cu;
    {
        const bool branch_taken_0x23125c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x231260u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23125Cu;
        // 0x231260: 0xae110000  sw          $s1, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23125c) {
            ctx->pc = 0x231268u;
            goto label_231268;
        }
    }
    ctx->pc = 0x231264u;
label_231264:
    // 0x231264: 0xae510028  sw          $s1, 0x28($s2)
    ctx->pc = 0x231264u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 40), GPR_U32(ctx, 17));
label_231268:
    // 0x231268: 0x8e24000c  lw          $a0, 0xC($s1)
    ctx->pc = 0x231268u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x23126c: 0xde420000  ld          $v0, 0x0($s2)
    ctx->pc = 0x23126cu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x231270: 0xde430010  ld          $v1, 0x10($s2)
    ctx->pc = 0x231270u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 18), 16)));
    // 0x231274: 0x44102d  daddu       $v0, $v0, $a0
    ctx->pc = 0x231274u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 4));
    // 0x231278: 0x64630100  daddiu      $v1, $v1, 0x100
    ctx->pc = 0x231278u;
    SET_GPR_S64(ctx, 3, (int64_t)GPR_S64(ctx, 3) + (int64_t)(int32_t)256);
    // 0x23127c: 0xfe420000  sd          $v0, 0x0($s2)
    ctx->pc = 0x23127cu;
    WRITE64(ADD32(GPR_U32(ctx, 18), 0), GPR_U64(ctx, 2));
    // 0x231280: 0xfe430010  sd          $v1, 0x10($s2)
    ctx->pc = 0x231280u;
    WRITE64(ADD32(GPR_U32(ctx, 18), 16), GPR_U64(ctx, 3));
    // 0x231284: 0x96220012  lhu         $v0, 0x12($s1)
    ctx->pc = 0x231284u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 18)));
    // 0x231288: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x231288u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x23128c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x23128Cu;
    {
        const bool branch_taken_0x23128c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x231290u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23128Cu;
        // 0x231290: 0x220802d  daddu       $s0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23128c) {
            ctx->pc = 0x2312A0u;
            goto label_2312a0;
        }
    }
    ctx->pc = 0x231294u;
    // 0x231294: 0x9e22002c  lwu         $v0, 0x2C($s1)
    ctx->pc = 0x231294u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 44)));
    // 0x231298: 0x62102d  daddu       $v0, $v1, $v0
    ctx->pc = 0x231298u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 2));
    // 0x23129c: 0xfe420010  sd          $v0, 0x10($s2)
    ctx->pc = 0x23129cu;
    WRITE64(ADD32(GPR_U32(ctx, 18), 16), GPR_U64(ctx, 2));
label_2312a0:
    // 0x2312a0: 0x96020012  lhu         $v0, 0x12($s0)
    ctx->pc = 0x2312a0u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 18)));
    // 0x2312a4: 0x8e110000  lw          $s1, 0x0($s0)
    ctx->pc = 0x2312a4u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2312a8: 0x3042fffb  andi        $v0, $v0, 0xFFFB
    ctx->pc = 0x2312a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65531);
    // 0x2312ac: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x2312acu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
    // 0x2312b0: 0xa6020012  sh          $v0, 0x12($s0)
    ctx->pc = 0x2312b0u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 18), (uint16_t)GPR_U32(ctx, 2));
label_2312b4:
    // 0x2312b4: 0x5620ffa2  bnel        $s1, $zero, . + 4 + (-0x5E << 2)
    ctx->pc = 0x2312B4u;
    {
        const bool branch_taken_0x2312b4 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x2312b4) {
            ctx->pc = 0x2312B8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2312B4u;
            // 0x2312b8: 0x96220012  lhu         $v0, 0x12($s1) (Delay Slot)
            SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 18)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x231140u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_231140;
        }
    }
    ctx->pc = 0x2312BCu;
label_2312bc:
    // 0x2312bc: 0x1260000f  beqz        $s3, . + 4 + (0xF << 2)
    ctx->pc = 0x2312BCu;
    {
        const bool branch_taken_0x2312bc = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x2312C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2312BCu;
        // 0x2312c0: 0xdfbf0040  ld          $ra, 0x40($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2312bc) {
            ctx->pc = 0x2312FCu;
            goto label_2312fc;
        }
    }
    ctx->pc = 0x2312C4u;
    // 0x2312c4: 0x12000005  beqz        $s0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2312C4u;
    {
        const bool branch_taken_0x2312c4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2312C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2312C4u;
        // 0x2312c8: 0x3c05003f  lui         $a1, 0x3F (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)63 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2312c4) {
            ctx->pc = 0x2312DCu;
            goto label_2312dc;
        }
    }
    ctx->pc = 0x2312CCu;
    // 0x2312cc: 0x96020012  lhu         $v0, 0x12($s0)
    ctx->pc = 0x2312ccu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 18)));
    // 0x2312d0: 0x531025  or          $v0, $v0, $s3
    ctx->pc = 0x2312d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 19));
    // 0x2312d4: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x2312D4u;
    {
        const bool branch_taken_0x2312d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2312D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2312D4u;
        // 0x2312d8: 0xa6020012  sh          $v0, 0x12($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 18), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2312d4) {
            ctx->pc = 0x2312FCu;
            goto label_2312fc;
        }
    }
    ctx->pc = 0x2312DCu;
label_2312dc:
    // 0x2312dc: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x2312dcu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2312e0: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x2312e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2312e4: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x2312e4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2312e8: 0x24a546b8  addiu       $a1, $a1, 0x46B8
    ctx->pc = 0x2312e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 18104));
    // 0x2312ec: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x2312ecu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2312f0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2312f0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2312f4: 0x808b5ac  j           func_22D6B0
    ctx->pc = 0x2312F4u;
    ctx->pc = 0x2312F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2312F4u;
    // 0x2312f8: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22D6B0u;
    sub_0022D6B0_0x22d6b0(rdram, ctx, runtime); return;
    ctx->pc = 0x2312FCu;
label_2312fc:
    // 0x2312fc: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x2312fcu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x231300: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x231300u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x231304: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x231304u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x231308: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x231308u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x23130c: 0x3e00008  jr          $ra
    ctx->pc = 0x23130Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x231310u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23130Cu;
        // 0x231310: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23130Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x231314u;
    // 0x231314: 0x0  nop
    ctx->pc = 0x231314u;
    // NOP
}
