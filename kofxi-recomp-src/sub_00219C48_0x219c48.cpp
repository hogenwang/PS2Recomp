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

// Function: sub_00219C48
// Address: 0x219c48 - 0x219f70
void sub_00219C48_0x219c48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00219C48_0x219c48");
#endif

    switch (ctx->pc) {
        case 0x219c64u: goto label_219c64;
        case 0x219c74u: goto label_219c74;
        case 0x219cf4u: goto label_219cf4;
        case 0x219d0cu: goto label_219d0c;
        case 0x219d48u: goto label_219d48;
        case 0x219d58u: goto label_219d58;
        case 0x219d98u: goto label_219d98;
        case 0x219da8u: goto label_219da8;
        case 0x219df4u: goto label_219df4;
        case 0x219e30u: goto label_219e30;
        case 0x219ec4u: goto label_219ec4;
        case 0x219edcu: goto label_219edc;
        case 0x219f08u: goto label_219f08;
        case 0x219f14u: goto label_219f14;
        case 0x219f3cu: goto label_219f3c;
        case 0x219f44u: goto label_219f44;
        default: break;
    }

    ctx->pc = 0x219c48u;

label_219c48:
    // 0x219c48: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x219c48u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x219c4c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x219c4cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x219c50: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x219c50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x219c54: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x219c54u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x219c58: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x219c58u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    // 0x219c5c: 0xc043e52  jal         func_10F948
    ctx->pc = 0x219C5Cu;
    SET_GPR_U32(ctx, 31, 0x219C64u);
    ctx->pc = 0x219C60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x219C5Cu;
    // 0x219c60: 0x24841350  addiu       $a0, $a0, 0x1350 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4944));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F948u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F948u, 0x219C5Cu, 0x219C64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x219C64u;
label_219c64:
    // 0x219c64: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x219c64u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x219c68: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x219c68u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    // 0x219c6c: 0xc043e52  jal         func_10F948
    ctx->pc = 0x219C6Cu;
    SET_GPR_U32(ctx, 31, 0x219C74u);
    ctx->pc = 0x219C70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x219C6Cu;
    // 0x219c70: 0x24841120  addiu       $a0, $a0, 0x1120 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4384));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F948u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F948u, 0x219C6Cu, 0x219C74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x219C74u;
label_219c74:
    // 0x219c74: 0x8e050004  lw          $a1, 0x4($s0)
    ctx->pc = 0x219c74u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x219c78: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x219c78u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    // 0x219c7c: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x219c7cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x219c80: 0x248410f0  addiu       $a0, $a0, 0x10F0
    ctx->pc = 0x219c80u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4336));
    // 0x219c84: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x219c84u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x219c88: 0x8043e52  j           func_10F948
    ctx->pc = 0x219C88u;
    ctx->pc = 0x219C8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x219C88u;
    // 0x219c8c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F948u;
    sub_0010F948_0x10f948(rdram, ctx, runtime); return;
    ctx->pc = 0x219C90u;
    // 0x219c90: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x219c90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x219c94: 0x240effff  addiu       $t6, $zero, -0x1
    ctx->pc = 0x219c94u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x219c98: 0xffb40030  sd          $s4, 0x30($sp)
    ctx->pc = 0x219c98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 20));
    // 0x219c9c: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x219c9cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x219ca0: 0x3c14003a  lui         $s4, 0x3A
    ctx->pc = 0x219ca0u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)58 << 16));
    // 0x219ca4: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x219ca4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x219ca8: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x219ca8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x219cac: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x219cacu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x219cb0: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x219cb0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
    // 0x219cb4: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x219cb4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x219cb8: 0xffbf0058  sd          $ra, 0x58($sp)
    ctx->pc = 0x219cb8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 31));
    // 0x219cbc: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x219cbcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x219cc0: 0xffb50038  sd          $s5, 0x38($sp)
    ctx->pc = 0x219cc0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 21));
    // 0x219cc4: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x219cc4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x219cc8: 0xffb60040  sd          $s6, 0x40($sp)
    ctx->pc = 0x219cc8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 22));
    // 0x219ccc: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x219cccu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x219cd0: 0xffb70048  sd          $s7, 0x48($sp)
    ctx->pc = 0x219cd0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 23));
    // 0x219cd4: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x219cd4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x219cd8: 0xffbe0050  sd          $fp, 0x50($sp)
    ctx->pc = 0x219cd8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 30));
    // 0x219cdc: 0xae80ab58  sw          $zero, -0x54A8($s4)
    ctx->pc = 0x219cdcu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 4294945624), GPR_U32(ctx, 0));
    // 0x219ce0: 0x8cad0000  lw          $t5, 0x0($a1)
    ctx->pc = 0x219ce0u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x219ce4: 0xafae0000  sw          $t6, 0x0($sp)
    ctx->pc = 0x219ce4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 14));
    // 0x219ce8: 0xafad0004  sw          $t5, 0x4($sp)
    ctx->pc = 0x219ce8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 13));
    // 0x219cec: 0xc0844dc  jal         func_211370
    ctx->pc = 0x219CECu;
    SET_GPR_U32(ctx, 31, 0x219CF4u);
    ctx->pc = 0x219CF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x219CECu;
    // 0x219cf0: 0x8e550000  lw          $s5, 0x0($s2) (Delay Slot)
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x211370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x211370u, 0x219CECu, 0x219CF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x219CF4u;
label_219cf4:
    // 0x219cf4: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x219cf4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x219cf8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x219cf8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x219cfc: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x219cfcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x219d00: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x219d00u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x219d04: 0xc084520  jal         func_211480
    ctx->pc = 0x219D04u;
    SET_GPR_U32(ctx, 31, 0x219D0Cu);
    ctx->pc = 0x219D08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x219D04u;
    // 0x219d08: 0x3a0402d  daddu       $t0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x211480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x211480u, 0x219D04u, 0x219D0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x219D0Cu;
