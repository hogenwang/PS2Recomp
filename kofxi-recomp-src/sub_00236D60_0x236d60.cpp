#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00236D60
// Address: 0x236d60 - 0x237000
void sub_00236D60_0x236d60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00236D60_0x236d60");
#endif

    switch (ctx->pc) {
        case 0x236da4u: goto label_236da4;
        case 0x236df8u: goto label_236df8;
        case 0x236e18u: goto label_236e18;
        case 0x236e7cu: goto label_236e7c;
        case 0x236e84u: goto label_236e84;
        case 0x236e94u: goto label_236e94;
        case 0x236ec4u: goto label_236ec4;
        case 0x236eccu: goto label_236ecc;
        case 0x236f08u: goto label_236f08;
        case 0x236f2cu: goto label_236f2c;
        case 0x236f50u: goto label_236f50;
        case 0x236f68u: goto label_236f68;
        default: break;
    }

    ctx->pc = 0x236d60u;

    // 0x236d60: 0x27bdfe90  addiu       $sp, $sp, -0x170
    ctx->pc = 0x236d60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966928));
    // 0x236d64: 0xffb30140  sd          $s3, 0x140($sp)
    ctx->pc = 0x236d64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 320), GPR_U64(ctx, 19));
    // 0x236d68: 0xffb20130  sd          $s2, 0x130($sp)
    ctx->pc = 0x236d68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 304), GPR_U64(ctx, 18));
    // 0x236d6c: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x236d6cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x236d70: 0xffb10120  sd          $s1, 0x120($sp)
    ctx->pc = 0x236d70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 288), GPR_U64(ctx, 17));
    // 0x236d74: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x236d74u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x236d78: 0xffb00110  sd          $s0, 0x110($sp)
    ctx->pc = 0x236d78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 272), GPR_U64(ctx, 16));
    // 0x236d7c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x236d7cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x236d80: 0xffbf0160  sd          $ra, 0x160($sp)
    ctx->pc = 0x236d80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 352), GPR_U64(ctx, 31));
    // 0x236d84: 0xffb40150  sd          $s4, 0x150($sp)
    ctx->pc = 0x236d84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 336), GPR_U64(ctx, 20));
    // 0x236d88: 0x96420012  lhu         $v0, 0x12($s2)
    ctx->pc = 0x236d88u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 18)));
    // 0x236d8c: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x236d8cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x236d90: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x236D90u;
    {
        const bool branch_taken_0x236d90 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x236D94u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x236D90u;
            // 0x236d94: 0xe0802d  daddu       $s0, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x236d90) {
            ctx->pc = 0x236DA4u;
            goto label_236da4;
        }
    }
    ctx->pc = 0x236D98u;
    // 0x236d98: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x236d98u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    // 0x236d9c: 0xc08b5e0  jal         func_22D780
    ctx->pc = 0x236D9Cu;
    SET_GPR_U32(ctx, 31, 0x236DA4u);
    ctx->pc = 0x236DA0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x236D9Cu;
            // 0x236da0: 0x24844b90  addiu       $a0, $a0, 0x4B90 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 19344));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22D780u;
    if (runtime->hasFunction(0x22D780u)) {
        auto targetFn = runtime->lookupFunction(0x22D780u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x236DA4u; }
        if (ctx->pc != 0x236DA4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022D780_0x22d780(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x236DA4u; }
        if (ctx->pc != 0x236DA4u) { return; }
    }
    ctx->pc = 0x236DA4u;
label_236da4:
    // 0x236da4: 0x3c02003a  lui         $v0, 0x3A
    ctx->pc = 0x236da4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)58 << 16));
    // 0x236da8: 0x8e260028  lw          $a2, 0x28($s1)
    ctx->pc = 0x236da8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 40)));
    // 0x236dac: 0xdc4417c0  ld          $a0, 0x17C0($v0)
    ctx->pc = 0x236dacu;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 2), 6080)));
    // 0x236db0: 0x244217c0  addiu       $v0, $v0, 0x17C0
    ctx->pc = 0x236db0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 6080));
    // 0x236db4: 0xfe2400b0  sd          $a0, 0xB0($s1)
    ctx->pc = 0x236db4u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 176), GPR_U64(ctx, 4));
    // 0x236db8: 0xdc430008  ld          $v1, 0x8($v0)
    ctx->pc = 0x236db8u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x236dbc: 0x10c0000e  beqz        $a2, . + 4 + (0xE << 2)
    ctx->pc = 0x236DBCu;
    {
        const bool branch_taken_0x236dbc = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x236DC0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x236DBCu;
            // 0x236dc0: 0xfe2300b8  sd          $v1, 0xB8($s1) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 17), 184), GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x236dbc) {
            ctx->pc = 0x236DF8u;
            goto label_236df8;
        }
    }
    ctx->pc = 0x236DC4u;
    // 0x236dc4: 0x96220030  lhu         $v0, 0x30($s1)
    ctx->pc = 0x236dc4u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 48)));
    // 0x236dc8: 0x30420008  andi        $v0, $v0, 0x8
    ctx->pc = 0x236dc8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8);
    // 0x236dcc: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x236DCCu;
    {
        const bool branch_taken_0x236dcc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x236DD0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x236DCCu;
            // 0x236dd0: 0x27a50100  addiu       $a1, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->in_delay_slot = false;
        if (branch_taken_0x236dcc) {
            ctx->pc = 0x236DF8u;
            goto label_236df8;
        }
    }
    ctx->pc = 0x236DD4u;
    // 0x236dd4: 0x92620001  lbu         $v0, 0x1($s3)
    ctx->pc = 0x236dd4u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 1)));
    // 0x236dd8: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x236dd8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x236ddc: 0xafa50008  sw          $a1, 0x8($sp)
    ctx->pc = 0x236ddcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 5));
    // 0x236de0: 0xafa3000c  sw          $v1, 0xC($sp)
    ctx->pc = 0x236de0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 3));
    // 0x236de4: 0xc0202d  daddu       $a0, $a2, $zero
    ctx->pc = 0x236de4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x236de8: 0xafa20100  sw          $v0, 0x100($sp)
    ctx->pc = 0x236de8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 256), GPR_U32(ctx, 2));
    // 0x236dec: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x236decu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x236df0: 0xc08cd78  jal         func_2335E0
    ctx->pc = 0x236DF0u;
    SET_GPR_U32(ctx, 31, 0x236DF8u);
    ctx->pc = 0x236DF4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x236DF0u;
            // 0x236df4: 0xafb20000  sw          $s2, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 18));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2335E0u;
    if (runtime->hasFunction(0x2335E0u)) {
        auto targetFn = runtime->lookupFunction(0x2335E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x236DF8u; }
        if (ctx->pc != 0x236DF8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002335E0_0x2335e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x236DF8u; }
        if (ctx->pc != 0x236DF8u) { return; }
    }
    ctx->pc = 0x236DF8u;
