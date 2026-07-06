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

// Function: sub_00104C68
// Address: 0x104c68 - 0x105370
void sub_00104C68_0x104c68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00104C68_0x104c68");
#endif

    switch (ctx->pc) {
        case 0x104d84u: goto label_104d84;
        case 0x104dc4u: goto label_104dc4;
        case 0x104df0u: goto label_104df0;
        case 0x104e30u: goto label_104e30;
        case 0x104e6cu: goto label_104e6c;
        case 0x104eacu: goto label_104eac;
        case 0x104ef4u: goto label_104ef4;
        case 0x104ff8u: goto label_104ff8;
        case 0x105098u: goto label_105098;
        case 0x1050e0u: goto label_1050e0;
        case 0x105130u: goto label_105130;
        case 0x105148u: goto label_105148;
        case 0x1051ecu: goto label_1051ec;
        case 0x10522cu: goto label_10522c;
        case 0x105284u: goto label_105284;
        case 0x1052dcu: goto label_1052dc;
        case 0x105324u: goto label_105324;
        case 0x10533cu: goto label_10533c;
        default: break;
    }

    ctx->pc = 0x104c68u;

    // 0x104c68: 0x27bdff10  addiu       $sp, $sp, -0xF0
    ctx->pc = 0x104c68u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967056));
    // 0x104c6c: 0x24030140  addiu       $v1, $zero, 0x140
    ctx->pc = 0x104c6cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 320));
    // 0x104c70: 0xffbe00d0  sd          $fp, 0xD0($sp)
    ctx->pc = 0x104c70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 208), GPR_U64(ctx, 30));
    // 0x104c74: 0xffb600b0  sd          $s6, 0xB0($sp)
    ctx->pc = 0x104c74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 22));
    // 0x104c78: 0x140f02d  daddu       $fp, $t2, $zero
    ctx->pc = 0x104c78u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x104c7c: 0xffb500a0  sd          $s5, 0xA0($sp)
    ctx->pc = 0x104c7cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 21));
    // 0x104c80: 0xc0b02d  daddu       $s6, $a2, $zero
    ctx->pc = 0x104c80u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x104c84: 0xffb40090  sd          $s4, 0x90($sp)
    ctx->pc = 0x104c84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 20));
    // 0x104c88: 0xa0a82d  daddu       $s5, $a1, $zero
    ctx->pc = 0x104c88u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x104c8c: 0xffb30080  sd          $s3, 0x80($sp)
    ctx->pc = 0x104c8cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 19));
    // 0x104c90: 0x100a02d  daddu       $s4, $t0, $zero
    ctx->pc = 0x104c90u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x104c94: 0xffb20070  sd          $s2, 0x70($sp)
    ctx->pc = 0x104c94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 18));
    // 0x104c98: 0x24130001  addiu       $s3, $zero, 0x1
    ctx->pc = 0x104c98u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x104c9c: 0xffb10060  sd          $s1, 0x60($sp)
    ctx->pc = 0x104c9cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 17));
    // 0x104ca0: 0x120902d  daddu       $s2, $t1, $zero
    ctx->pc = 0x104ca0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x104ca4: 0xffb00050  sd          $s0, 0x50($sp)
    ctx->pc = 0x104ca4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 16));
    // 0x104ca8: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x104ca8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x104cac: 0xffbf00e0  sd          $ra, 0xE0($sp)
    ctx->pc = 0x104cacu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 224), GPR_U64(ctx, 31));
    // 0x104cb0: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x104cb0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x104cb4: 0xffb700c0  sd          $s7, 0xC0($sp)
    ctx->pc = 0x104cb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 192), GPR_U64(ctx, 23));
    // 0x104cb8: 0x8e220820  lw          $v0, 0x820($s1)
    ctx->pc = 0x104cb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2080)));
    // 0x104cbc: 0xafa70040  sw          $a3, 0x40($sp)
    ctx->pc = 0x104cbcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 7));
    // 0x104cc0: 0x432018  mult        $a0, $v0, $v1
    ctx->pc = 0x104cc0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x104cc4: 0x30ec0008  andi        $t4, $a3, 0x8
    ctx->pc = 0x104cc4u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)8);
    // 0x104cc8: 0x911021  addu        $v0, $a0, $s1
    ctx->pc = 0x104cc8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 17)));
    // 0x104ccc: 0x15800005  bnez        $t4, . + 4 + (0x5 << 2)
    ctx->pc = 0x104CCCu;
    {
        const bool branch_taken_0x104ccc = (GPR_U64(ctx, 12) != GPR_U64(ctx, 0));
        ctx->pc = 0x104CD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x104CCCu;
        // 0x104cd0: 0xac4006cc  sw          $zero, 0x6CC($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 1740), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x104ccc) {
            ctx->pc = 0x104CE4u;
            goto label_104ce4;
        }
    }
    ctx->pc = 0x104CD4u;
    // 0x104cd4: 0x8e230160  lw          $v1, 0x160($s1)
    ctx->pc = 0x104cd4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 352)));
    // 0x104cd8: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x104cd8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x104cdc: 0x1462011c  bne         $v1, $v0, . + 4 + (0x11C << 2)
    ctx->pc = 0x104CDCu;
    {
        const bool branch_taken_0x104cdc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x104CE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x104CDCu;
        // 0x104ce0: 0x8fa40040  lw          $a0, 0x40($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x104cdc) {
            ctx->pc = 0x105150u;
            goto label_105150;
        }
    }
    ctx->pc = 0x104CE4u;
label_104ce4:
    // 0x104ce4: 0x8e230184  lw          $v1, 0x184($s1)
    ctx->pc = 0x104ce4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 388)));
    // 0x104ce8: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x104ce8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x104cec: 0x14620083  bne         $v1, $v0, . + 4 + (0x83 << 2)
    ctx->pc = 0x104CECu;
    {
        const bool branch_taken_0x104cec = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x104CF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x104CECu;
        // 0x104cf0: 0x38620002  xori        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)2);
        ctx->in_delay_slot = false;
        if (branch_taken_0x104cec) {
            ctx->pc = 0x104EFCu;
            goto label_104efc;
        }
    }
    ctx->pc = 0x104CF4u;
    // 0x104cf4: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x104cf4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x104cf8: 0x52820004  beql        $s4, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x104CF8u;
    {
        const bool branch_taken_0x104cf8 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 2));
        if (branch_taken_0x104cf8) {
            ctx->pc = 0x104CFCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x104CF8u;
            // 0x104cfc: 0x8e420000  lw          $v0, 0x0($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x104D0Cu;
            goto label_104d0c;
        }
    }
    ctx->pc = 0x104D00u;
    // 0x104d00: 0x1580000f  bnez        $t4, . + 4 + (0xF << 2)
    ctx->pc = 0x104D00u;
    {
        const bool branch_taken_0x104d00 = (GPR_U64(ctx, 12) != GPR_U64(ctx, 0));
        if (branch_taken_0x104d00) {
            ctx->pc = 0x104D40u;
            goto label_104d40;
        }
    }
    ctx->pc = 0x104D08u;
    // 0x104d08: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x104d08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_104d0c:
    // 0x104d0c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x104d0cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x104d10: 0x8e430004  lw          $v1, 0x4($s2)
    ctx->pc = 0x104d10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x104d14: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x104d14u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x104d18: 0x8e2501c8  lw          $a1, 0x1C8($s1)
    ctx->pc = 0x104d18u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 456)));
    // 0x104d1c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x104d1cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x104d20: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x104d20u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x104d24: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x104d24u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x104d28: 0xafa30008  sw          $v1, 0x8($sp)
    ctx->pc = 0x104d28u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 3));
    // 0x104d2c: 0x24090010  addiu       $t1, $zero, 0x10
    ctx->pc = 0x104d2cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x104d30: 0xafa00010  sw          $zero, 0x10($sp)
    ctx->pc = 0x104d30u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 0));
    // 0x104d34: 0x2a0502d  daddu       $t2, $s5, $zero
    ctx->pc = 0x104d34u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x104d38: 0x100000fb  b           . + 4 + (0xFB << 2)
    ctx->pc = 0x104D38u;
    {
        const bool branch_taken_0x104d38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x104D3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x104D38u;
        // 0x104d3c: 0xafa00018  sw          $zero, 0x18($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x104d38) {
            ctx->pc = 0x105128u;
            goto label_105128;
        }
    }
    ctx->pc = 0x104D40u;
