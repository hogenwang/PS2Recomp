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

// Function: sub_00180E60
// Address: 0x180e60 - 0x1810e0
void sub_00180E60_0x180e60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00180E60_0x180e60");
#endif

    switch (ctx->pc) {
        case 0x180ea4u: goto label_180ea4;
        case 0x180eb0u: goto label_180eb0;
        case 0x180f00u: goto label_180f00;
        case 0x180f8cu: goto label_180f8c;
        case 0x180f98u: goto label_180f98;
        case 0x180fbcu: goto label_180fbc;
        case 0x180fc4u: goto label_180fc4;
        case 0x180fe0u: goto label_180fe0;
        case 0x180fecu: goto label_180fec;
        case 0x180ff8u: goto label_180ff8;
        case 0x18102cu: goto label_18102c;
        case 0x18103cu: goto label_18103c;
        case 0x181044u: goto label_181044;
        case 0x181058u: goto label_181058;
        case 0x181070u: goto label_181070;
        case 0x18108cu: goto label_18108c;
        case 0x181098u: goto label_181098;
        case 0x1810b0u: goto label_1810b0;
        case 0x1810b8u: goto label_1810b8;
        default: break;
    }

    ctx->pc = 0x180e60u;

    // 0x180e60: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x180e60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x180e64: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x180e64u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x180e68: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x180e68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x180e6c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x180e6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x180e70: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x180e70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x180e74: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x180e74u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x180e78: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x180e78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x180e7c: 0xa7a0005e  sh          $zero, 0x5E($sp)
    ctx->pc = 0x180e7cu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 94), (uint16_t)GPR_U32(ctx, 0));
    // 0x180e80: 0x9082036c  lbu         $v0, 0x36C($a0)
    ctx->pc = 0x180e80u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 876)));
    // 0x180e84: 0x1443005f  bne         $v0, $v1, . + 4 + (0x5F << 2)
    ctx->pc = 0x180E84u;
    {
        const bool branch_taken_0x180e84 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x180E88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x180E84u;
        // 0x180e88: 0x80982d  daddu       $s3, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x180e84) {
            ctx->pc = 0x181004u;
            goto label_181004;
        }
    }
    ctx->pc = 0x180E8Cu;
    // 0x180e8c: 0x8e630498  lw          $v1, 0x498($s3)
    ctx->pc = 0x180e8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 1176)));
    // 0x180e90: 0x2402f3ff  addiu       $v0, $zero, -0xC01
    ctx->pc = 0x180e90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294964223));
    // 0x180e94: 0x8e710374  lw          $s1, 0x374($s3)
    ctx->pc = 0x180e94u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 884)));
    // 0x180e98: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x180e98u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x180e9c: 0xc062668  jal         func_1899A0
    ctx->pc = 0x180E9Cu;
    SET_GPR_U32(ctx, 31, 0x180EA4u);
    ctx->pc = 0x180EA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x180E9Cu;
    // 0x180ea0: 0xae620498  sw          $v0, 0x498($s3) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 19), 1176), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1899A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1899A0u, 0x180E9Cu, 0x180EA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x180EA4u;
label_180ea4:
    // 0x180ea4: 0x927000f7  lbu         $s0, 0xF7($s3)
    ctx->pc = 0x180ea4u;
    SET_GPR_U32(ctx, 16, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 247)));
    // 0x180ea8: 0xc05fa8c  jal         func_17EA30
    ctx->pc = 0x180EA8u;
    SET_GPR_U32(ctx, 31, 0x180EB0u);
    ctx->pc = 0x180EACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x180EA8u;
    // 0x180eac: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17EA30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17EA30u, 0x180EA8u, 0x180EB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x180EB0u;