label_236df8:
    // 0x236df8: 0x12000011  beqz        $s0, . + 4 + (0x11 << 2)
    ctx->pc = 0x236DF8u;
    {
        const bool branch_taken_0x236df8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x236DFCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x236DF8u;
            // 0x236dfc: 0xae510014  sw          $s1, 0x14($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 20), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x236df8) {
            ctx->pc = 0x236E40u;
            goto label_236e40;
        }
    }
    ctx->pc = 0x236E00u;
    // 0x236e00: 0x8e020034  lw          $v0, 0x34($s0)
    ctx->pc = 0x236e00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 52)));
    // 0x236e04: 0x30421008  andi        $v0, $v0, 0x1008
    ctx->pc = 0x236e04u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4104);
    // 0x236e08: 0x5040000e  beql        $v0, $zero, . + 4 + (0xE << 2)
    ctx->pc = 0x236E08u;
    {
        const bool branch_taken_0x236e08 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x236e08) {
            ctx->pc = 0x236E0Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x236E08u;
            // 0x236e0c: 0xde220068  ld          $v0, 0x68($s1) (Delay Slot)
        SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 17), 104)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x236E44u;
            goto label_236e44;
        }
    }
    ctx->pc = 0x236E10u;
    // 0x236e10: 0xc08a9d6  jal         func_22A758
    ctx->pc = 0x236E10u;
    SET_GPR_U32(ctx, 31, 0x236E18u);
    ctx->pc = 0x236E14u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x236E10u;
            // 0x236e14: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22A758u;
    if (runtime->hasFunction(0x22A758u)) {
        auto targetFn = runtime->lookupFunction(0x22A758u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x236E18u; }
        if (ctx->pc != 0x236E18u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022A758_0x22a758(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x236E18u; }
        if (ctx->pc != 0x236E18u) { return; }
    }
    ctx->pc = 0x236E18u;
label_236e18:
    // 0x236e18: 0x8e030034  lw          $v1, 0x34($s0)
    ctx->pc = 0x236e18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 52)));
    // 0x236e1c: 0x30621000  andi        $v0, $v1, 0x1000
    ctx->pc = 0x236e1cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4096);
    // 0x236e20: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x236E20u;
    {
        const bool branch_taken_0x236e20 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x236e20) {
            ctx->pc = 0x236E24u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x236E20u;
            // 0x236e24: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x236E38u;
            goto label_236e38;
        }
    }
    ctx->pc = 0x236E28u;
    // 0x236e28: 0x30630004  andi        $v1, $v1, 0x4
    ctx->pc = 0x236e28u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4);
    // 0x236e2c: 0x24040072  addiu       $a0, $zero, 0x72
    ctx->pc = 0x236e2cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 114));
    // 0x236e30: 0x24020076  addiu       $v0, $zero, 0x76
    ctx->pc = 0x236e30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 118));
    // 0x236e34: 0x43200b  movn        $a0, $v0, $v1
    ctx->pc = 0x236e34u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 2));