label_104d40:
    // 0x104d40: 0x16930022  bne         $s4, $s3, . + 4 + (0x22 << 2)
    ctx->pc = 0x104D40u;
    {
        const bool branch_taken_0x104d40 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 19));
        ctx->pc = 0x104D44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x104D40u;
        // 0x104d44: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x104d40) {
            ctx->pc = 0x104DCCu;
            goto label_104dcc;
        }
    }
    ctx->pc = 0x104D48u;
    // 0x104d48: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x104d48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x104d4c: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x104d4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x104d50: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x104d50u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x104d54: 0x8e2501c8  lw          $a1, 0x1C8($s1)
    ctx->pc = 0x104d54u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 456)));
    // 0x104d58: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x104d58u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
    // 0x104d5c: 0x8fc60000  lw          $a2, 0x0($fp)
    ctx->pc = 0x104d5cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x104d60: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x104d60u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x104d64: 0xafa30000  sw          $v1, 0x0($sp)
    ctx->pc = 0x104d64u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
    // 0x104d68: 0x24090008  addiu       $t1, $zero, 0x8
    ctx->pc = 0x104d68u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x104d6c: 0xafa20008  sw          $v0, 0x8($sp)
    ctx->pc = 0x104d6cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 2));
    // 0x104d70: 0x2a0502d  daddu       $t2, $s5, $zero
    ctx->pc = 0x104d70u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x104d74: 0xafb40010  sw          $s4, 0x10($sp)
    ctx->pc = 0x104d74u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 20));
    // 0x104d78: 0x2c0582d  daddu       $t3, $s6, $zero
    ctx->pc = 0x104d78u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x104d7c: 0xc041570  jal         func_1055C0
    ctx->pc = 0x104D7Cu;
    SET_GPR_U32(ctx, 31, 0x104D84u);
    ctx->pc = 0x104D80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x104D7Cu;
    // 0x104d80: 0xafa00018  sw          $zero, 0x18($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1055C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1055C0u, 0x104D7Cu, 0x104D84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x104D84u;
label_104d84:
    // 0x104d84: 0x8e420014  lw          $v0, 0x14($s2)
    ctx->pc = 0x104d84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 20)));
    // 0x104d88: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x104d88u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x104d8c: 0x8e430010  lw          $v1, 0x10($s2)
    ctx->pc = 0x104d8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
    // 0x104d90: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x104d90u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x104d94: 0x8e2501c8  lw          $a1, 0x1C8($s1)
    ctx->pc = 0x104d94u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 456)));
    // 0x104d98: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x104d98u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
    // 0x104d9c: 0x8fc60008  lw          $a2, 0x8($fp)
    ctx->pc = 0x104d9cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 8)));
    // 0x104da0: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x104da0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x104da4: 0xafa30000  sw          $v1, 0x0($sp)
    ctx->pc = 0x104da4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
    // 0x104da8: 0x24090008  addiu       $t1, $zero, 0x8
    ctx->pc = 0x104da8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x104dac: 0xafa20008  sw          $v0, 0x8($sp)
    ctx->pc = 0x104dacu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 2));
    // 0x104db0: 0x2a0502d  daddu       $t2, $s5, $zero
    ctx->pc = 0x104db0u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x104db4: 0xafb40010  sw          $s4, 0x10($sp)
    ctx->pc = 0x104db4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 20));
    // 0x104db8: 0x2c0582d  daddu       $t3, $s6, $zero
    ctx->pc = 0x104db8u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x104dbc: 0xc041570  jal         func_1055C0
    ctx->pc = 0x104DBCu;
    SET_GPR_U32(ctx, 31, 0x104DC4u);
    ctx->pc = 0x104DC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x104DBCu;
    // 0x104dc0: 0xafa00018  sw          $zero, 0x18($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1055C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1055C0u, 0x104DBCu, 0x104DC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x104DC4u;
label_104dc4:
    // 0x104dc4: 0x100000e1  b           . + 4 + (0xE1 << 2)
    ctx->pc = 0x104DC4u;
    {
        const bool branch_taken_0x104dc4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x104DC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x104DC4u;
        // 0x104dc8: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x104dc4) {
            ctx->pc = 0x10514Cu;
            goto label_10514c;
        }
    }
    ctx->pc = 0x104DCCu;
label_104dcc:
    // 0x104dcc: 0x16830045  bne         $s4, $v1, . + 4 + (0x45 << 2)
    ctx->pc = 0x104DCCu;
    {
        const bool branch_taken_0x104dcc = (GPR_U64(ctx, 20) != GPR_U64(ctx, 3));
        ctx->pc = 0x104DD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x104DCCu;
        // 0x104dd0: 0x3c05003e  lui         $a1, 0x3E (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)62 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x104dcc) {
            ctx->pc = 0x104EE4u;
            goto label_104ee4;
        }
    }
    ctx->pc = 0x104DD4u;
    // 0x104dd4: 0x8e480004  lw          $t0, 0x4($s2)
    ctx->pc = 0x104dd4u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x104dd8: 0x160302d  daddu       $a2, $t3, $zero
    ctx->pc = 0x104dd8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    // 0x104ddc: 0x8e470000  lw          $a3, 0x0($s2)
    ctx->pc = 0x104ddcu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x104de0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x104de0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x104de4: 0x84043  sra         $t0, $t0, 1
    ctx->pc = 0x104de4u;
    SET_GPR_S32(ctx, 8, SRA32(GPR_S32(ctx, 8), 1));
    // 0x104de8: 0xc0412b8  jal         func_104AE0
    ctx->pc = 0x104DE8u;
    SET_GPR_U32(ctx, 31, 0x104DF0u);
    ctx->pc = 0x104DECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x104DE8u;
    // 0x104dec: 0x27a50020  addiu       $a1, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x104AE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104AE0u, 0x104DE8u, 0x104DF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x104DF0u;