label_180eb0:
    // 0x180eb0: 0x3403ffff  ori         $v1, $zero, 0xFFFF
    ctx->pc = 0x180eb0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x180eb4: 0x3c02ffed  lui         $v0, 0xFFED
    ctx->pc = 0x180eb4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65517 << 16));
    // 0x180eb8: 0xa66300f2  sh          $v1, 0xF2($s3)
    ctx->pc = 0x180eb8u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 242), (uint16_t)GPR_U32(ctx, 3));
    // 0x180ebc: 0x3442b7ff  ori         $v0, $v0, 0xB7FF
    ctx->pc = 0x180ebcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)47103);
    // 0x180ec0: 0x8e630270  lw          $v1, 0x270($s3)
    ctx->pc = 0x180ec0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 624)));
    // 0x180ec4: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x180ec4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x180ec8: 0xae620270  sw          $v0, 0x270($s3)
    ctx->pc = 0x180ec8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 624), GPR_U32(ctx, 2));
    // 0x180ecc: 0xae710518  sw          $s1, 0x518($s3)
    ctx->pc = 0x180eccu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 1304), GPR_U32(ctx, 17));
    // 0x180ed0: 0xae71051c  sw          $s1, 0x51C($s3)
    ctx->pc = 0x180ed0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 1308), GPR_U32(ctx, 17));
    // 0x180ed4: 0x966303a4  lhu         $v1, 0x3A4($s3)
    ctx->pc = 0x180ed4u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 932)));
    // 0x180ed8: 0x30620200  andi        $v0, $v1, 0x200
    ctx->pc = 0x180ed8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)512);
    // 0x180edc: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x180EDCu;
    {
        const bool branch_taken_0x180edc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x180edc) {
            ctx->pc = 0x180EE0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x180EDCu;
            // 0x180ee0: 0x8e64051c  lw          $a0, 0x51C($s3) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 1308)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x180EF0u;
            goto label_180ef0;
        }
    }
    ctx->pc = 0x180EE4u;
    // 0x180ee4: 0x34620100  ori         $v0, $v1, 0x100
    ctx->pc = 0x180ee4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)256);
    // 0x180ee8: 0xa66203a4  sh          $v0, 0x3A4($s3)
    ctx->pc = 0x180ee8u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 932), (uint16_t)GPR_U32(ctx, 2));
    // 0x180eec: 0x8e64051c  lw          $a0, 0x51C($s3)
    ctx->pc = 0x180eecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 1308)));
label_180ef0:
    // 0x180ef0: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x180ef0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x180ef4: 0x9266036d  lbu         $a2, 0x36D($s3)
    ctx->pc = 0x180ef4u;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 877)));
    // 0x180ef8: 0xc05ffb4  jal         func_17FED0
    ctx->pc = 0x180EF8u;
    SET_GPR_U32(ctx, 31, 0x180F00u);
    ctx->pc = 0x180EFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x180EF8u;
    // 0x180efc: 0x27a7005e  addiu       $a3, $sp, 0x5E (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 94));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17FED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17FED0u, 0x180EF8u, 0x180F00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x180F00u;
label_180f00:
    // 0x180f00: 0x2943c  dsll32      $s2, $v0, 16
    ctx->pc = 0x180f00u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 2) << (32 + 16));
    // 0x180f04: 0x97a2005e  lhu         $v0, 0x5E($sp)
    ctx->pc = 0x180f04u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 94)));
    // 0x180f08: 0x30420200  andi        $v0, $v0, 0x200
    ctx->pc = 0x180f08u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)512);
    // 0x180f0c: 0x1440000b  bnez        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x180F0Cu;
    {
        const bool branch_taken_0x180f0c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x180F10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x180F0Cu;
        // 0x180f10: 0x12943f  dsra32      $s2, $s2, 16 (Delay Slot)
        SET_GPR_S64(ctx, 18, GPR_S64(ctx, 18) >> (32 + 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x180f0c) {
            ctx->pc = 0x180F3Cu;
            goto label_180f3c;
        }
    }
    ctx->pc = 0x180F14u;
    // 0x180f14: 0x9262036e  lbu         $v0, 0x36E($s3)
    ctx->pc = 0x180f14u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 878)));
    // 0x180f18: 0x30420040  andi        $v0, $v0, 0x40
    ctx->pc = 0x180f18u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)64);
    // 0x180f1c: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x180F1Cu;
    {
        const bool branch_taken_0x180f1c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x180f1c) {
            ctx->pc = 0x180F20u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x180F1Cu;
            // 0x180f20: 0x9262008c  lbu         $v0, 0x8C($s3) (Delay Slot)
            SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 140)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x180F34u;
            goto label_180f34;
        }
    }
    ctx->pc = 0x180F24u;
    // 0x180f24: 0x9262008c  lbu         $v0, 0x8C($s3)
    ctx->pc = 0x180f24u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 140)));
    // 0x180f28: 0x304200fd  andi        $v0, $v0, 0xFD
    ctx->pc = 0x180f28u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)253);
    // 0x180f2c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x180F2Cu;
    {
        const bool branch_taken_0x180f2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x180F30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x180F2Cu;
        // 0x180f30: 0xa262008c  sb          $v0, 0x8C($s3) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 19), 140), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x180f2c) {
            ctx->pc = 0x180F3Cu;
            goto label_180f3c;
        }
    }
    ctx->pc = 0x180F34u;