label_219d0c:
    // 0x219d0c: 0x8fae0000  lw          $t6, 0x0($sp)
    ctx->pc = 0x219d0cu;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x219d10: 0x29cf0033  slti        $t7, $t6, 0x33
    ctx->pc = 0x219d10u;
    SET_GPR_U64(ctx, 15, ((int64_t)GPR_S64(ctx, 14) < (int64_t)(int32_t)51) ? 1 : 0);
    // 0x219d14: 0x11e00047  beqz        $t7, . + 4 + (0x47 << 2)
    ctx->pc = 0x219D14u;
    {
        const bool branch_taken_0x219d14 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x219D18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x219D14u;
        // 0x219d18: 0x240dffff  addiu       $t5, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x219d14) {
            ctx->pc = 0x219E34u;
            goto label_219e34;
        }
    }
    ctx->pc = 0x219D1Cu;
    // 0x219d1c: 0x5c10003  bgez        $t6, . + 4 + (0x3 << 2)
    ctx->pc = 0x219D1Cu;
    {
        const bool branch_taken_0x219d1c = (GPR_S32(ctx, 14) >= 0);
        if (branch_taken_0x219d1c) {
            ctx->pc = 0x219D2Cu;
            goto label_219d2c;
        }
    }
    ctx->pc = 0x219D24u;
    // 0x219d24: 0x240e0032  addiu       $t6, $zero, 0x32
    ctx->pc = 0x219d24u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 50));
    // 0x219d28: 0xafae0000  sw          $t6, 0x0($sp)
    ctx->pc = 0x219d28u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 14));
label_219d2c:
    // 0x219d2c: 0x19c0002c  blez        $t6, . + 4 + (0x2C << 2)
    ctx->pc = 0x219D2Cu;
    {
        const bool branch_taken_0x219d2c = (GPR_S32(ctx, 14) <= 0);
        ctx->pc = 0x219D30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x219D2Cu;
        // 0x219d30: 0x29cf0032  slti        $t7, $t6, 0x32 (Delay Slot)
        SET_GPR_U64(ctx, 15, ((int64_t)GPR_S64(ctx, 14) < (int64_t)(int32_t)50) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x219d2c) {
            ctx->pc = 0x219DE0u;
            goto label_219de0;
        }
    }
    ctx->pc = 0x219D34u;
    // 0x219d34: 0x280b02d  daddu       $s6, $s4, $zero
    ctx->pc = 0x219d34u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x219d38: 0x241effff  addiu       $fp, $zero, -0x1
    ctx->pc = 0x219d38u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x219d3c: 0x3c14003a  lui         $s4, 0x3A
    ctx->pc = 0x219d3cu;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)58 << 16));
    // 0x219d40: 0x2c0b82d  daddu       $s7, $s6, $zero
    ctx->pc = 0x219d40u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x219d44: 0xae80ab60  sw          $zero, -0x54A0($s4)
    ctx->pc = 0x219d44u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 4294945632), GPR_U32(ctx, 0));