label_104df0:
    // 0x104df0: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x104df0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x104df4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x104df4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x104df8: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x104df8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x104dfc: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x104dfcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x104e00: 0x8e2501c8  lw          $a1, 0x1C8($s1)
    ctx->pc = 0x104e00u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 456)));
    // 0x104e04: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x104e04u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
    // 0x104e08: 0xafa30000  sw          $v1, 0x0($sp)
    ctx->pc = 0x104e08u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
    // 0x104e0c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x104e0cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x104e10: 0xafa20008  sw          $v0, 0x8($sp)
    ctx->pc = 0x104e10u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 2));
    // 0x104e14: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x104e14u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x104e18: 0xafb30010  sw          $s3, 0x10($sp)
    ctx->pc = 0x104e18u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 19));
    // 0x104e1c: 0x24090008  addiu       $t1, $zero, 0x8
    ctx->pc = 0x104e1cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x104e20: 0xafa00018  sw          $zero, 0x18($sp)
    ctx->pc = 0x104e20u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 0));
    // 0x104e24: 0x2a0502d  daddu       $t2, $s5, $zero
    ctx->pc = 0x104e24u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x104e28: 0xc041570  jal         func_1055C0
    ctx->pc = 0x104E28u;
    SET_GPR_U32(ctx, 31, 0x104E30u);
    ctx->pc = 0x104E2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x104E28u;
    // 0x104e2c: 0x2c0582d  daddu       $t3, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1055C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1055C0u, 0x104E28u, 0x104E30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x104E30u;
label_104e30:
    // 0x104e30: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x104e30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x104e34: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x104e34u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x104e38: 0x8fa30024  lw          $v1, 0x24($sp)
    ctx->pc = 0x104e38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
    // 0x104e3c: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x104e3cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x104e40: 0x8e2501c8  lw          $a1, 0x1C8($s1)
    ctx->pc = 0x104e40u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 456)));
    // 0x104e44: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x104e44u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x104e48: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x104e48u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x104e4c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x104e4cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x104e50: 0xafa30008  sw          $v1, 0x8($sp)
    ctx->pc = 0x104e50u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 3));
    // 0x104e54: 0x24090008  addiu       $t1, $zero, 0x8
    ctx->pc = 0x104e54u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x104e58: 0xafb30010  sw          $s3, 0x10($sp)
    ctx->pc = 0x104e58u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 19));
    // 0x104e5c: 0x2a0502d  daddu       $t2, $s5, $zero
    ctx->pc = 0x104e5cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x104e60: 0xafb30018  sw          $s3, 0x18($sp)
    ctx->pc = 0x104e60u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 19));
    // 0x104e64: 0xc041570  jal         func_1055C0
    ctx->pc = 0x104E64u;
    SET_GPR_U32(ctx, 31, 0x104E6Cu);
    ctx->pc = 0x104E68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x104E64u;
    // 0x104e68: 0x2c0582d  daddu       $t3, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1055C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1055C0u, 0x104E64u, 0x104E6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x104E6Cu;
label_104e6c:
    // 0x104e6c: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x104e6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x104e70: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x104e70u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x104e74: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x104e74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x104e78: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x104e78u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x104e7c: 0x8e2501c8  lw          $a1, 0x1C8($s1)
    ctx->pc = 0x104e7cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 456)));
    // 0x104e80: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x104e80u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
    // 0x104e84: 0xafa30000  sw          $v1, 0x0($sp)
    ctx->pc = 0x104e84u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
    // 0x104e88: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x104e88u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x104e8c: 0xafa20008  sw          $v0, 0x8($sp)
    ctx->pc = 0x104e8cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 2));
    // 0x104e90: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x104e90u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x104e94: 0xafb30010  sw          $s3, 0x10($sp)
    ctx->pc = 0x104e94u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 19));
    // 0x104e98: 0x24090008  addiu       $t1, $zero, 0x8
    ctx->pc = 0x104e98u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x104e9c: 0xafa00018  sw          $zero, 0x18($sp)
    ctx->pc = 0x104e9cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 0));
    // 0x104ea0: 0x2a0502d  daddu       $t2, $s5, $zero
    ctx->pc = 0x104ea0u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x104ea4: 0xc041570  jal         func_1055C0
    ctx->pc = 0x104EA4u;
    SET_GPR_U32(ctx, 31, 0x104EACu);
    ctx->pc = 0x104EA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x104EA4u;
    // 0x104ea8: 0x2c0582d  daddu       $t3, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1055C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1055C0u, 0x104EA4u, 0x104EACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x104EACu;
label_104eac:
    // 0x104eac: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x104eacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x104eb0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x104eb0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x104eb4: 0x8fa3002c  lw          $v1, 0x2C($sp)
    ctx->pc = 0x104eb4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
    // 0x104eb8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x104eb8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x104ebc: 0x8e2501c8  lw          $a1, 0x1C8($s1)
    ctx->pc = 0x104ebcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 456)));
    // 0x104ec0: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x104ec0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x104ec4: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x104ec4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x104ec8: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x104ec8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x104ecc: 0xafa30008  sw          $v1, 0x8($sp)
    ctx->pc = 0x104eccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 3));
    // 0x104ed0: 0x24090008  addiu       $t1, $zero, 0x8
    ctx->pc = 0x104ed0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x104ed4: 0xafb30018  sw          $s3, 0x18($sp)
    ctx->pc = 0x104ed4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 19));
    // 0x104ed8: 0x2a0502d  daddu       $t2, $s5, $zero
    ctx->pc = 0x104ed8u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x104edc: 0x10000092  b           . + 4 + (0x92 << 2)
    ctx->pc = 0x104EDCu;
    {
        const bool branch_taken_0x104edc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x104EE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x104EDCu;
        // 0x104ee0: 0xafb30010  sw          $s3, 0x10($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 19));
        ctx->in_delay_slot = false;
        if (branch_taken_0x104edc) {
            ctx->pc = 0x105128u;
            goto label_105128;
        }
    }
    ctx->pc = 0x104EE4u;
label_104ee4:
    // 0x104ee4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x104ee4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x104ee8: 0x24a59f48  addiu       $a1, $a1, -0x60B8
    ctx->pc = 0x104ee8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294942536));
    // 0x104eec: 0xc043070  jal         func_10C1C0
    ctx->pc = 0x104EECu;
    SET_GPR_U32(ctx, 31, 0x104EF4u);
    ctx->pc = 0x104EF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x104EECu;
    // 0x104ef0: 0x280302d  daddu       $a2, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10C1C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10C1C0u, 0x104EECu, 0x104EF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x104EF4u;
label_104ef4:
    // 0x104ef4: 0x10000095  b           . + 4 + (0x95 << 2)
    ctx->pc = 0x104EF4u;
    {
        const bool branch_taken_0x104ef4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x104EF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x104EF4u;
        // 0x104ef8: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x104ef4) {
            ctx->pc = 0x10514Cu;
            goto label_10514c;
        }
    }
    ctx->pc = 0x104EFCu;