label_180f34:
    // 0x180f34: 0x34420002  ori         $v0, $v0, 0x2
    ctx->pc = 0x180f34u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
    // 0x180f38: 0xa262008c  sb          $v0, 0x8C($s3)
    ctx->pc = 0x180f38u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 140), (uint8_t)GPR_U32(ctx, 2));
label_180f3c:
    // 0x180f3c: 0x8e640530  lw          $a0, 0x530($s3)
    ctx->pc = 0x180f3cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 1328)));
    // 0x180f40: 0x3c02ffef  lui         $v0, 0xFFEF
    ctx->pc = 0x180f40u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65519 << 16));
    // 0x180f44: 0x3443ffff  ori         $v1, $v0, 0xFFFF
    ctx->pc = 0x180f44u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x180f48: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x180f48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x180f4c: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x180f4cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x180f50: 0xae630530  sw          $v1, 0x530($s3)
    ctx->pc = 0x180f50u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 1328), GPR_U32(ctx, 3));
    // 0x180f54: 0x9263036d  lbu         $v1, 0x36D($s3)
    ctx->pc = 0x180f54u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 877)));
    // 0x180f58: 0x54620006  bnel        $v1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x180F58u;
    {
        const bool branch_taken_0x180f58 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x180f58) {
            ctx->pc = 0x180F5Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x180F58u;
            // 0x180f5c: 0x121c3c  dsll32      $v1, $s2, 16 (Delay Slot)
            SET_GPR_U64(ctx, 3, GPR_U64(ctx, 18) << (32 + 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x180F74u;
            goto label_180f74;
        }
    }
    ctx->pc = 0x180F60u;
    // 0x180f60: 0x8e630530  lw          $v1, 0x530($s3)
    ctx->pc = 0x180f60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 1328)));
    // 0x180f64: 0x3c020010  lui         $v0, 0x10
    ctx->pc = 0x180f64u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16 << 16));
    // 0x180f68: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x180f68u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x180f6c: 0xae620530  sw          $v0, 0x530($s3)
    ctx->pc = 0x180f6cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 1328), GPR_U32(ctx, 2));
    // 0x180f70: 0x121c3c  dsll32      $v1, $s2, 16
    ctx->pc = 0x180f70u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 18) << (32 + 16));
label_180f74:
    // 0x180f74: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x180f74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x180f78: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x180f78u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x180f7c: 0x10620006  beq         $v1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x180F7Cu;
    {
        const bool branch_taken_0x180f7c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x180F80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x180F7Cu;
        // 0x180f80: 0xa672050c  sh          $s2, 0x50C($s3) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 19), 1292), (uint16_t)GPR_U32(ctx, 18));
        ctx->in_delay_slot = false;
        if (branch_taken_0x180f7c) {
            ctx->pc = 0x180F98u;
            goto label_180f98;
        }
    }
    ctx->pc = 0x180F84u;
    // 0x180f84: 0xc060048  jal         func_180120
    ctx->pc = 0x180F84u;
    SET_GPR_U32(ctx, 31, 0x180F8Cu);
    ctx->pc = 0x180F88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x180F84u;
    // 0x180f88: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x180120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x180120u, 0x180F84u, 0x180F8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x180F8Cu;