label_219d48:
    // 0x219d48: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x219d48u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x219d4c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x219d4cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x219d50: 0xc084bc0  jal         func_212F00
    ctx->pc = 0x219D50u;
    SET_GPR_U32(ctx, 31, 0x219D58u);
    ctx->pc = 0x219D54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x219D50u;
    // 0x219d54: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x212F00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x212F00u, 0x219D50u, 0x219D58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x219D58u;
label_219d58:
    // 0x219d58: 0x4400036  bltz        $v0, . + 4 + (0x36 << 2)
    ctx->pc = 0x219D58u;
    {
        const bool branch_taken_0x219d58 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x219D5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x219D58u;
        // 0x219d5c: 0x682d  daddu       $t5, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x219d58) {
            ctx->pc = 0x219E34u;
            goto label_219e34;
        }
    }
    ctx->pc = 0x219D60u;
    // 0x219d60: 0x8e8fab60  lw          $t7, -0x54A0($s4)
    ctx->pc = 0x219d60u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4294945632)));
    // 0x219d64: 0x11e00019  beqz        $t7, . + 4 + (0x19 << 2)
    ctx->pc = 0x219D64u;
    {
        const bool branch_taken_0x219d64 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x219D68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x219D64u;
        // 0x219d68: 0x8fae0000  lw          $t6, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x219d64) {
            ctx->pc = 0x219DCCu;
            goto label_219dcc;
        }
    }
    ctx->pc = 0x219D6Cu;
    // 0x219d6c: 0x8ecdab58  lw          $t5, -0x54A8($s6)
    ctx->pc = 0x219d6cu;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4294945624)));
    // 0x219d70: 0x31af0003  andi        $t7, $t5, 0x3
    ctx->pc = 0x219d70u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 13) & (uint64_t)(uint16_t)3);
    // 0x219d74: 0x11e0003c  beqz        $t7, . + 4 + (0x3C << 2)
    ctx->pc = 0x219D74u;
    {
        const bool branch_taken_0x219d74 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x219D78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x219D74u;
        // 0x219d78: 0x25af0003  addiu       $t7, $t5, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 13), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x219d74) {
            ctx->pc = 0x219E68u;
            goto label_219e68;
        }
    }
    ctx->pc = 0x219D7Cu;
    // 0x219d7c: 0x29ae0000  slti        $t6, $t5, 0x0
    ctx->pc = 0x219d7cu;
    SET_GPR_U64(ctx, 14, ((int64_t)GPR_S64(ctx, 13) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x219d80: 0x1ae780a  movz        $t7, $t5, $t6
    ctx->pc = 0x219d80u;
    if (GPR_U64(ctx, 14) == 0) SET_GPR_VEC(ctx, 15, GPR_VEC(ctx, 13));
    // 0x219d84: 0xf7883  sra         $t7, $t7, 2
    ctx->pc = 0x219d84u;
    SET_GPR_S32(ctx, 15, SRA32(GPR_S32(ctx, 15), 2));
    // 0x219d88: 0xf7880  sll         $t7, $t7, 2
    ctx->pc = 0x219d88u;
    SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 15), 2));
    // 0x219d8c: 0x1af7823  subu        $t7, $t5, $t7
    ctx->pc = 0x219d8cu;
    SET_GPR_S32(ctx, 15, (int32_t)SUB32(GPR_U32(ctx, 13), GPR_U32(ctx, 15)));
    // 0x219d90: 0x240d0004  addiu       $t5, $zero, 0x4
    ctx->pc = 0x219d90u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x219d94: 0x1af7023  subu        $t6, $t5, $t7
    ctx->pc = 0x219d94u;
    SET_GPR_S32(ctx, 14, (int32_t)SUB32(GPR_U32(ctx, 13), GPR_U32(ctx, 15)));