label_104efc:
    // 0x104efc: 0x8e2701d8  lw          $a3, 0x1D8($s1)
    ctx->pc = 0x104efcu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 472)));
    // 0x104f00: 0x8e2501e8  lw          $a1, 0x1E8($s1)
    ctx->pc = 0x104f00u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 488)));
    // 0x104f04: 0x2c570001  sltiu       $s7, $v0, 0x1
    ctx->pc = 0x104f04u;
    SET_GPR_U64(ctx, 23, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x104f08: 0x8e2401dc  lw          $a0, 0x1DC($s1)
    ctx->pc = 0x104f08u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 476)));
    // 0x104f0c: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x104f0cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x104f10: 0x8e2301ec  lw          $v1, 0x1EC($s1)
    ctx->pc = 0x104f10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 492)));
    // 0x104f14: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x104f14u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x104f18: 0x8e220160  lw          $v0, 0x160($s1)
    ctx->pc = 0x104f18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 352)));
    // 0x104f1c: 0xafa70030  sw          $a3, 0x30($sp)
    ctx->pc = 0x104f1cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 7));
    // 0x104f20: 0xafa50034  sw          $a1, 0x34($sp)
    ctx->pc = 0x104f20u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 5));
    // 0x104f24: 0xafa40038  sw          $a0, 0x38($sp)
    ctx->pc = 0x104f24u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 4));
    // 0x104f28: 0x14460007  bne         $v0, $a2, . + 4 + (0x7 << 2)
    ctx->pc = 0x104F28u;
    {
        const bool branch_taken_0x104f28 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 6));
        ctx->pc = 0x104F2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x104F28u;
        // 0x104f2c: 0xafa3003c  sw          $v1, 0x3C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 60), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x104f28) {
            ctx->pc = 0x104F48u;
            goto label_104f48;
        }
    }
    ctx->pc = 0x104F30u;
    // 0x104f30: 0x8e220130  lw          $v0, 0x130($s1)
    ctx->pc = 0x104f30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 304)));
    // 0x104f34: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x104F34u;
    {
        const bool branch_taken_0x104f34 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x104F38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x104F34u;
        // 0x104f38: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x104f34) {
            ctx->pc = 0x104F4Cu;
            goto label_104f4c;
        }
    }
    ctx->pc = 0x104F3Cu;
    // 0x104f3c: 0x8fc20000  lw          $v0, 0x0($fp)
    ctx->pc = 0x104f3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x104f40: 0x2e21026  xor         $v0, $s7, $v0
    ctx->pc = 0x104f40u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 23) ^ GPR_U64(ctx, 2));
    // 0x104f44: 0x2982b  sltu        $s3, $zero, $v0
    ctx->pc = 0x104f44u;
    SET_GPR_U64(ctx, 19, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_104f48:
    // 0x104f48: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x104f48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_104f4c:
    // 0x104f4c: 0x52820004  beql        $s4, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x104F4Cu;
    {
        const bool branch_taken_0x104f4c = (GPR_U64(ctx, 20) == GPR_U64(ctx, 2));
        if (branch_taken_0x104f4c) {
            ctx->pc = 0x104F50u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x104F4Cu;
            // 0x104f50: 0x8fc20000  lw          $v0, 0x0($fp) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x104F60u;
            goto label_104f60;
        }
    }
    ctx->pc = 0x104F54u;
    // 0x104f54: 0x15800011  bnez        $t4, . + 4 + (0x11 << 2)
    ctx->pc = 0x104F54u;
    {
        const bool branch_taken_0x104f54 = (GPR_U64(ctx, 12) != GPR_U64(ctx, 0));
        ctx->pc = 0x104F58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x104F54u;
        // 0x104f58: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x104f54) {
            ctx->pc = 0x104F9Cu;
            goto label_104f9c;
        }
    }
    ctx->pc = 0x104F5Cu;
    // 0x104f5c: 0x8fc20000  lw          $v0, 0x0($fp)
    ctx->pc = 0x104f5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
label_104f60:
    // 0x104f60: 0x1318c0  sll         $v1, $s3, 3
    ctx->pc = 0x104f60u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 19), 3));
    // 0x104f64: 0x8e460000  lw          $a2, 0x0($s2)
    ctx->pc = 0x104f64u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x104f68: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x104f68u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x104f6c: 0x8e450004  lw          $a1, 0x4($s2)
    ctx->pc = 0x104f6cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x104f70: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x104f70u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x104f74: 0xafa60000  sw          $a2, 0x0($sp)
    ctx->pc = 0x104f74u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 6));
    // 0x104f78: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x104f78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x104f7c: 0x3a21821  addu        $v1, $sp, $v0
    ctx->pc = 0x104f7cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 2)));
    // 0x104f80: 0xafa50008  sw          $a1, 0x8($sp)
    ctx->pc = 0x104f80u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 5));
    // 0x104f84: 0x8c650030  lw          $a1, 0x30($v1)
    ctx->pc = 0x104f84u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 48)));
    // 0x104f88: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x104f88u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x104f8c: 0xafa00010  sw          $zero, 0x10($sp)
    ctx->pc = 0x104f8cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 0));
    // 0x104f90: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x104f90u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x104f94: 0x10000061  b           . + 4 + (0x61 << 2)
    ctx->pc = 0x104F94u;
    {
        const bool branch_taken_0x104f94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x104F98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x104F94u;
        // 0x104f98: 0xafa00018  sw          $zero, 0x18($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x104f94) {
            ctx->pc = 0x10511Cu;
            goto label_10511c;
        }
    }
    ctx->pc = 0x104F9Cu;
label_104f9c:
    // 0x104f9c: 0x16820033  bne         $s4, $v0, . + 4 + (0x33 << 2)
    ctx->pc = 0x104F9Cu;
    {
        const bool branch_taken_0x104f9c = (GPR_U64(ctx, 20) != GPR_U64(ctx, 2));
        ctx->pc = 0x104FA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x104F9Cu;
        // 0x104fa0: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x104f9c) {
            ctx->pc = 0x10506Cu;
            goto label_10506c;
        }
    }
    ctx->pc = 0x104FA4u;
    // 0x104fa4: 0x8fc20000  lw          $v0, 0x0($fp)
    ctx->pc = 0x104fa4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x104fa8: 0x1328c0  sll         $a1, $s3, 3
    ctx->pc = 0x104fa8u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 19), 3));
    // 0x104fac: 0x8e440004  lw          $a0, 0x4($s2)
    ctx->pc = 0x104facu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x104fb0: 0x27b00030  addiu       $s0, $sp, 0x30
    ctx->pc = 0x104fb0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x104fb4: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x104fb4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x104fb8: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x104fb8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x104fbc: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x104fbcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x104fc0: 0xafa40008  sw          $a0, 0x8($sp)
    ctx->pc = 0x104fc0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 4));
    // 0x104fc4: 0xafa30000  sw          $v1, 0x0($sp)
    ctx->pc = 0x104fc4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
    // 0x104fc8: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x104fc8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x104fcc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x104fccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x104fd0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x104fd0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x104fd4: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x104fd4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x104fd8: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x104fd8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x104fdc: 0xafa00010  sw          $zero, 0x10($sp)
    ctx->pc = 0x104fdcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 0));
    // 0x104fe0: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x104fe0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x104fe4: 0xafa00018  sw          $zero, 0x18($sp)
    ctx->pc = 0x104fe4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 0));
    // 0x104fe8: 0x24090008  addiu       $t1, $zero, 0x8
    ctx->pc = 0x104fe8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x104fec: 0x2a0502d  daddu       $t2, $s5, $zero
    ctx->pc = 0x104fecu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x104ff0: 0xc041570  jal         func_1055C0
    ctx->pc = 0x104FF0u;
    SET_GPR_U32(ctx, 31, 0x104FF8u);
    ctx->pc = 0x104FF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x104FF0u;
    // 0x104ff4: 0x2c0582d  daddu       $t3, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1055C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1055C0u, 0x104FF0u, 0x104FF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x104FF8u;