label_180f8c:
    // 0x180f8c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x180f8cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x180f90: 0xc060380  jal         func_180E00
    ctx->pc = 0x180F90u;
    SET_GPR_U32(ctx, 31, 0x180F98u);
    ctx->pc = 0x180F94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x180F90u;
    // 0x180f94: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x180E00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x180E00u, 0x180F90u, 0x180F98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x180F98u;
label_180f98:
    // 0x180f98: 0x8e620530  lw          $v0, 0x530($s3)
    ctx->pc = 0x180f98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 1328)));
    // 0x180f9c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x180f9cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x180fa0: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x180fa0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x180fa4: 0xae620530  sw          $v0, 0x530($s3)
    ctx->pc = 0x180fa4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 1328), GPR_U32(ctx, 2));
    // 0x180fa8: 0xa260057e  sb          $zero, 0x57E($s3)
    ctx->pc = 0x180fa8u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 1406), (uint8_t)GPR_U32(ctx, 0));
    // 0x180fac: 0xa260057d  sb          $zero, 0x57D($s3)
    ctx->pc = 0x180facu;
    WRITE8(ADD32(GPR_U32(ctx, 19), 1405), (uint8_t)GPR_U32(ctx, 0));
    // 0x180fb0: 0x9265057d  lbu         $a1, 0x57D($s3)
    ctx->pc = 0x180fb0u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 1405)));
    // 0x180fb4: 0xc060310  jal         func_180C40
    ctx->pc = 0x180FB4u;
    SET_GPR_U32(ctx, 31, 0x180FBCu);
    ctx->pc = 0x180FB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x180FB4u;
    // 0x180fb8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x180C40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x180C40u, 0x180FB4u, 0x180FBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x180FBCu;
label_180fbc:
    // 0x180fbc: 0xc06005c  jal         func_180170
    ctx->pc = 0x180FBCu;
    SET_GPR_U32(ctx, 31, 0x180FC4u);
    ctx->pc = 0x180FC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x180FBCu;
    // 0x180fc0: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x180170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x180170u, 0x180FBCu, 0x180FC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x180FC4u;
label_180fc4:
    // 0x180fc4: 0x97a3005e  lhu         $v1, 0x5E($sp)
    ctx->pc = 0x180fc4u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 94)));
    // 0x180fc8: 0x2402ffbf  addiu       $v0, $zero, -0x41
    ctx->pc = 0x180fc8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967231));
    // 0x180fcc: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x180fccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x180fd0: 0xa6620534  sh          $v0, 0x534($s3)
    ctx->pc = 0x180fd0u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 1332), (uint16_t)GPR_U32(ctx, 2));
    // 0x180fd4: 0x96650534  lhu         $a1, 0x534($s3)
    ctx->pc = 0x180fd4u;
    SET_GPR_U32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 1332)));
    // 0x180fd8: 0xc05fe18  jal         func_17F860
    ctx->pc = 0x180FD8u;
    SET_GPR_U32(ctx, 31, 0x180FE0u);
    ctx->pc = 0x180FDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x180FD8u;
    // 0x180fdc: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17F860u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17F860u, 0x180FD8u, 0x180FE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x180FE0u;
label_180fe0:
    // 0x180fe0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x180fe0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x180fe4: 0xc068394  jal         func_1A0E50
    ctx->pc = 0x180FE4u;
    SET_GPR_U32(ctx, 31, 0x180FECu);
    ctx->pc = 0x180FE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x180FE4u;
    // 0x180fe8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0E50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0E50u, 0x180FE4u, 0x180FECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x180FECu;
label_180fec:
    // 0x180fec: 0x8e6400dc  lw          $a0, 0xDC($s3)
    ctx->pc = 0x180fecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 220)));
    // 0x180ff0: 0xc04bfa4  jal         func_12FE90
    ctx->pc = 0x180FF0u;
    SET_GPR_U32(ctx, 31, 0x180FF8u);
    ctx->pc = 0x180FF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x180FF0u;
    // 0x180ff4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12FE90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12FE90u, 0x180FF0u, 0x180FF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x180FF8u;