label_219d98:
    // 0x219d98: 0x25ceffff  addiu       $t6, $t6, -0x1
    ctx->pc = 0x219d98u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 4294967295));
    // 0x219d9c: 0x51de000a  beql        $t6, $fp, . + 4 + (0xA << 2)
    ctx->pc = 0x219D9Cu;
    {
        const bool branch_taken_0x219d9c = (GPR_U64(ctx, 14) == GPR_U64(ctx, 30));
        if (branch_taken_0x219d9c) {
            ctx->pc = 0x219DA0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x219D9Cu;
            // 0x219da0: 0xaee0ab58  sw          $zero, -0x54A8($s7) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 23), 4294945624), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x219DC8u;
            goto label_219dc8;
        }
    }
    ctx->pc = 0x219DA4u;
    // 0x219da4: 0x240dffff  addiu       $t5, $zero, -0x1
    ctx->pc = 0x219da4u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_219da8:
    // 0x219da8: 0x8e0f0000  lw          $t7, 0x0($s0)
    ctx->pc = 0x219da8u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x219dac: 0x25ceffff  addiu       $t6, $t6, -0x1
    ctx->pc = 0x219dacu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 4294967295));
    // 0x219db0: 0xa1e00000  sb          $zero, 0x0($t7)
    ctx->pc = 0x219db0u;
    WRITE8(ADD32(GPR_U32(ctx, 15), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x219db4: 0x25ef0001  addiu       $t7, $t7, 0x1
    ctx->pc = 0x219db4u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 1));
    // 0x219db8: 0x0  nop
    ctx->pc = 0x219db8u;
    // NOP
    // 0x219dbc: 0x15cdfffa  bne         $t6, $t5, . + 4 + (-0x6 << 2)
    ctx->pc = 0x219DBCu;
    {
        const bool branch_taken_0x219dbc = (GPR_U64(ctx, 14) != GPR_U64(ctx, 13));
        ctx->pc = 0x219DC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x219DBCu;
        // 0x219dc0: 0xae0f0000  sw          $t7, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 15));
        ctx->in_delay_slot = false;
        if (branch_taken_0x219dbc) {
            ctx->pc = 0x219DA8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_219da8;
        }
    }
    ctx->pc = 0x219DC4u;
    // 0x219dc4: 0xaee0ab58  sw          $zero, -0x54A8($s7)
    ctx->pc = 0x219dc4u;
    WRITE32(ADD32(GPR_U32(ctx, 23), 4294945624), GPR_U32(ctx, 0));
label_219dc8:
    // 0x219dc8: 0x8fae0000  lw          $t6, 0x0($sp)
    ctx->pc = 0x219dc8u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_219dcc:
    // 0x219dcc: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x219dccu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x219dd0: 0x22e782a  slt         $t7, $s1, $t6
    ctx->pc = 0x219dd0u;
    SET_GPR_U64(ctx, 15, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 14)) ? 1 : 0);
    // 0x219dd4: 0x55e0ffdc  bnel        $t7, $zero, . + 4 + (-0x24 << 2)
    ctx->pc = 0x219DD4u;
    {
        const bool branch_taken_0x219dd4 = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        if (branch_taken_0x219dd4) {
            ctx->pc = 0x219DD8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x219DD4u;
            // 0x219dd8: 0xae80ab60  sw          $zero, -0x54A0($s4) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 20), 4294945632), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x219D48u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_219d48;
        }
    }
    ctx->pc = 0x219DDCu;
    // 0x219ddc: 0x29cf0032  slti        $t7, $t6, 0x32
    ctx->pc = 0x219ddcu;
    SET_GPR_U64(ctx, 15, ((int64_t)GPR_S64(ctx, 14) < (int64_t)(int32_t)50) ? 1 : 0);
label_219de0:
    // 0x219de0: 0x11e0000d  beqz        $t7, . + 4 + (0xD << 2)
    ctx->pc = 0x219DE0u;
    {
        const bool branch_taken_0x219de0 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x219DE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x219DE0u;
        // 0x219de4: 0x1c0882d  daddu       $s1, $t6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 14) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x219de0) {
            ctx->pc = 0x219E18u;
            goto label_219e18;
        }
    }
    ctx->pc = 0x219DE8u;
    // 0x219de8: 0x3c0c003a  lui         $t4, 0x3A
    ctx->pc = 0x219de8u;
    SET_GPR_S32(ctx, 12, (int32_t)((uint32_t)58 << 16));
    // 0x219dec: 0x8e0d0000  lw          $t5, 0x0($s0)
    ctx->pc = 0x219decu;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x219df0: 0x8d8eab58  lw          $t6, -0x54A8($t4)
    ctx->pc = 0x219df0u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 4294945624)));