label_104ff8:
    // 0x104ff8: 0x8e220160  lw          $v0, 0x160($s1)
    ctx->pc = 0x104ff8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 352)));
    // 0x104ffc: 0x14540008  bne         $v0, $s4, . + 4 + (0x8 << 2)
    ctx->pc = 0x104FFCu;
    {
        const bool branch_taken_0x104ffc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 20));
        ctx->pc = 0x105000u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x104FFCu;
        // 0x105000: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x104ffc) {
            ctx->pc = 0x105020u;
            goto label_105020;
        }
    }
    ctx->pc = 0x105004u;
    // 0x105004: 0x8e220130  lw          $v0, 0x130($s1)
    ctx->pc = 0x105004u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 304)));
    // 0x105008: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x105008u;
    {
        const bool branch_taken_0x105008 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x10500Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x105008u;
        // 0x10500c: 0x8fc30008  lw          $v1, 0x8($fp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x105008) {
            ctx->pc = 0x105024u;
            goto label_105024;
        }
    }
    ctx->pc = 0x105010u;
    // 0x105010: 0x24130001  addiu       $s3, $zero, 0x1
    ctx->pc = 0x105010u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x105014: 0x2e31026  xor         $v0, $s7, $v1
    ctx->pc = 0x105014u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 23) ^ GPR_U64(ctx, 3));
    // 0x105018: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x105018u;
    {
        const bool branch_taken_0x105018 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10501Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x105018u;
        // 0x10501c: 0x2980a  movz        $s3, $zero, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 19, GPR_VEC(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x105018) {
            ctx->pc = 0x105024u;
            goto label_105024;
        }
    }
    ctx->pc = 0x105020u;
label_105020:
    // 0x105020: 0x8fc30008  lw          $v1, 0x8($fp)
    ctx->pc = 0x105020u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 8)));
label_105024:
    // 0x105024: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x105024u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x105028: 0x8e460010  lw          $a2, 0x10($s2)
    ctx->pc = 0x105028u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
    // 0x10502c: 0x1318c0  sll         $v1, $s3, 3
    ctx->pc = 0x10502cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 19), 3));
    // 0x105030: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x105030u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x105034: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x105034u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x105038: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x105038u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10503c: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x10503cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x105040: 0x8e430014  lw          $v1, 0x14($s2)
    ctx->pc = 0x105040u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 20)));
    // 0x105044: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x105044u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x105048: 0x24080008  addiu       $t0, $zero, 0x8
    ctx->pc = 0x105048u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x10504c: 0xafa60000  sw          $a2, 0x0($sp)
    ctx->pc = 0x10504cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 6));
    // 0x105050: 0x24090008  addiu       $t1, $zero, 0x8
    ctx->pc = 0x105050u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x105054: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x105054u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x105058: 0xafa30008  sw          $v1, 0x8($sp)
    ctx->pc = 0x105058u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 3));
    // 0x10505c: 0xafa00010  sw          $zero, 0x10($sp)
    ctx->pc = 0x10505cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 0));
    // 0x105060: 0x2a0502d  daddu       $t2, $s5, $zero
    ctx->pc = 0x105060u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x105064: 0x10000030  b           . + 4 + (0x30 << 2)
    ctx->pc = 0x105064u;
    {
        const bool branch_taken_0x105064 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x105068u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x105064u;
        // 0x105068: 0xafa00018  sw          $zero, 0x18($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x105064) {
            ctx->pc = 0x105128u;
            goto label_105128;
        }
    }
    ctx->pc = 0x10506Cu;
label_10506c:
    // 0x10506c: 0x16820032  bne         $s4, $v0, . + 4 + (0x32 << 2)
    ctx->pc = 0x10506Cu;
    {
        const bool branch_taken_0x10506c = (GPR_U64(ctx, 20) != GPR_U64(ctx, 2));
        ctx->pc = 0x105070u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10506Cu;
        // 0x105070: 0x3c05003e  lui         $a1, 0x3E (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)62 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10506c) {
            ctx->pc = 0x105138u;
            goto label_105138;
        }
    }
    ctx->pc = 0x105074u;
    // 0x105074: 0x8e220130  lw          $v0, 0x130($s1)
    ctx->pc = 0x105074u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 304)));
    // 0x105078: 0x24130001  addiu       $s3, $zero, 0x1
    ctx->pc = 0x105078u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x10507c: 0x8e470000  lw          $a3, 0x0($s2)
    ctx->pc = 0x10507cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x105080: 0x160302d  daddu       $a2, $t3, $zero
    ctx->pc = 0x105080u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    // 0x105084: 0x8e480004  lw          $t0, 0x4($s2)
    ctx->pc = 0x105084u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x105088: 0x2980a  movz        $s3, $zero, $v0
    ctx->pc = 0x105088u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 19, GPR_VEC(ctx, 0));
    // 0x10508c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x10508cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x105090: 0xc0412b8  jal         func_104AE0
    ctx->pc = 0x105090u;
    SET_GPR_U32(ctx, 31, 0x105098u);
    ctx->pc = 0x105094u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x105090u;
    // 0x105094: 0x27a50020  addiu       $a1, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x104AE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104AE0u, 0x105090u, 0x105098u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x105098u;
label_105098:
    // 0x105098: 0x27b00030  addiu       $s0, $sp, 0x30
    ctx->pc = 0x105098u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x10509c: 0x171080  sll         $v0, $s7, 2
    ctx->pc = 0x10509cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 23), 2));
    // 0x1050a0: 0x8e480004  lw          $t0, 0x4($s2)
    ctx->pc = 0x1050a0u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x1050a4: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x1050a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x1050a8: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x1050a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1050ac: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1050acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1050b0: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x1050b0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1050b4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1050b4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1050b8: 0xafa80008  sw          $t0, 0x8($sp)
    ctx->pc = 0x1050b8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 8));
    // 0x1050bc: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1050bcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1050c0: 0xafa30000  sw          $v1, 0x0($sp)
    ctx->pc = 0x1050c0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
    // 0x1050c4: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1050c4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1050c8: 0xafa00010  sw          $zero, 0x10($sp)
    ctx->pc = 0x1050c8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 0));
    // 0x1050cc: 0x24090010  addiu       $t1, $zero, 0x10
    ctx->pc = 0x1050ccu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x1050d0: 0xafa00018  sw          $zero, 0x18($sp)
    ctx->pc = 0x1050d0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 0));
    // 0x1050d4: 0x2a0502d  daddu       $t2, $s5, $zero
    ctx->pc = 0x1050d4u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1050d8: 0xc041570  jal         func_1055C0
    ctx->pc = 0x1050D8u;
    SET_GPR_U32(ctx, 31, 0x1050E0u);
    ctx->pc = 0x1050DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1050D8u;
    // 0x1050dc: 0x2c0582d  daddu       $t3, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1055C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1055C0u, 0x1050D8u, 0x1050E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1050E0u;