label_236e38:
    // 0x236e38: 0x1000003d  b           . + 4 + (0x3D << 2)
    ctx->pc = 0x236E38u;
    {
        const bool branch_taken_0x236e38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x236E3Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x236E38u;
            // 0x236e3c: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x236e38) {
            ctx->pc = 0x236F30u;
            goto label_236f30;
        }
    }
    ctx->pc = 0x236E40u;
label_236e40:
    // 0x236e40: 0xde220068  ld          $v0, 0x68($s1)
    ctx->pc = 0x236e40u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 17), 104)));
label_236e44:
    // 0x236e44: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x236e44u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x236e48: 0xde240088  ld          $a0, 0x88($s1)
    ctx->pc = 0x236e48u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 17), 136)));
    // 0x236e4c: 0x64420001  daddiu      $v0, $v0, 0x1
    ctx->pc = 0x236e4cu;
    SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 2) + (int64_t)(int32_t)1);
    // 0x236e50: 0xfe220068  sd          $v0, 0x68($s1)
    ctx->pc = 0x236e50u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 104), GPR_U64(ctx, 2));
    // 0x236e54: 0x8e430018  lw          $v1, 0x18($s2)
    ctx->pc = 0x236e54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 24)));
    // 0x236e58: 0x83202d  daddu       $a0, $a0, $v1
    ctx->pc = 0x236e58u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 3));
    // 0x236e5c: 0xfe240088  sd          $a0, 0x88($s1)
    ctx->pc = 0x236e5cu;
    WRITE64(ADD32(GPR_U32(ctx, 17), 136), GPR_U64(ctx, 4));
    // 0x236e60: 0x92670001  lbu         $a3, 0x1($s3)
    ctx->pc = 0x236e60u;
    SET_GPR_U32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 1)));
    // 0x236e64: 0x10e50009  beq         $a3, $a1, . + 4 + (0x9 << 2)
    ctx->pc = 0x236E64u;
    {
        const bool branch_taken_0x236e64 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 5));
        ctx->pc = 0x236E68u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x236E64u;
            // 0x236e68: 0x3c05003f  lui         $a1, 0x3F (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)63 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x236e64) {
            ctx->pc = 0x236E8Cu;
            goto label_236e8c;
        }
    }
    ctx->pc = 0x236E6Cu;
    // 0x236e6c: 0x26260014  addiu       $a2, $s1, 0x14
    ctx->pc = 0x236e6cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 20));
    // 0x236e70: 0x24a54bb0  addiu       $a1, $a1, 0x4BB0
    ctx->pc = 0x236e70u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 19376));
    // 0x236e74: 0xc08b5ac  jal         func_22D6B0
    ctx->pc = 0x236E74u;
    SET_GPR_U32(ctx, 31, 0x236E7Cu);
    ctx->pc = 0x236E78u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x236E74u;
            // 0x236e78: 0x24040006  addiu       $a0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22D6B0u;
    if (runtime->hasFunction(0x22D6B0u)) {
        auto targetFn = runtime->lookupFunction(0x22D6B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x236E7Cu; }
        if (ctx->pc != 0x236E7Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022D6B0_0x22d6b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x236E7Cu; }
        if (ctx->pc != 0x236E7Cu) { return; }
    }
    ctx->pc = 0x236E7Cu;