label_219df4:
    // 0x219df4: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x219df4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x219df8: 0x25ad00a4  addiu       $t5, $t5, 0xA4
    ctx->pc = 0x219df8u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), 164));
    // 0x219dfc: 0x2a2f0032  slti        $t7, $s1, 0x32
    ctx->pc = 0x219dfcu;
    SET_GPR_U64(ctx, 15, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)50) ? 1 : 0);
    // 0x219e00: 0x0  nop
    ctx->pc = 0x219e00u;
    // NOP
    // 0x219e04: 0x0  nop
    ctx->pc = 0x219e04u;
    // NOP
    // 0x219e08: 0x15e0fffa  bnez        $t7, . + 4 + (-0x6 << 2)
    ctx->pc = 0x219E08u;
    {
        const bool branch_taken_0x219e08 = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        ctx->pc = 0x219E0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x219E08u;
        // 0x219e0c: 0x25ce00a4  addiu       $t6, $t6, 0xA4 (Delay Slot)
        SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 164));
        ctx->in_delay_slot = false;
        if (branch_taken_0x219e08) {
            ctx->pc = 0x219DF4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_219df4;
        }
    }
    ctx->pc = 0x219E10u;
    // 0x219e10: 0xad8eab58  sw          $t6, -0x54A8($t4)
    ctx->pc = 0x219e10u;
    WRITE32(ADD32(GPR_U32(ctx, 12), 4294945624), GPR_U32(ctx, 14));
    // 0x219e14: 0xae0d0000  sw          $t5, 0x0($s0)
    ctx->pc = 0x219e14u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 13));
label_219e18:
    // 0x219e18: 0x8e4f0000  lw          $t7, 0x0($s2)
    ctx->pc = 0x219e18u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x219e1c: 0x240effff  addiu       $t6, $zero, -0x1
    ctx->pc = 0x219e1cu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x219e20: 0x8fa40004  lw          $a0, 0x4($sp)
    ctx->pc = 0x219e20u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x219e24: 0xafae0000  sw          $t6, 0x0($sp)
    ctx->pc = 0x219e24u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 14));
    // 0x219e28: 0xc086712  jal         func_219C48
    ctx->pc = 0x219E28u;
    SET_GPR_U32(ctx, 31, 0x219E30u);
    ctx->pc = 0x219E2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x219E28u;
    // 0x219e2c: 0x2afa823  subu        $s5, $s5, $t7 (Delay Slot)
    SET_GPR_S32(ctx, 21, (int32_t)SUB32(GPR_U32(ctx, 21), GPR_U32(ctx, 15)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x219C48u;
    goto label_219c48;
    ctx->pc = 0x219E30u;
label_219e30:
    // 0x219e30: 0x2a0682d  daddu       $t5, $s5, $zero
    ctx->pc = 0x219e30u;
    SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_219e34:
    // 0x219e34: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x219e34u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x219e38: 0x1a0102d  daddu       $v0, $t5, $zero
    ctx->pc = 0x219e38u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 13) + (uint64_t)GPR_U64(ctx, 0));
    // 0x219e3c: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x219e3cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x219e40: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x219e40u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x219e44: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x219e44u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x219e48: 0xdfb40030  ld          $s4, 0x30($sp)
    ctx->pc = 0x219e48u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x219e4c: 0xdfb50038  ld          $s5, 0x38($sp)
    ctx->pc = 0x219e4cu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x219e50: 0xdfb60040  ld          $s6, 0x40($sp)
    ctx->pc = 0x219e50u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x219e54: 0xdfb70048  ld          $s7, 0x48($sp)
    ctx->pc = 0x219e54u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x219e58: 0xdfbe0050  ld          $fp, 0x50($sp)
    ctx->pc = 0x219e58u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x219e5c: 0xdfbf0058  ld          $ra, 0x58($sp)
    ctx->pc = 0x219e5cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x219e60: 0x3e00008  jr          $ra
    ctx->pc = 0x219E60u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x219E64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x219E60u;
        // 0x219e64: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x219E60u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x219E68u;