label_1050e0:
    // 0x1050e0: 0x1318c0  sll         $v1, $s3, 3
    ctx->pc = 0x1050e0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 19), 3));
    // 0x1050e4: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x1050e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1050e8: 0x24620004  addiu       $v0, $v1, 0x4
    ctx->pc = 0x1050e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
    // 0x1050ec: 0x8fa50024  lw          $a1, 0x24($sp)
    ctx->pc = 0x1050ecu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
    // 0x1050f0: 0x77100b  movn        $v0, $v1, $s7
    ctx->pc = 0x1050f0u;
    if (GPR_U64(ctx, 23) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 3));
    // 0x1050f4: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x1050f4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x1050f8: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x1050f8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x1050fc: 0xafa50008  sw          $a1, 0x8($sp)
    ctx->pc = 0x1050fcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 5));
    // 0x105100: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x105100u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x105104: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x105104u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x105108: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x105108u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10510c: 0xafa30018  sw          $v1, 0x18($sp)
    ctx->pc = 0x10510cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 3));
    // 0x105110: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x105110u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x105114: 0xafa00010  sw          $zero, 0x10($sp)
    ctx->pc = 0x105114u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 0));
    // 0x105118: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x105118u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_10511c:
    // 0x10511c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x10511cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x105120: 0x24090010  addiu       $t1, $zero, 0x10
    ctx->pc = 0x105120u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x105124: 0x2a0502d  daddu       $t2, $s5, $zero
    ctx->pc = 0x105124u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_105128:
    // 0x105128: 0xc041570  jal         func_1055C0
    ctx->pc = 0x105128u;
    SET_GPR_U32(ctx, 31, 0x105130u);
    ctx->pc = 0x10512Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x105128u;
    // 0x10512c: 0x2c0582d  daddu       $t3, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1055C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1055C0u, 0x105128u, 0x105130u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x105130u;
label_105130:
    // 0x105130: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x105130u;
    {
        const bool branch_taken_0x105130 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x105134u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x105130u;
        // 0x105134: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x105130) {
            ctx->pc = 0x10514Cu;
            goto label_10514c;
        }
    }
    ctx->pc = 0x105138u;
label_105138:
    // 0x105138: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x105138u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10513c: 0x24a59f68  addiu       $a1, $a1, -0x6098
    ctx->pc = 0x10513cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294942568));
    // 0x105140: 0xc043070  jal         func_10C1C0
    ctx->pc = 0x105140u;
    SET_GPR_U32(ctx, 31, 0x105148u);
    ctx->pc = 0x105144u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x105140u;
    // 0x105144: 0x280302d  daddu       $a2, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10C1C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10C1C0u, 0x105140u, 0x105148u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x105148u;
label_105148:
    // 0x105148: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x105148u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_10514c:
    // 0x10514c: 0x8fa40040  lw          $a0, 0x40($sp)
    ctx->pc = 0x10514cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_105150:
    // 0x105150: 0x30820004  andi        $v0, $a0, 0x4
    ctx->pc = 0x105150u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)4);
    // 0x105154: 0x10400079  beqz        $v0, . + 4 + (0x79 << 2)
    ctx->pc = 0x105154u;
    {
        const bool branch_taken_0x105154 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x105158u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x105154u;
        // 0x105158: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x105154) {
            ctx->pc = 0x10533Cu;
            goto label_10533c;
        }
    }
    ctx->pc = 0x10515Cu;
    // 0x10515c: 0x8e230184  lw          $v1, 0x184($s1)
    ctx->pc = 0x10515cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 388)));
    // 0x105160: 0x14620034  bne         $v1, $v0, . + 4 + (0x34 << 2)
    ctx->pc = 0x105160u;
    {
        const bool branch_taken_0x105160 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x105164u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x105160u;
        // 0x105164: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x105160) {
            ctx->pc = 0x105234u;
            goto label_105234;
        }
    }
    ctx->pc = 0x105168u;
    // 0x105168: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x105168u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x10516c: 0x1682000f  bne         $s4, $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x10516Cu;
    {
        const bool branch_taken_0x10516c = (GPR_U64(ctx, 20) != GPR_U64(ctx, 2));
        ctx->pc = 0x105170u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10516Cu;
        // 0x105170: 0x24130001  addiu       $s3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10516c) {
            ctx->pc = 0x1051ACu;
            goto label_1051ac;
        }
    }
    ctx->pc = 0x105174u;
    // 0x105174: 0x8e42000c  lw          $v0, 0xC($s2)
    ctx->pc = 0x105174u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
    // 0x105178: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x105178u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10517c: 0x8e430008  lw          $v1, 0x8($s2)
    ctx->pc = 0x10517cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x105180: 0x2a0502d  daddu       $t2, $s5, $zero
    ctx->pc = 0x105180u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x105184: 0xafa20008  sw          $v0, 0x8($sp)
    ctx->pc = 0x105184u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 2));
    // 0x105188: 0x2c0582d  daddu       $t3, $s6, $zero
    ctx->pc = 0x105188u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10518c: 0xafa30000  sw          $v1, 0x0($sp)
    ctx->pc = 0x10518cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
    // 0x105190: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x105190u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x105194: 0xafb00018  sw          $s0, 0x18($sp)
    ctx->pc = 0x105194u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 16));
    // 0x105198: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x105198u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10519c: 0xafa00010  sw          $zero, 0x10($sp)
    ctx->pc = 0x10519cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 0));
    // 0x1051a0: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1051a0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1051a4: 0x1000001f  b           . + 4 + (0x1F << 2)
    ctx->pc = 0x1051A4u;
    {
        const bool branch_taken_0x1051a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1051A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1051A4u;
        // 0x1051a8: 0x24090010  addiu       $t1, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1051a4) {
            ctx->pc = 0x105224u;
            goto label_105224;
        }
    }
    ctx->pc = 0x1051ACu;