label_236e7c:
    // 0x236e7c: 0xc08a9d6  jal         func_22A758
    ctx->pc = 0x236E7Cu;
    SET_GPR_U32(ctx, 31, 0x236E84u);
    ctx->pc = 0x236E80u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x236E7Cu;
            // 0x236e80: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22A758u;
    if (runtime->hasFunction(0x22A758u)) {
        auto targetFn = runtime->lookupFunction(0x22A758u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x236E84u; }
        if (ctx->pc != 0x236E84u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022A758_0x22a758(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x236E84u; }
        if (ctx->pc != 0x236E84u) { return; }
    }
    ctx->pc = 0x236E84u;
label_236e84:
    // 0x236e84: 0x1000002a  b           . + 4 + (0x2A << 2)
    ctx->pc = 0x236E84u;
    {
        const bool branch_taken_0x236e84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x236E88u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x236E84u;
            // 0x236e88: 0x2402006a  addiu       $v0, $zero, 0x6A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 106));
        ctx->in_delay_slot = false;
        if (branch_taken_0x236e84) {
            ctx->pc = 0x236F30u;
            goto label_236f30;
        }
    }
    ctx->pc = 0x236E8Cu;
label_236e8c:
    // 0x236e8c: 0xc08c682  jal         func_231A08
    ctx->pc = 0x236E8Cu;
    SET_GPR_U32(ctx, 31, 0x236E94u);
    ctx->pc = 0x236E90u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x236E8Cu;
            // 0x236e90: 0x3c13003a  lui         $s3, 0x3A (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)58 << 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x231A08u;
    if (runtime->hasFunction(0x231A08u)) {
        auto targetFn = runtime->lookupFunction(0x231A08u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x236E94u; }
        if (ctx->pc != 0x236E94u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00231A08_0x231a08(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x236E94u; }
        if (ctx->pc != 0x236E94u) { return; }
    }
    ctx->pc = 0x236E94u;
label_236e94:
    // 0x236e94: 0x267011a8  addiu       $s0, $s3, 0x11A8
    ctx->pc = 0x236e94u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 19), 4520));
    // 0x236e98: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x236e98u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x236e9c: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x236e9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x236ea0: 0x8e03000c  lw          $v1, 0xC($s0)
    ctx->pc = 0x236ea0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x236ea4: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x236ea4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x236ea8: 0x5440000a  bnel        $v0, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x236EA8u;
    {
        const bool branch_taken_0x236ea8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x236ea8) {
            ctx->pc = 0x236EACu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x236EA8u;
            // 0x236eac: 0xae400004  sw          $zero, 0x4($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x236ED4u;
            goto label_236ed4;
        }
    }
    ctx->pc = 0x236EB0u;
    // 0x236eb0: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x236eb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x236eb4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x236eb4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x236eb8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x236eb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x236ebc: 0xc08a9d6  jal         func_22A758
    ctx->pc = 0x236EBCu;
    SET_GPR_U32(ctx, 31, 0x236EC4u);
    ctx->pc = 0x236EC0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x236EBCu;
            // 0x236ec0: 0xae020010  sw          $v0, 0x10($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22A758u;
    if (runtime->hasFunction(0x22A758u)) {
        auto targetFn = runtime->lookupFunction(0x22A758u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x236EC4u; }
        if (ctx->pc != 0x236EC4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022A758_0x22a758(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x236EC4u; }
        if (ctx->pc != 0x236EC4u) { return; }
    }
    ctx->pc = 0x236EC4u;
label_236ec4:
    // 0x236ec4: 0xc08c698  jal         func_231A60
    ctx->pc = 0x236EC4u;
    SET_GPR_U32(ctx, 31, 0x236ECCu);
    ctx->pc = 0x236EC8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x236EC4u;
            // 0x236ec8: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x231A60u;
    if (runtime->hasFunction(0x231A60u)) {
        auto targetFn = runtime->lookupFunction(0x231A60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x236ECCu; }
        if (ctx->pc != 0x236ECCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00231A60_0x231a60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x236ECCu; }
        if (ctx->pc != 0x236ECCu) { return; }
    }
    ctx->pc = 0x236ECCu;
label_236ecc:
    // 0x236ecc: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x236ECCu;
    {
        const bool branch_taken_0x236ecc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x236ED0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x236ECCu;
            // 0x236ed0: 0x24020069  addiu       $v0, $zero, 0x69 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 105));
        ctx->in_delay_slot = false;
        if (branch_taken_0x236ecc) {
            ctx->pc = 0x236F30u;
            goto label_236f30;
        }
    }
    ctx->pc = 0x236ED4u;
label_236ed4:
    // 0x236ed4: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x236ed4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x236ed8: 0x54400002  bnel        $v0, $zero, . + 4 + (0x2 << 2)
    ctx->pc = 0x236ED8u;
    {
        const bool branch_taken_0x236ed8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x236ed8) {
            ctx->pc = 0x236EDCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x236ED8u;
            // 0x236edc: 0xac520004  sw          $s2, 0x4($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 18));
        ctx->in_delay_slot = false;
            ctx->pc = 0x236EE4u;
            goto label_236ee4;
        }
    }
    ctx->pc = 0x236EE0u;
    // 0x236ee0: 0xae7211a8  sw          $s2, 0x11A8($s3)
    ctx->pc = 0x236ee0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4520), GPR_U32(ctx, 18));