label_180ff8:
    // 0x180ff8: 0xa260028a  sb          $zero, 0x28A($s3)
    ctx->pc = 0x180ff8u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 650), (uint8_t)GPR_U32(ctx, 0));
    // 0x180ffc: 0x1000002f  b           . + 4 + (0x2F << 2)
    ctx->pc = 0x180FFCu;
    {
        const bool branch_taken_0x180ffc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x181000u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x180FFCu;
        // 0x181000: 0x240102d  daddu       $v0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x180ffc) {
            ctx->pc = 0x1810BCu;
            goto label_1810bc;
        }
    }
    ctx->pc = 0x181004u;
label_181004:
    // 0x181004: 0x9262035c  lbu         $v0, 0x35C($s3)
    ctx->pc = 0x181004u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 860)));
    // 0x181008: 0x5443002c  bnel        $v0, $v1, . + 4 + (0x2C << 2)
    ctx->pc = 0x181008u;
    {
        const bool branch_taken_0x181008 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x181008) {
            ctx->pc = 0x18100Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x181008u;
            // 0x18100c: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1810BCu;
            goto label_1810bc;
        }
    }
    ctx->pc = 0x181010u;
    // 0x181010: 0x8e700364  lw          $s0, 0x364($s3)
    ctx->pc = 0x181010u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 868)));
    // 0x181014: 0x8e0200dc  lw          $v0, 0xDC($s0)
    ctx->pc = 0x181014u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 220)));
    // 0x181018: 0x30420300  andi        $v0, $v0, 0x300
    ctx->pc = 0x181018u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)768);
    // 0x18101c: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x18101Cu;
    {
        const bool branch_taken_0x18101c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x18101c) {
            ctx->pc = 0x181034u;
            goto label_181034;
        }
    }
    ctx->pc = 0x181024u;
    // 0x181024: 0xc06005c  jal         func_180170
    ctx->pc = 0x181024u;
    SET_GPR_U32(ctx, 31, 0x18102Cu);
    ctx->pc = 0x180170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x180170u, 0x181024u, 0x18102Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18102Cu;
label_18102c:
    // 0x18102c: 0x10000023  b           . + 4 + (0x23 << 2)
    ctx->pc = 0x18102Cu;
    {
        const bool branch_taken_0x18102c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x181030u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18102Cu;
        // 0x181030: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18102c) {
            ctx->pc = 0x1810BCu;
            goto label_1810bc;
        }
    }
    ctx->pc = 0x181034u;
label_181034:
    // 0x181034: 0xc0617f0  jal         func_185FC0
    ctx->pc = 0x181034u;
    SET_GPR_U32(ctx, 31, 0x18103Cu);
    ctx->pc = 0x185FC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x185FC0u, 0x181034u, 0x18103Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18103Cu;
label_18103c:
    // 0x18103c: 0xc06001c  jal         func_180070
    ctx->pc = 0x18103Cu;
    SET_GPR_U32(ctx, 31, 0x181044u);
    ctx->pc = 0x181040u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18103Cu;
    // 0x181040: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x180070u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x180070u, 0x18103Cu, 0x181044u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x181044u;
label_181044:
    // 0x181044: 0xae700518  sw          $s0, 0x518($s3)
    ctx->pc = 0x181044u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 1304), GPR_U32(ctx, 16));
    // 0x181048: 0xae70051c  sw          $s0, 0x51C($s3)
    ctx->pc = 0x181048u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 1308), GPR_U32(ctx, 16));
    // 0x18104c: 0x8e6400dc  lw          $a0, 0xDC($s3)
    ctx->pc = 0x18104cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 220)));
    // 0x181050: 0xc04bfa4  jal         func_12FE90
    ctx->pc = 0x181050u;
    SET_GPR_U32(ctx, 31, 0x181058u);
    ctx->pc = 0x181054u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x181050u;
    // 0x181054: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12FE90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12FE90u, 0x181050u, 0x181058u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x181058u;