label_1051ac:
    // 0x1051ac: 0x8e42000c  lw          $v0, 0xC($s2)
    ctx->pc = 0x1051acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
    // 0x1051b0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1051b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1051b4: 0x8e430008  lw          $v1, 0x8($s2)
    ctx->pc = 0x1051b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x1051b8: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1051b8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1051bc: 0x8e2501cc  lw          $a1, 0x1CC($s1)
    ctx->pc = 0x1051bcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 460)));
    // 0x1051c0: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x1051c0u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
    // 0x1051c4: 0x8fc60004  lw          $a2, 0x4($fp)
    ctx->pc = 0x1051c4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 4)));
    // 0x1051c8: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1051c8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1051cc: 0xafa30000  sw          $v1, 0x0($sp)
    ctx->pc = 0x1051ccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
    // 0x1051d0: 0x24090008  addiu       $t1, $zero, 0x8
    ctx->pc = 0x1051d0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x1051d4: 0xafa20008  sw          $v0, 0x8($sp)
    ctx->pc = 0x1051d4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 2));
    // 0x1051d8: 0x2a0502d  daddu       $t2, $s5, $zero
    ctx->pc = 0x1051d8u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1051dc: 0xafb30010  sw          $s3, 0x10($sp)
    ctx->pc = 0x1051dcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 19));
    // 0x1051e0: 0x2c0582d  daddu       $t3, $s6, $zero
    ctx->pc = 0x1051e0u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1051e4: 0xc041570  jal         func_1055C0
    ctx->pc = 0x1051E4u;
    SET_GPR_U32(ctx, 31, 0x1051ECu);
    ctx->pc = 0x1051E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1051E4u;
    // 0x1051e8: 0xafb00018  sw          $s0, 0x18($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1055C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1055C0u, 0x1051E4u, 0x1051ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1051ECu;
label_1051ec:
    // 0x1051ec: 0x8e42001c  lw          $v0, 0x1C($s2)
    ctx->pc = 0x1051ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 28)));
    // 0x1051f0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1051f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1051f4: 0x8e430018  lw          $v1, 0x18($s2)
    ctx->pc = 0x1051f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 24)));
    // 0x1051f8: 0x2a0502d  daddu       $t2, $s5, $zero
    ctx->pc = 0x1051f8u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1051fc: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x1051fcu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
    // 0x105200: 0xafb30010  sw          $s3, 0x10($sp)
    ctx->pc = 0x105200u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 19));
    // 0x105204: 0xafa30000  sw          $v1, 0x0($sp)
    ctx->pc = 0x105204u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
    // 0x105208: 0x2c0582d  daddu       $t3, $s6, $zero
    ctx->pc = 0x105208u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10520c: 0xafa20008  sw          $v0, 0x8($sp)
    ctx->pc = 0x10520cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 2));
    // 0x105210: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x105210u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x105214: 0xafb00018  sw          $s0, 0x18($sp)
    ctx->pc = 0x105214u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 16));
    // 0x105218: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x105218u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10521c: 0x24090008  addiu       $t1, $zero, 0x8
    ctx->pc = 0x10521cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x105220: 0x8fc6000c  lw          $a2, 0xC($fp)
    ctx->pc = 0x105220u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 12)));
label_105224:
    // 0x105224: 0xc041570  jal         func_1055C0
    ctx->pc = 0x105224u;
    SET_GPR_U32(ctx, 31, 0x10522Cu);
    ctx->pc = 0x105228u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x105224u;
    // 0x105228: 0x8c8501cc  lw          $a1, 0x1CC($a0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 460)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1055C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1055C0u, 0x105224u, 0x10522Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10522Cu;
label_10522c:
    // 0x10522c: 0x10000044  b           . + 4 + (0x44 << 2)
    ctx->pc = 0x10522Cu;
    {
        const bool branch_taken_0x10522c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x105230u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10522Cu;
        // 0x105230: 0xdfbf00e0  ld          $ra, 0xE0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 224)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10522c) {
            ctx->pc = 0x105340u;
            goto label_105340;
        }
    }
    ctx->pc = 0x105234u;
label_105234:
    // 0x105234: 0x16820015  bne         $s4, $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x105234u;
    {
        const bool branch_taken_0x105234 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 2));
        ctx->pc = 0x105238u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x105234u;
        // 0x105238: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x105234) {
            ctx->pc = 0x10528Cu;
            goto label_10528c;
        }
    }
    ctx->pc = 0x10523Cu;
    // 0x10523c: 0x8fc20004  lw          $v0, 0x4($fp)
    ctx->pc = 0x10523cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 4)));
    // 0x105240: 0x50400002  beql        $v0, $zero, . + 4 + (0x2 << 2)
    ctx->pc = 0x105240u;
    {
        const bool branch_taken_0x105240 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x105240) {
            ctx->pc = 0x105244u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x105240u;
            // 0x105244: 0x8e2501dc  lw          $a1, 0x1DC($s1) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 476)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x10524Cu;
            goto label_10524c;
        }
    }
    ctx->pc = 0x105248u;
    // 0x105248: 0x8e2501ec  lw          $a1, 0x1EC($s1)
    ctx->pc = 0x105248u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 492)));
label_10524c:
    // 0x10524c: 0x8e42000c  lw          $v0, 0xC($s2)
    ctx->pc = 0x10524cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
    // 0x105250: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x105250u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x105254: 0x8e430008  lw          $v1, 0x8($s2)
    ctx->pc = 0x105254u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x105258: 0x2a0502d  daddu       $t2, $s5, $zero
    ctx->pc = 0x105258u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10525c: 0xafa20008  sw          $v0, 0x8($sp)
    ctx->pc = 0x10525cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 2));
    // 0x105260: 0x2c0582d  daddu       $t3, $s6, $zero
    ctx->pc = 0x105260u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x105264: 0xafa30000  sw          $v1, 0x0($sp)
    ctx->pc = 0x105264u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
    // 0x105268: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x105268u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10526c: 0xafb00018  sw          $s0, 0x18($sp)
    ctx->pc = 0x10526cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 16));
    // 0x105270: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x105270u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x105274: 0xafa00010  sw          $zero, 0x10($sp)
    ctx->pc = 0x105274u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 0));
    // 0x105278: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x105278u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10527c: 0xc041570  jal         func_1055C0
    ctx->pc = 0x10527Cu;
    SET_GPR_U32(ctx, 31, 0x105284u);
    ctx->pc = 0x105280u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10527Cu;
    // 0x105280: 0x24090010  addiu       $t1, $zero, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1055C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1055C0u, 0x10527Cu, 0x105284u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x105284u;
label_105284:
    // 0x105284: 0x1000002e  b           . + 4 + (0x2E << 2)
    ctx->pc = 0x105284u;
    {
        const bool branch_taken_0x105284 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x105288u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x105284u;
        // 0x105288: 0xdfbf00e0  ld          $ra, 0xE0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 224)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x105284) {
            ctx->pc = 0x105340u;
            goto label_105340;
        }
    }
    ctx->pc = 0x10528Cu;