label_219e68:
    // 0x219e68: 0x1000ffcb  b           . + 4 + (-0x35 << 2)
    ctx->pc = 0x219E68u;
    {
        const bool branch_taken_0x219e68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x219E6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x219E68u;
        // 0x219e6c: 0x702d  daddu       $t6, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 14, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x219e68) {
            ctx->pc = 0x219D98u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_219d98;
        }
    }
    ctx->pc = 0x219E70u;
    // 0x219e70: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x219e70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x219e74: 0x240effff  addiu       $t6, $zero, -0x1
    ctx->pc = 0x219e74u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x219e78: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x219e78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x219e7c: 0x3c0f003a  lui         $t7, 0x3A
    ctx->pc = 0x219e7cu;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)58 << 16));
    // 0x219e80: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x219e80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x219e84: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x219e84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x219e88: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x219e88u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x219e8c: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x219e8cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
    // 0x219e90: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x219e90u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x219e94: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x219e94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x219e98: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x219e98u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x219e9c: 0xafae0000  sw          $t6, 0x0($sp)
    ctx->pc = 0x219e9cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 14));
    // 0x219ea0: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x219ea0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x219ea4: 0xffb40030  sd          $s4, 0x30($sp)
    ctx->pc = 0x219ea4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 20));
    // 0x219ea8: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x219ea8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x219eac: 0xffb50038  sd          $s5, 0x38($sp)
    ctx->pc = 0x219eacu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 21));
    // 0x219eb0: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x219eb0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x219eb4: 0xade0ab5c  sw          $zero, -0x54A4($t7)
    ctx->pc = 0x219eb4u;
    WRITE32(ADD32(GPR_U32(ctx, 15), 4294945628), GPR_U32(ctx, 0));
    // 0x219eb8: 0x8c950000  lw          $s5, 0x0($a0)
    ctx->pc = 0x219eb8u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x219ebc: 0xc084612  jal         func_211848
    ctx->pc = 0x219EBCu;
    SET_GPR_U32(ctx, 31, 0x219EC4u);
    ctx->pc = 0x219EC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x219EBCu;
    // 0x219ec0: 0x8cb40000  lw          $s4, 0x0($a1) (Delay Slot)
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x211848u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x211848u, 0x219EBCu, 0x219EC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x219EC4u;
label_219ec4:
    // 0x219ec4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x219ec4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x219ec8: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x219ec8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x219ecc: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x219eccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x219ed0: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x219ed0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x219ed4: 0xc084654  jal         func_211950
    ctx->pc = 0x219ED4u;
    SET_GPR_U32(ctx, 31, 0x219EDCu);
    ctx->pc = 0x219ED8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x219ED4u;
    // 0x219ed8: 0x3a0402d  daddu       $t0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x211950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x211950u, 0x219ED4u, 0x219EDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x219EDCu;
label_219edc:
    // 0x219edc: 0x8fae0000  lw          $t6, 0x0($sp)
    ctx->pc = 0x219edcu;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x219ee0: 0x29cf0033  slti        $t7, $t6, 0x33
    ctx->pc = 0x219ee0u;
    SET_GPR_U64(ctx, 15, ((int64_t)GPR_S64(ctx, 14) < (int64_t)(int32_t)51) ? 1 : 0);
    // 0x219ee4: 0x11e00017  beqz        $t7, . + 4 + (0x17 << 2)
    ctx->pc = 0x219EE4u;
    {
        const bool branch_taken_0x219ee4 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x219EE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x219EE4u;
        // 0x219ee8: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x219ee4) {
            ctx->pc = 0x219F44u;
            goto label_219f44;
        }
    }
    ctx->pc = 0x219EECu;
    // 0x219eec: 0x5c10003  bgez        $t6, . + 4 + (0x3 << 2)
    ctx->pc = 0x219EECu;
    {
        const bool branch_taken_0x219eec = (GPR_S32(ctx, 14) >= 0);
        if (branch_taken_0x219eec) {
            ctx->pc = 0x219EFCu;
            goto label_219efc;
        }
    }
    ctx->pc = 0x219EF4u;
    // 0x219ef4: 0x240e0032  addiu       $t6, $zero, 0x32
    ctx->pc = 0x219ef4u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 50));
    // 0x219ef8: 0xafae0000  sw          $t6, 0x0($sp)
    ctx->pc = 0x219ef8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 14));