label_236ee4:
    // 0x236ee4: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x236ee4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x236ee8: 0x3c04003a  lui         $a0, 0x3A
    ctx->pc = 0x236ee8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)58 << 16));
    // 0x236eec: 0x8c831770  lw          $v1, 0x1770($a0)
    ctx->pc = 0x236eecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 6000)));
    // 0x236ef0: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x236ef0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x236ef4: 0xae120004  sw          $s2, 0x4($s0)
    ctx->pc = 0x236ef4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 18));
    // 0x236ef8: 0x34630004  ori         $v1, $v1, 0x4
    ctx->pc = 0x236ef8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4);
    // 0x236efc: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x236efcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
    // 0x236f00: 0xc097de6  jal         func_25F798
    ctx->pc = 0x236F00u;
    SET_GPR_U32(ctx, 31, 0x236F08u);
    ctx->pc = 0x236F04u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x236F00u;
            // 0x236f04: 0xac831770  sw          $v1, 0x1770($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 6000), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F798u;
    if (runtime->hasFunction(0x25F798u)) {
        auto targetFn = runtime->lookupFunction(0x25F798u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x236F08u; }
        if (ctx->pc != 0x236F08u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0025F798_0x25f798(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x236F08u; }
        if (ctx->pc != 0x236F08u) { return; }
    }
    ctx->pc = 0x236F08u;
label_236f08:
    // 0x236f08: 0xde220058  ld          $v0, 0x58($s1)
    ctx->pc = 0x236f08u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 17), 88)));
    // 0x236f0c: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x236f0cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x236f10: 0xde250080  ld          $a1, 0x80($s1)
    ctx->pc = 0x236f10u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 17), 128)));
    // 0x236f14: 0x64420001  daddiu      $v0, $v0, 0x1
    ctx->pc = 0x236f14u;
    SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 2) + (int64_t)(int32_t)1);
    // 0x236f18: 0xfe220058  sd          $v0, 0x58($s1)
    ctx->pc = 0x236f18u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 88), GPR_U64(ctx, 2));
    // 0x236f1c: 0x8e430018  lw          $v1, 0x18($s2)
    ctx->pc = 0x236f1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 24)));
    // 0x236f20: 0xa3282d  daddu       $a1, $a1, $v1
    ctx->pc = 0x236f20u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 3));
    // 0x236f24: 0xc08c698  jal         func_231A60
    ctx->pc = 0x236F24u;
    SET_GPR_U32(ctx, 31, 0x236F2Cu);
    ctx->pc = 0x236F28u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x236F24u;
            // 0x236f28: 0xfe250080  sd          $a1, 0x80($s1) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 17), 128), GPR_U64(ctx, 5));
        ctx->in_delay_slot = false;
    ctx->pc = 0x231A60u;
    if (runtime->hasFunction(0x231A60u)) {
        auto targetFn = runtime->lookupFunction(0x231A60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x236F2Cu; }
        if (ctx->pc != 0x236F2Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00231A60_0x231a60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x236F2Cu; }
        if (ctx->pc != 0x236F2Cu) { return; }
    }
    ctx->pc = 0x236F2Cu;