label_10528c:
    // 0x10528c: 0x16820027  bne         $s4, $v0, . + 4 + (0x27 << 2)
    ctx->pc = 0x10528Cu;
    {
        const bool branch_taken_0x10528c = (GPR_U64(ctx, 20) != GPR_U64(ctx, 2));
        ctx->pc = 0x105290u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10528Cu;
        // 0x105290: 0x3c05003e  lui         $a1, 0x3E (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)62 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10528c) {
            ctx->pc = 0x10532Cu;
            goto label_10532c;
        }
    }
    ctx->pc = 0x105294u;
    // 0x105294: 0x8fc20004  lw          $v0, 0x4($fp)
    ctx->pc = 0x105294u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 4)));
    // 0x105298: 0x50400002  beql        $v0, $zero, . + 4 + (0x2 << 2)
    ctx->pc = 0x105298u;
    {
        const bool branch_taken_0x105298 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x105298) {
            ctx->pc = 0x10529Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x105298u;
            // 0x10529c: 0x8e2501dc  lw          $a1, 0x1DC($s1) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 476)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1052A4u;
            goto label_1052a4;
        }
    }
    ctx->pc = 0x1052A0u;
    // 0x1052a0: 0x8e2501ec  lw          $a1, 0x1EC($s1)
    ctx->pc = 0x1052a0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 492)));
label_1052a4:
    // 0x1052a4: 0x8e420008  lw          $v0, 0x8($s2)
    ctx->pc = 0x1052a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x1052a8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1052a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1052ac: 0x8e43000c  lw          $v1, 0xC($s2)
    ctx->pc = 0x1052acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
    // 0x1052b0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1052b0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1052b4: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x1052b4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x1052b8: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1052b8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1052bc: 0xafa30008  sw          $v1, 0x8($sp)
    ctx->pc = 0x1052bcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 3));
    // 0x1052c0: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1052c0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1052c4: 0xafa00010  sw          $zero, 0x10($sp)
    ctx->pc = 0x1052c4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 0));
    // 0x1052c8: 0x24090008  addiu       $t1, $zero, 0x8
    ctx->pc = 0x1052c8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x1052cc: 0xafb00018  sw          $s0, 0x18($sp)
    ctx->pc = 0x1052ccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 16));
    // 0x1052d0: 0x2a0502d  daddu       $t2, $s5, $zero
    ctx->pc = 0x1052d0u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1052d4: 0xc041570  jal         func_1055C0
    ctx->pc = 0x1052D4u;
    SET_GPR_U32(ctx, 31, 0x1052DCu);
    ctx->pc = 0x1052D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1052D4u;
    // 0x1052d8: 0x2c0582d  daddu       $t3, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1055C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1055C0u, 0x1052D4u, 0x1052DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1052DCu;
label_1052dc:
    // 0x1052dc: 0x8fc2000c  lw          $v0, 0xC($fp)
    ctx->pc = 0x1052dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 12)));
    // 0x1052e0: 0x50400002  beql        $v0, $zero, . + 4 + (0x2 << 2)
    ctx->pc = 0x1052E0u;
    {
        const bool branch_taken_0x1052e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1052e0) {
            ctx->pc = 0x1052E4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1052E0u;
            // 0x1052e4: 0x8e2501dc  lw          $a1, 0x1DC($s1) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 476)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1052ECu;
            goto label_1052ec;
        }
    }
    ctx->pc = 0x1052E8u;
    // 0x1052e8: 0x8e2501ec  lw          $a1, 0x1EC($s1)
    ctx->pc = 0x1052e8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 492)));
label_1052ec:
    // 0x1052ec: 0x8e42001c  lw          $v0, 0x1C($s2)
    ctx->pc = 0x1052ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 28)));
    // 0x1052f0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1052f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1052f4: 0x8e430018  lw          $v1, 0x18($s2)
    ctx->pc = 0x1052f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 24)));
    // 0x1052f8: 0x2a0502d  daddu       $t2, $s5, $zero
    ctx->pc = 0x1052f8u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1052fc: 0xafa20008  sw          $v0, 0x8($sp)
    ctx->pc = 0x1052fcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 2));
    // 0x105300: 0x2c0582d  daddu       $t3, $s6, $zero
    ctx->pc = 0x105300u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x105304: 0xafa30000  sw          $v1, 0x0($sp)
    ctx->pc = 0x105304u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
    // 0x105308: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x105308u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10530c: 0xafb00018  sw          $s0, 0x18($sp)
    ctx->pc = 0x10530cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 16));
    // 0x105310: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x105310u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x105314: 0xafa00010  sw          $zero, 0x10($sp)
    ctx->pc = 0x105314u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 0));
    // 0x105318: 0x24080008  addiu       $t0, $zero, 0x8
    ctx->pc = 0x105318u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x10531c: 0xc041570  jal         func_1055C0
    ctx->pc = 0x10531Cu;
    SET_GPR_U32(ctx, 31, 0x105324u);
    ctx->pc = 0x105320u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10531Cu;
    // 0x105320: 0x24090008  addiu       $t1, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1055C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1055C0u, 0x10531Cu, 0x105324u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x105324u;
label_105324:
    // 0x105324: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x105324u;
    {
        const bool branch_taken_0x105324 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x105328u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x105324u;
        // 0x105328: 0xdfbf00e0  ld          $ra, 0xE0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 224)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x105324) {
            ctx->pc = 0x105340u;
            goto label_105340;
        }
    }
    ctx->pc = 0x10532Cu;
label_10532c:
    // 0x10532c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x10532cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x105330: 0x24a59f88  addiu       $a1, $a1, -0x6078
    ctx->pc = 0x105330u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294942600));
    // 0x105334: 0xc043070  jal         func_10C1C0
    ctx->pc = 0x105334u;
    SET_GPR_U32(ctx, 31, 0x10533Cu);
    ctx->pc = 0x105338u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x105334u;
    // 0x105338: 0x280302d  daddu       $a2, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10C1C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10C1C0u, 0x105334u, 0x10533Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10533Cu;
label_10533c:
    // 0x10533c: 0xdfbf00e0  ld          $ra, 0xE0($sp)
    ctx->pc = 0x10533cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 224)));
label_105340:
    // 0x105340: 0xdfbe00d0  ld          $fp, 0xD0($sp)
    ctx->pc = 0x105340u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x105344: 0xdfb700c0  ld          $s7, 0xC0($sp)
    ctx->pc = 0x105344u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x105348: 0xdfb600b0  ld          $s6, 0xB0($sp)
    ctx->pc = 0x105348u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x10534c: 0xdfb500a0  ld          $s5, 0xA0($sp)
    ctx->pc = 0x10534cu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x105350: 0xdfb40090  ld          $s4, 0x90($sp)
    ctx->pc = 0x105350u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x105354: 0xdfb30080  ld          $s3, 0x80($sp)
    ctx->pc = 0x105354u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x105358: 0xdfb20070  ld          $s2, 0x70($sp)
    ctx->pc = 0x105358u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x10535c: 0xdfb10060  ld          $s1, 0x60($sp)
    ctx->pc = 0x10535cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x105360: 0xdfb00050  ld          $s0, 0x50($sp)
    ctx->pc = 0x105360u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x105364: 0x3e00008  jr          $ra
    ctx->pc = 0x105364u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x105368u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x105364u;
        // 0x105368: 0x27bd00f0  addiu       $sp, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x105364u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10536Cu;
    // 0x10536c: 0x0  nop
    ctx->pc = 0x10536cu;
    // NOP
}