label_219efc:
    // 0x219efc: 0x19c0000c  blez        $t6, . + 4 + (0xC << 2)
    ctx->pc = 0x219EFCu;
    {
        const bool branch_taken_0x219efc = (GPR_S32(ctx, 14) <= 0);
        ctx->pc = 0x219F00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x219EFCu;
        // 0x219f00: 0x240effff  addiu       $t6, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x219efc) {
            ctx->pc = 0x219F30u;
            goto label_219f30;
        }
    }
    ctx->pc = 0x219F04u;
    // 0x219f04: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x219f04u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_219f08:
    // 0x219f08: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x219f08u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x219f0c: 0xc084c14  jal         func_213050
    ctx->pc = 0x219F0Cu;
    SET_GPR_U32(ctx, 31, 0x219F14u);
    ctx->pc = 0x219F10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x219F0Cu;
    // 0x219f10: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x213050u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x213050u, 0x219F0Cu, 0x219F14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x219F14u;
label_219f14:
    // 0x219f14: 0x4400014  bltz        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x219F14u;
    {
        const bool branch_taken_0x219f14 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x219F18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x219F14u;
        // 0x219f18: 0x8faf0000  lw          $t7, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x219f14) {
            ctx->pc = 0x219F68u;
            goto label_219f68;
        }
    }
    ctx->pc = 0x219F1Cu;
    // 0x219f1c: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x219f1cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x219f20: 0x22f782a  slt         $t7, $s1, $t7
    ctx->pc = 0x219f20u;
    SET_GPR_U64(ctx, 15, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 15)) ? 1 : 0);
    // 0x219f24: 0x15e0fff8  bnez        $t7, . + 4 + (-0x8 << 2)
    ctx->pc = 0x219F24u;
    {
        const bool branch_taken_0x219f24 = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        ctx->pc = 0x219F28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x219F24u;
        // 0x219f28: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x219f24) {
            ctx->pc = 0x219F08u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_219f08;
        }
    }
    ctx->pc = 0x219F2Cu;
    // 0x219f2c: 0x240effff  addiu       $t6, $zero, -0x1
    ctx->pc = 0x219f2cu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_219f30:
    // 0x219f30: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x219f30u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x219f34: 0xc086712  jal         func_219C48
    ctx->pc = 0x219F34u;
    SET_GPR_U32(ctx, 31, 0x219F3Cu);
    ctx->pc = 0x219F38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x219F34u;
    // 0x219f38: 0xafae0000  sw          $t6, 0x0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 14));
    ctx->in_delay_slot = false;
    ctx->pc = 0x219C48u;
    goto label_219c48;
    ctx->pc = 0x219F3Cu;
label_219f3c:
    // 0x219f3c: 0x8e6f0000  lw          $t7, 0x0($s3)
    ctx->pc = 0x219f3cu;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x219f40: 0x1f41023  subu        $v0, $t7, $s4
    ctx->pc = 0x219f40u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 15), GPR_U32(ctx, 20)));
label_219f44:
    // 0x219f44: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x219f44u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x219f48: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x219f48u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x219f4c: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x219f4cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x219f50: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x219f50u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x219f54: 0xdfb40030  ld          $s4, 0x30($sp)
    ctx->pc = 0x219f54u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x219f58: 0xdfb50038  ld          $s5, 0x38($sp)
    ctx->pc = 0x219f58u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x219f5c: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x219f5cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x219f60: 0x3e00008  jr          $ra
    ctx->pc = 0x219F60u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x219F64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x219F60u;
        // 0x219f64: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x219F60u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x219F68u;
label_219f68:
    // 0x219f68: 0x1000fff6  b           . + 4 + (-0xA << 2)
    ctx->pc = 0x219F68u;
    {
        const bool branch_taken_0x219f68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x219F6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x219F68u;
        // 0x219f6c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x219f68) {
            ctx->pc = 0x219F44u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_219f44;
        }
    }
    ctx->pc = 0x219F70u;
}