label_236f2c:
    // 0x236f2c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x236f2cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_236f30:
    // 0x236f30: 0xdfbf0160  ld          $ra, 0x160($sp)
    ctx->pc = 0x236f30u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 352)));
    // 0x236f34: 0xdfb40150  ld          $s4, 0x150($sp)
    ctx->pc = 0x236f34u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 336)));
    // 0x236f38: 0xdfb30140  ld          $s3, 0x140($sp)
    ctx->pc = 0x236f38u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x236f3c: 0xdfb20130  ld          $s2, 0x130($sp)
    ctx->pc = 0x236f3cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x236f40: 0xdfb10120  ld          $s1, 0x120($sp)
    ctx->pc = 0x236f40u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x236f44: 0xdfb00110  ld          $s0, 0x110($sp)
    ctx->pc = 0x236f44u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x236f48: 0x3e00008  jr          $ra
    ctx->pc = 0x236F48u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x236F4Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x236F48u;
            // 0x236f4c: 0x27bd0170  addiu       $sp, $sp, 0x170 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x236F50u;
label_236f50:
    // 0x236f50: 0x10a00002  beqz        $a1, . + 4 + (0x2 << 2)
    ctx->pc = 0x236F50u;
    {
        const bool branch_taken_0x236f50 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x236F54u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x236F50u;
            // 0x236f54: 0x340281cc  ori         $v0, $zero, 0x81CC (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)33228);
        ctx->in_delay_slot = false;
        if (branch_taken_0x236f50) {
            ctx->pc = 0x236F5Cu;
            goto label_236f5c;
        }
    }
    ctx->pc = 0x236F58u;
    // 0x236f58: 0xfca20060  sd          $v0, 0x60($a1)
    ctx->pc = 0x236f58u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 96), GPR_U64(ctx, 2));
label_236f5c:
    // 0x236f5c: 0x3e00008  jr          $ra
    ctx->pc = 0x236F5Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x236F64u;
    // 0x236f64: 0x0  nop
    ctx->pc = 0x236f64u;
    // NOP
label_236f68:
    // 0x236f68: 0x34028020  ori         $v0, $zero, 0x8020
    ctx->pc = 0x236f68u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32800);
    // 0x236f6c: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x236f6cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x236f70: 0x34426931  ori         $v0, $v0, 0x6931
    ctx->pc = 0x236f70u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)26929);
    // 0x236f74: 0x10a20019  beq         $a1, $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x236F74u;
    {
        const bool branch_taken_0x236f74 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x236F78u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x236F74u;
            // 0x236f78: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x236f74) {
            ctx->pc = 0x236FDCu;
            goto label_236fdc;
        }
    }
    ctx->pc = 0x236F7Cu;
    // 0x236f7c: 0x45102b  sltu        $v0, $v0, $a1
    ctx->pc = 0x236f7cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
    // 0x236f80: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x236F80u;
    {
        const bool branch_taken_0x236f80 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x236f80) {
            ctx->pc = 0x236FA4u;
            goto label_236fa4;
        }
    }
    ctx->pc = 0x236F88u;
    // 0x236f88: 0x34028020  ori         $v0, $zero, 0x8020
    ctx->pc = 0x236f88u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32800);
    // 0x236f8c: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x236f8cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x236f90: 0x3442690c  ori         $v0, $v0, 0x690C
    ctx->pc = 0x236f90u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)26892);
    // 0x236f94: 0x50a2000a  beql        $a1, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x236F94u;
    {
        const bool branch_taken_0x236f94 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        if (branch_taken_0x236f94) {
            ctx->pc = 0x236F98u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x236F94u;
            // 0x236f98: 0x94820030  lhu         $v0, 0x30($a0) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 48)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x236FC0u;
            goto label_236fc0;
        }
    }
    ctx->pc = 0x236F9Cu;
    // 0x236f9c: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x236F9Cu;
    {
        const bool branch_taken_0x236f9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x236FA0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x236F9Cu;
            // 0x236fa0: 0x24030016  addiu       $v1, $zero, 0x16 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
        ctx->in_delay_slot = false;
        if (branch_taken_0x236f9c) {
            ctx->pc = 0x236FF8u;
            goto label_236ff8;
        }
    }
    ctx->pc = 0x236FA4u;