label_181058:
    // 0x181058: 0xa260028a  sb          $zero, 0x28A($s3)
    ctx->pc = 0x181058u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 650), (uint8_t)GPR_U32(ctx, 0));
    // 0x18105c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x18105cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x181060: 0x92660368  lbu         $a2, 0x368($s3)
    ctx->pc = 0x181060u;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 872)));
    // 0x181064: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x181064u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x181068: 0xc05ff8c  jal         func_17FE30
    ctx->pc = 0x181068u;
    SET_GPR_U32(ctx, 31, 0x181070u);
    ctx->pc = 0x18106Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x181068u;
    // 0x18106c: 0x27a7005e  addiu       $a3, $sp, 0x5E (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 94));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17FE30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17FE30u, 0x181068u, 0x181070u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x181070u;
label_181070:
    // 0x181070: 0x2843c  dsll32      $s0, $v0, 16
    ctx->pc = 0x181070u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) << (32 + 16));
    // 0x181074: 0x10843f  dsra32      $s0, $s0, 16
    ctx->pc = 0x181074u;
    SET_GPR_S64(ctx, 16, GPR_S64(ctx, 16) >> (32 + 16));
    // 0x181078: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x181078u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x18107c: 0x52020007  beql        $s0, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x18107Cu;
    {
        const bool branch_taken_0x18107c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        if (branch_taken_0x18107c) {
            ctx->pc = 0x181080u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x18107Cu;
            // 0x181080: 0xa260057e  sb          $zero, 0x57E($s3) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 19), 1406), (uint8_t)GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x18109Cu;
            goto label_18109c;
        }
    }
    ctx->pc = 0x181084u;
    // 0x181084: 0xc060034  jal         func_1800D0
    ctx->pc = 0x181084u;
    SET_GPR_U32(ctx, 31, 0x18108Cu);
    ctx->pc = 0x181088u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x181084u;
    // 0x181088: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1800D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1800D0u, 0x181084u, 0x18108Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18108Cu;
label_18108c:
    // 0x18108c: 0x3205ffff  andi        $a1, $s0, 0xFFFF
    ctx->pc = 0x18108cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)65535);
    // 0x181090: 0xc05a090  jal         func_168240
    ctx->pc = 0x181090u;
    SET_GPR_U32(ctx, 31, 0x181098u);
    ctx->pc = 0x181094u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x181090u;
    // 0x181094: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x168240u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x168240u, 0x181090u, 0x181098u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x181098u;
label_181098:
    // 0x181098: 0xa260057e  sb          $zero, 0x57E($s3)
    ctx->pc = 0x181098u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 1406), (uint8_t)GPR_U32(ctx, 0));
label_18109c:
    // 0x18109c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x18109cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1810a0: 0xa260057d  sb          $zero, 0x57D($s3)
    ctx->pc = 0x1810a0u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 1405), (uint8_t)GPR_U32(ctx, 0));
    // 0x1810a4: 0x9265057d  lbu         $a1, 0x57D($s3)
    ctx->pc = 0x1810a4u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 1405)));
    // 0x1810a8: 0xc060310  jal         func_180C40
    ctx->pc = 0x1810A8u;
    SET_GPR_U32(ctx, 31, 0x1810B0u);
    ctx->pc = 0x1810ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1810A8u;
    // 0x1810ac: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x180C40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x180C40u, 0x1810A8u, 0x1810B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1810B0u;
label_1810b0:
    // 0x1810b0: 0xc06005c  jal         func_180170
    ctx->pc = 0x1810B0u;
    SET_GPR_U32(ctx, 31, 0x1810B8u);
    ctx->pc = 0x1810B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1810B0u;
    // 0x1810b4: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x180170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x180170u, 0x1810B0u, 0x1810B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1810B8u;
label_1810b8:
    // 0x1810b8: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1810b8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1810bc:
    // 0x1810bc: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x1810bcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1810c0: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1810c0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1810c4: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1810c4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1810c8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1810c8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1810cc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1810ccu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1810d0: 0x3e00008  jr          $ra
    ctx->pc = 0x1810D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1810D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1810D0u;
        // 0x1810d4: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1810D0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1810D8u;
    // 0x1810d8: 0x0  nop
    ctx->pc = 0x1810d8u;
    // NOP
    // 0x1810dc: 0x0  nop
    ctx->pc = 0x1810dcu;
    // NOP
}