label_236fa4:
    // 0x236fa4: 0x34028020  ori         $v0, $zero, 0x8020
    ctx->pc = 0x236fa4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32800);
    // 0x236fa8: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x236fa8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x236fac: 0x34426932  ori         $v0, $v0, 0x6932
    ctx->pc = 0x236facu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)26930);
    // 0x236fb0: 0x10a2000a  beq         $a1, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x236FB0u;
    {
        const bool branch_taken_0x236fb0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x236FB4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x236FB0u;
            // 0x236fb4: 0x24030016  addiu       $v1, $zero, 0x16 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
        ctx->in_delay_slot = false;
        if (branch_taken_0x236fb0) {
            ctx->pc = 0x236FDCu;
            goto label_236fdc;
        }
    }
    ctx->pc = 0x236FB8u;
    // 0x236fb8: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x236FB8u;
    {
        const bool branch_taken_0x236fb8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x236fb8) {
            ctx->pc = 0x236FF8u;
            goto label_236ff8;
        }
    }
    ctx->pc = 0x236FC0u;
label_236fc0:
    // 0x236fc0: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x236fc0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x236fc4: 0x10c0000c  beqz        $a2, . + 4 + (0xC << 2)
    ctx->pc = 0x236FC4u;
    {
        const bool branch_taken_0x236fc4 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x236FC8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x236FC4u;
            // 0x236fc8: 0xa4820030  sh          $v0, 0x30($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 48), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x236fc4) {
            ctx->pc = 0x236FF8u;
            goto label_236ff8;
        }
    }
    ctx->pc = 0x236FCCu;
    // 0x236fcc: 0x3c020023  lui         $v0, 0x23
    ctx->pc = 0x236fccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)35 << 16));
    // 0x236fd0: 0x24426f50  addiu       $v0, $v0, 0x6F50
    ctx->pc = 0x236fd0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 28496));
    // 0x236fd4: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x236FD4u;
    {
        const bool branch_taken_0x236fd4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x236FD8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x236FD4u;
            // 0x236fd8: 0xacc20028  sw          $v0, 0x28($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 40), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x236fd4) {
            ctx->pc = 0x236FF8u;
            goto label_236ff8;
        }
    }
    ctx->pc = 0x236FDCu;
label_236fdc:
    // 0x236fdc: 0x54c00003  bnel        $a2, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x236FDCu;
    {
        const bool branch_taken_0x236fdc = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        if (branch_taken_0x236fdc) {
            ctx->pc = 0x236FE0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x236FDCu;
            // 0x236fe0: 0x90c20011  lbu         $v0, 0x11($a2) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 17)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x236FECu;
            goto label_236fec;
        }
    }
    ctx->pc = 0x236FE4u;
    // 0x236fe4: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x236FE4u;
    {
        const bool branch_taken_0x236fe4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x236FE8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x236FE4u;
            // 0x236fe8: 0x2403006a  addiu       $v1, $zero, 0x6A (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 106));
        ctx->in_delay_slot = false;
        if (branch_taken_0x236fe4) {
            ctx->pc = 0x236FF8u;
            goto label_236ff8;
        }
    }
    ctx->pc = 0x236FECu;
label_236fec:
    // 0x236fec: 0x2403006a  addiu       $v1, $zero, 0x6A
    ctx->pc = 0x236fecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 106));
    // 0x236ff0: 0x38420002  xori        $v0, $v0, 0x2
    ctx->pc = 0x236ff0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)2);
    // 0x236ff4: 0x2180a  movz        $v1, $zero, $v0
    ctx->pc = 0x236ff4u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 0));
label_236ff8:
    // 0x236ff8: 0x3e00008  jr          $ra
    ctx->pc = 0x236FF8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x236FFCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x236FF8u;
            // 0x236ffc: 0x60102d  daddu       $v0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x237000u;
    ctx->pc = 0x237000u;
}
