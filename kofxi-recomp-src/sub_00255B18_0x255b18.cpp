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

// Function: sub_00255B18
// Address: 0x255b18 - 0x255dd8
void sub_00255B18_0x255b18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00255B18_0x255b18");
#endif

    switch (ctx->pc) {
        case 0x255b58u: goto label_255b58;
        case 0x255b5cu: goto label_255b5c;
        case 0x255ba8u: goto label_255ba8;
        case 0x255bb0u: goto label_255bb0;
        case 0x255c0cu: goto label_255c0c;
        case 0x255c3cu: goto label_255c3c;
        case 0x255c44u: goto label_255c44;
        case 0x255c58u: goto label_255c58;
        case 0x255c60u: goto label_255c60;
        case 0x255d18u: goto label_255d18;
        case 0x255d2cu: goto label_255d2c;
        case 0x255d34u: goto label_255d34;
        case 0x255d48u: goto label_255d48;
        case 0x255d54u: goto label_255d54;
        default: break;
    }

    ctx->pc = 0x255b18u;

    // 0x255b18: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x255b18u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x255b1c: 0xffb70080  sd          $s7, 0x80($sp)
    ctx->pc = 0x255b1cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 23));
    // 0x255b20: 0xffb60070  sd          $s6, 0x70($sp)
    ctx->pc = 0x255b20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 22));
    // 0x255b24: 0xe0b82d  daddu       $s7, $a3, $zero
    ctx->pc = 0x255b24u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x255b28: 0xffb40050  sd          $s4, 0x50($sp)
    ctx->pc = 0x255b28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 20));
    // 0x255b2c: 0xc0b02d  daddu       $s6, $a2, $zero
    ctx->pc = 0x255b2cu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x255b30: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x255b30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x255b34: 0x100a02d  daddu       $s4, $t0, $zero
    ctx->pc = 0x255b34u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x255b38: 0xffb10020  sd          $s1, 0x20($sp)
    ctx->pc = 0x255b38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
    // 0x255b3c: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x255b3cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x255b40: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x255b40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x255b44: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x255b44u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x255b48: 0xffb50060  sd          $s5, 0x60($sp)
    ctx->pc = 0x255b48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 21));
    // 0x255b4c: 0xffb30040  sd          $s3, 0x40($sp)
    ctx->pc = 0x255b4cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 19));
    // 0x255b50: 0x10000084  b           . + 4 + (0x84 << 2)
    ctx->pc = 0x255B50u;
    {
        const bool branch_taken_0x255b50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x255B54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x255B50u;
        // 0x255b54: 0xffb00010  sd          $s0, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x255b50) {
            ctx->pc = 0x255D64u;
            goto label_255d64;
        }
    }
    ctx->pc = 0x255B58u;
label_255b58:
    // 0x255b58: 0x2463fffe  addiu       $v1, $v1, -0x2
    ctx->pc = 0x255b58u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967294));
label_255b5c:
    // 0x255b5c: 0x2c620007  sltiu       $v0, $v1, 0x7
    ctx->pc = 0x255b5cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)7) ? 1 : 0);
    // 0x255b60: 0x1040007e  beqz        $v0, . + 4 + (0x7E << 2)
    ctx->pc = 0x255B60u;
    {
        const bool branch_taken_0x255b60 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x255B64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x255B60u;
        // 0x255b64: 0x31880  sll         $v1, $v1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x255b60) {
            ctx->pc = 0x255D5Cu;
            goto label_255d5c;
        }
    }
    ctx->pc = 0x255B68u;
    // 0x255b68: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x255b68u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x255b6c: 0x24426f60  addiu       $v0, $v0, 0x6F60
    ctx->pc = 0x255b6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 28512));
    // 0x255b70: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x255b70u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x255b74: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x255b74u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x255b78: 0x800008  jr          $a0
    ctx->pc = 0x255B78u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x255B80u: goto label_255b80;
            case 0x255BB8u: goto label_255bb8;
            case 0x255C18u: goto label_255c18;
            case 0x255C98u: goto label_255c98;
            case 0x255CC4u: goto label_255cc4;
            case 0x255D5Cu: goto label_255d5c;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x255B78u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x255B80u;
label_255b80:
    // 0x255b80: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x255b80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x255b84: 0x56020076  bnel        $s0, $v0, . + 4 + (0x76 << 2)
    ctx->pc = 0x255B84u;
    {
        const bool branch_taken_0x255b84 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        if (branch_taken_0x255b84) {
            ctx->pc = 0x255B88u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x255B84u;
            // 0x255b88: 0x2308821  addu        $s1, $s1, $s0 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x255D60u;
            goto label_255d60;
        }
    }
    ctx->pc = 0x255B8Cu;
    // 0x255b8c: 0x92e2000d  lbu         $v0, 0xD($s7)
    ctx->pc = 0x255b8cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 23), 13)));
    // 0x255b90: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x255b90u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x255b94: 0x10400071  beqz        $v0, . + 4 + (0x71 << 2)
    ctx->pc = 0x255B94u;
    {
        const bool branch_taken_0x255b94 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x255B98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x255B94u;
        // 0x255b98: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x255b94) {
            ctx->pc = 0x255D5Cu;
            goto label_255d5c;
        }
    }
    ctx->pc = 0x255B9Cu;
    // 0x255b9c: 0x26240002  addiu       $a0, $s1, 0x2
    ctx->pc = 0x255b9cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 2));
    // 0x255ba0: 0xc08b4f8  jal         func_22D3E0
    ctx->pc = 0x255BA0u;
    SET_GPR_U32(ctx, 31, 0x255BA8u);
    ctx->pc = 0x255BA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x255BA0u;
    // 0x255ba4: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22D3E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22D3E0u, 0x255BA0u, 0x255BA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x255BA8u;
label_255ba8:
    // 0x255ba8: 0xc08b60c  jal         func_22D830
    ctx->pc = 0x255BA8u;
    SET_GPR_U32(ctx, 31, 0x255BB0u);
    ctx->pc = 0x255BACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x255BA8u;
    // 0x255bac: 0x97a40000  lhu         $a0, 0x0($sp) (Delay Slot)
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22D830u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22D830u, 0x255BA8u, 0x255BB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x255BB0u;
label_255bb0:
    // 0x255bb0: 0x1000006a  b           . + 4 + (0x6A << 2)
    ctx->pc = 0x255BB0u;
    {
        const bool branch_taken_0x255bb0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x255BB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x255BB0u;
        // 0x255bb4: 0xa682000c  sh          $v0, 0xC($s4) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 20), 12), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x255bb0) {
            ctx->pc = 0x255D5Cu;
            goto label_255d5c;
        }
    }
    ctx->pc = 0x255BB8u;
label_255bb8:
    // 0x255bb8: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x255bb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x255bbc: 0x56020068  bnel        $s0, $v0, . + 4 + (0x68 << 2)
    ctx->pc = 0x255BBCu;
    {
        const bool branch_taken_0x255bbc = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        if (branch_taken_0x255bbc) {
            ctx->pc = 0x255BC0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x255BBCu;
            // 0x255bc0: 0x2308821  addu        $s1, $s1, $s0 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x255D60u;
            goto label_255d60;
        }
    }
    ctx->pc = 0x255BC4u;
    // 0x255bc4: 0x92e2000d  lbu         $v0, 0xD($s7)
    ctx->pc = 0x255bc4u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 23), 13)));
    // 0x255bc8: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x255bc8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x255bcc: 0x50400064  beql        $v0, $zero, . + 4 + (0x64 << 2)
    ctx->pc = 0x255BCCu;
    {
        const bool branch_taken_0x255bcc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x255bcc) {
            ctx->pc = 0x255BD0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x255BCCu;
            // 0x255bd0: 0x2308821  addu        $s1, $s1, $s0 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x255D60u;
            goto label_255d60;
        }
    }
    ctx->pc = 0x255BD4u;
    // 0x255bd4: 0x96420028  lhu         $v0, 0x28($s2)
    ctx->pc = 0x255bd4u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 40)));
    // 0x255bd8: 0x34420040  ori         $v0, $v0, 0x40
    ctx->pc = 0x255bd8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)64);
    // 0x255bdc: 0xa6420028  sh          $v0, 0x28($s2)
    ctx->pc = 0x255bdcu;
    WRITE16(ADD32(GPR_U32(ctx, 18), 40), (uint16_t)GPR_U32(ctx, 2));
    // 0x255be0: 0x92230002  lbu         $v1, 0x2($s1)
    ctx->pc = 0x255be0u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 2)));
    // 0x255be4: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x255be4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x255be8: 0x2c42000f  sltiu       $v0, $v0, 0xF
    ctx->pc = 0x255be8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)15) ? 1 : 0);
    // 0x255bec: 0x1440005b  bnez        $v0, . + 4 + (0x5B << 2)
    ctx->pc = 0x255BECu;
    {
        const bool branch_taken_0x255bec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x255BF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x255BECu;
        // 0x255bf0: 0xa24300b7  sb          $v1, 0xB7($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 183), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x255bec) {
            ctx->pc = 0x255D5Cu;
            goto label_255d5c;
        }
    }
    ctx->pc = 0x255BF4u;
    // 0x255bf4: 0x3c05003f  lui         $a1, 0x3F
    ctx->pc = 0x255bf4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)63 << 16));
    // 0x255bf8: 0x306600ff  andi        $a2, $v1, 0xFF
    ctx->pc = 0x255bf8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x255bfc: 0x24a56f30  addiu       $a1, $a1, 0x6F30
    ctx->pc = 0x255bfcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 28464));
    // 0x255c00: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x255c00u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x255c04: 0xc08b5ac  jal         func_22D6B0
    ctx->pc = 0x255C04u;
    SET_GPR_U32(ctx, 31, 0x255C0Cu);
    ctx->pc = 0x255C08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x255C04u;
    // 0x255c08: 0x2407000e  addiu       $a3, $zero, 0xE (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22D6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22D6B0u, 0x255C04u, 0x255C0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x255C0Cu;
label_255c0c:
    // 0x255c0c: 0x2402000e  addiu       $v0, $zero, 0xE
    ctx->pc = 0x255c0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x255c10: 0x10000052  b           . + 4 + (0x52 << 2)
    ctx->pc = 0x255C10u;
    {
        const bool branch_taken_0x255c10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x255C14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x255C10u;
        // 0x255c14: 0xa24200b7  sb          $v0, 0xB7($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 183), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x255c10) {
            ctx->pc = 0x255D5Cu;
            goto label_255d5c;
        }
    }
    ctx->pc = 0x255C18u;
label_255c18:
    // 0x255c18: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x255c18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x255c1c: 0x56020050  bnel        $s0, $v0, . + 4 + (0x50 << 2)
    ctx->pc = 0x255C1Cu;
    {
        const bool branch_taken_0x255c1c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        if (branch_taken_0x255c1c) {
            ctx->pc = 0x255C20u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x255C1Cu;
            // 0x255c20: 0x2308821  addu        $s1, $s1, $s0 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x255D60u;
            goto label_255d60;
        }
    }
    ctx->pc = 0x255C24u;
    // 0x255c24: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x255c24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x255c28: 0x26240002  addiu       $a0, $s1, 0x2
    ctx->pc = 0x255c28u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 2));
    // 0x255c2c: 0xae820000  sw          $v0, 0x0($s4)
    ctx->pc = 0x255c2cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 2));
    // 0x255c30: 0x26850004  addiu       $a1, $s4, 0x4
    ctx->pc = 0x255c30u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 4));
    // 0x255c34: 0xc08b4f8  jal         func_22D3E0
    ctx->pc = 0x255C34u;
    SET_GPR_U32(ctx, 31, 0x255C3Cu);
    ctx->pc = 0x255C38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x255C34u;
    // 0x255c38: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22D3E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22D3E0u, 0x255C34u, 0x255C3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x255C3Cu;
label_255c3c:
    // 0x255c3c: 0xc08b5fe  jal         func_22D7F8
    ctx->pc = 0x255C3Cu;
    SET_GPR_U32(ctx, 31, 0x255C44u);
    ctx->pc = 0x255C40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x255C3Cu;
    // 0x255c40: 0x8e840004  lw          $a0, 0x4($s4) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22D7F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22D7F8u, 0x255C3Cu, 0x255C44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x255C44u;
label_255c44:
    // 0x255c44: 0xae820004  sw          $v0, 0x4($s4)
    ctx->pc = 0x255c44u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 4), GPR_U32(ctx, 2));
    // 0x255c48: 0x26240006  addiu       $a0, $s1, 0x6
    ctx->pc = 0x255c48u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 6));
    // 0x255c4c: 0x26850008  addiu       $a1, $s4, 0x8
    ctx->pc = 0x255c4cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 8));
    // 0x255c50: 0xc08b4f8  jal         func_22D3E0
    ctx->pc = 0x255C50u;
    SET_GPR_U32(ctx, 31, 0x255C58u);
    ctx->pc = 0x255C54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x255C50u;
    // 0x255c54: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22D3E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22D3E0u, 0x255C50u, 0x255C58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x255C58u;
label_255c58:
    // 0x255c58: 0xc08b5fe  jal         func_22D7F8
    ctx->pc = 0x255C58u;
    SET_GPR_U32(ctx, 31, 0x255C60u);
    ctx->pc = 0x255C5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x255C58u;
    // 0x255c5c: 0x8e840008  lw          $a0, 0x8($s4) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22D7F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22D7F8u, 0x255C58u, 0x255C60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x255C60u;
label_255c60:
    // 0x255c60: 0xae820008  sw          $v0, 0x8($s4)
    ctx->pc = 0x255c60u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 8), GPR_U32(ctx, 2));
    // 0x255c64: 0x92e2000d  lbu         $v0, 0xD($s7)
    ctx->pc = 0x255c64u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 23), 13)));
    // 0x255c68: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x255c68u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x255c6c: 0x5040003c  beql        $v0, $zero, . + 4 + (0x3C << 2)
    ctx->pc = 0x255C6Cu;
    {
        const bool branch_taken_0x255c6c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x255c6c) {
            ctx->pc = 0x255C70u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x255C6Cu;
            // 0x255c70: 0x2308821  addu        $s1, $s1, $s0 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x255D60u;
            goto label_255d60;
        }
    }
    ctx->pc = 0x255C74u;
    // 0x255c74: 0x96430028  lhu         $v1, 0x28($s2)
    ctx->pc = 0x255c74u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 40)));
    // 0x255c78: 0x3c02003a  lui         $v0, 0x3A
    ctx->pc = 0x255c78u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)58 << 16));
    // 0x255c7c: 0x8c441528  lw          $a0, 0x1528($v0)
    ctx->pc = 0x255c7cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 5416)));
    // 0x255c80: 0x34630100  ori         $v1, $v1, 0x100
    ctx->pc = 0x255c80u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)256);
    // 0x255c84: 0xa6430028  sh          $v1, 0x28($s2)
    ctx->pc = 0x255c84u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 40), (uint16_t)GPR_U32(ctx, 3));
    // 0x255c88: 0x8e820004  lw          $v0, 0x4($s4)
    ctx->pc = 0x255c88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
    // 0x255c8c: 0xae4400bc  sw          $a0, 0xBC($s2)
    ctx->pc = 0x255c8cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 188), GPR_U32(ctx, 4));
    // 0x255c90: 0x10000032  b           . + 4 + (0x32 << 2)
    ctx->pc = 0x255C90u;
    {
        const bool branch_taken_0x255c90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x255C94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x255C90u;
        // 0x255c94: 0xae4200b8  sw          $v0, 0xB8($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 184), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x255c90) {
            ctx->pc = 0x255D5Cu;
            goto label_255d5c;
        }
    }
    ctx->pc = 0x255C98u;
label_255c98:
    // 0x255c98: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x255c98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x255c9c: 0x56020030  bnel        $s0, $v0, . + 4 + (0x30 << 2)
    ctx->pc = 0x255C9Cu;
    {
        const bool branch_taken_0x255c9c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        if (branch_taken_0x255c9c) {
            ctx->pc = 0x255CA0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x255C9Cu;
            // 0x255ca0: 0x2308821  addu        $s1, $s1, $s0 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x255D60u;
            goto label_255d60;
        }
    }
    ctx->pc = 0x255CA4u;
    // 0x255ca4: 0x92e2000d  lbu         $v0, 0xD($s7)
    ctx->pc = 0x255ca4u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 23), 13)));
    // 0x255ca8: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x255ca8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x255cac: 0x5040002c  beql        $v0, $zero, . + 4 + (0x2C << 2)
    ctx->pc = 0x255CACu;
    {
        const bool branch_taken_0x255cac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x255cac) {
            ctx->pc = 0x255CB0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x255CACu;
            // 0x255cb0: 0x2308821  addu        $s1, $s1, $s0 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x255D60u;
            goto label_255d60;
        }
    }
    ctx->pc = 0x255CB4u;
    // 0x255cb4: 0x96420028  lhu         $v0, 0x28($s2)
    ctx->pc = 0x255cb4u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 40)));
    // 0x255cb8: 0x3042efff  andi        $v0, $v0, 0xEFFF
    ctx->pc = 0x255cb8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)61439);
    // 0x255cbc: 0x10000027  b           . + 4 + (0x27 << 2)
    ctx->pc = 0x255CBCu;
    {
        const bool branch_taken_0x255cbc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x255CC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x255CBCu;
        // 0x255cc0: 0xa6420028  sh          $v0, 0x28($s2) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 18), 40), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x255cbc) {
            ctx->pc = 0x255D5Cu;
            goto label_255d5c;
        }
    }
    ctx->pc = 0x255CC4u;
label_255cc4:
    // 0x255cc4: 0x96420028  lhu         $v0, 0x28($s2)
    ctx->pc = 0x255cc4u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 40)));
    // 0x255cc8: 0x30422000  andi        $v0, $v0, 0x2000
    ctx->pc = 0x255cc8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8192);
    // 0x255ccc: 0x54400024  bnel        $v0, $zero, . + 4 + (0x24 << 2)
    ctx->pc = 0x255CCCu;
    {
        const bool branch_taken_0x255ccc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x255ccc) {
            ctx->pc = 0x255CD0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x255CCCu;
            // 0x255cd0: 0x2308821  addu        $s1, $s1, $s0 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x255D60u;
            goto label_255d60;
        }
    }
    ctx->pc = 0x255CD4u;
    // 0x255cd4: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x255cd4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x255cd8: 0x26030007  addiu       $v1, $s0, 0x7
    ctx->pc = 0x255cd8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 7));
    // 0x255cdc: 0x50102a  slt         $v0, $v0, $s0
    ctx->pc = 0x255cdcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x255ce0: 0x2604fffe  addiu       $a0, $s0, -0x2
    ctx->pc = 0x255ce0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967294));
    // 0x255ce4: 0x202180b  movn        $v1, $s0, $v0
    ctx->pc = 0x255ce4u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 16));
    // 0x255ce8: 0x318c3  sra         $v1, $v1, 3
    ctx->pc = 0x255ce8u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 3));
    // 0x255cec: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x255cecu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x255cf0: 0x5464001b  bnel        $v1, $a0, . + 4 + (0x1B << 2)
    ctx->pc = 0x255CF0u;
    {
        const bool branch_taken_0x255cf0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        if (branch_taken_0x255cf0) {
            ctx->pc = 0x255CF4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x255CF0u;
            // 0x255cf4: 0x2308821  addu        $s1, $s1, $s0 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x255D60u;
            goto label_255d60;
        }
    }
    ctx->pc = 0x255CF8u;
    // 0x255cf8: 0x2a02000a  slti        $v0, $s0, 0xA
    ctx->pc = 0x255cf8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)10) ? 1 : 0);
    // 0x255cfc: 0x54400018  bnel        $v0, $zero, . + 4 + (0x18 << 2)
    ctx->pc = 0x255CFCu;
    {
        const bool branch_taken_0x255cfc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x255cfc) {
            ctx->pc = 0x255D00u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x255CFCu;
            // 0x255d00: 0x2308821  addu        $s1, $s1, $s0 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x255D60u;
            goto label_255d60;
        }
    }
    ctx->pc = 0x255D04u;
    // 0x255d04: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x255d04u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x255d08: 0x1a000014  blez        $s0, . + 4 + (0x14 << 2)
    ctx->pc = 0x255D08u;
    {
        const bool branch_taken_0x255d08 = (GPR_S32(ctx, 16) <= 0);
        ctx->pc = 0x255D0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x255D08u;
        // 0x255d0c: 0x26310002  addiu       $s1, $s1, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x255d08) {
            ctx->pc = 0x255D5Cu;
            goto label_255d5c;
        }
    }
    ctx->pc = 0x255D10u;
    // 0x255d10: 0x27b50004  addiu       $s5, $sp, 0x4
    ctx->pc = 0x255d10u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
    // 0x255d14: 0x27b30008  addiu       $s3, $sp, 0x8
    ctx->pc = 0x255d14u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 8));
label_255d18:
    // 0x255d18: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x255d18u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x255d1c: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x255d1cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x255d20: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x255d20u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x255d24: 0xc08b4f8  jal         func_22D3E0
    ctx->pc = 0x255D24u;
    SET_GPR_U32(ctx, 31, 0x255D2Cu);
    ctx->pc = 0x255D28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x255D24u;
    // 0x255d28: 0x2610fff8  addiu       $s0, $s0, -0x8 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967288));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22D3E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22D3E0u, 0x255D24u, 0x255D2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x255D2Cu;
label_255d2c:
    // 0x255d2c: 0xc08b5fe  jal         func_22D7F8
    ctx->pc = 0x255D2Cu;
    SET_GPR_U32(ctx, 31, 0x255D34u);
    ctx->pc = 0x255D30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x255D2Cu;
    // 0x255d30: 0x8fa40004  lw          $a0, 0x4($sp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22D7F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22D7F8u, 0x255D2Cu, 0x255D34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x255D34u;
label_255d34:
    // 0x255d34: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x255d34u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x255d38: 0xafa20004  sw          $v0, 0x4($sp)
    ctx->pc = 0x255d38u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
    // 0x255d3c: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x255d3cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x255d40: 0xc08b4f8  jal         func_22D3E0
    ctx->pc = 0x255D40u;
    SET_GPR_U32(ctx, 31, 0x255D48u);
    ctx->pc = 0x255D44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x255D40u;
    // 0x255d44: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22D3E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22D3E0u, 0x255D40u, 0x255D48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x255D48u;
label_255d48:
    // 0x255d48: 0x2631fff8  addiu       $s1, $s1, -0x8
    ctx->pc = 0x255d48u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967288));
    // 0x255d4c: 0xc08b5fe  jal         func_22D7F8
    ctx->pc = 0x255D4Cu;
    SET_GPR_U32(ctx, 31, 0x255D54u);
    ctx->pc = 0x255D50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x255D4Cu;
    // 0x255d50: 0x8fa40008  lw          $a0, 0x8($sp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22D7F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22D7F8u, 0x255D4Cu, 0x255D54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x255D54u;
label_255d54:
    // 0x255d54: 0x1e00fff0  bgtz        $s0, . + 4 + (-0x10 << 2)
    ctx->pc = 0x255D54u;
    {
        const bool branch_taken_0x255d54 = (GPR_S32(ctx, 16) > 0);
        ctx->pc = 0x255D58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x255D54u;
        // 0x255d58: 0xafa20008  sw          $v0, 0x8($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x255d54) {
            ctx->pc = 0x255D18u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_255d18;
        }
    }
    ctx->pc = 0x255D5Cu;
label_255d5c:
    // 0x255d5c: 0x2308821  addu        $s1, $s1, $s0
    ctx->pc = 0x255d5cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 16)));
label_255d60:
    // 0x255d60: 0x2d0b023  subu        $s6, $s6, $s0
    ctx->pc = 0x255d60u;
    SET_GPR_S32(ctx, 22, (int32_t)SUB32(GPR_U32(ctx, 22), GPR_U32(ctx, 16)));
label_255d64:
    // 0x255d64: 0x1ac00011  blez        $s6, . + 4 + (0x11 << 2)
    ctx->pc = 0x255D64u;
    {
        const bool branch_taken_0x255d64 = (GPR_S32(ctx, 22) <= 0);
        ctx->pc = 0x255D68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x255D64u;
        // 0x255d68: 0xdfbf0090  ld          $ra, 0x90($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x255d64) {
            ctx->pc = 0x255DACu;
            goto label_255dac;
        }
    }
    ctx->pc = 0x255D6Cu;
    // 0x255d6c: 0x92230000  lbu         $v1, 0x0($s1)
    ctx->pc = 0x255d6cu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x255d70: 0x1060000e  beqz        $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x255D70u;
    {
        const bool branch_taken_0x255d70 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x255D74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x255D70u;
        // 0x255d74: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x255d70) {
            ctx->pc = 0x255DACu;
            goto label_255dac;
        }
    }
    ctx->pc = 0x255D78u;
    // 0x255d78: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x255D78u;
    {
        const bool branch_taken_0x255d78 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x255D7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x255D78u;
        // 0x255d7c: 0x2ac20002  slti        $v0, $s6, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 22) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x255d78) {
            ctx->pc = 0x255D88u;
            goto label_255d88;
        }
    }
    ctx->pc = 0x255D80u;
    // 0x255d80: 0x1000ff75  b           . + 4 + (-0x8B << 2)
    ctx->pc = 0x255D80u;
    {
        const bool branch_taken_0x255d80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x255D84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x255D80u;
        // 0x255d84: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x255d80) {
            ctx->pc = 0x255B58u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_255b58;
        }
    }
    ctx->pc = 0x255D88u;
label_255d88:
    // 0x255d88: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x255D88u;
    {
        const bool branch_taken_0x255d88 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x255D8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x255D88u;
        // 0x255d8c: 0xdfbf0090  ld          $ra, 0x90($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x255d88) {
            ctx->pc = 0x255DACu;
            goto label_255dac;
        }
    }
    ctx->pc = 0x255D90u;
    // 0x255d90: 0x92300001  lbu         $s0, 0x1($s1)
    ctx->pc = 0x255d90u;
    SET_GPR_U32(ctx, 16, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1)));
    // 0x255d94: 0x2a020002  slti        $v0, $s0, 0x2
    ctx->pc = 0x255d94u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x255d98: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x255D98u;
    {
        const bool branch_taken_0x255d98 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x255D9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x255D98u;
        // 0x255d9c: 0x2d0102a  slt         $v0, $s6, $s0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 22) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x255d98) {
            ctx->pc = 0x255DACu;
            goto label_255dac;
        }
    }
    ctx->pc = 0x255DA0u;
    // 0x255da0: 0x5040ff6e  beql        $v0, $zero, . + 4 + (-0x92 << 2)
    ctx->pc = 0x255DA0u;
    {
        const bool branch_taken_0x255da0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x255da0) {
            ctx->pc = 0x255DA4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x255DA0u;
            // 0x255da4: 0x2463fffe  addiu       $v1, $v1, -0x2 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967294));
            ctx->in_delay_slot = false;
            ctx->pc = 0x255B5Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_255b5c;
        }
    }
    ctx->pc = 0x255DA8u;
    // 0x255da8: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x255da8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
label_255dac:
    // 0x255dac: 0xdfb70080  ld          $s7, 0x80($sp)
    ctx->pc = 0x255dacu;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x255db0: 0xdfb60070  ld          $s6, 0x70($sp)
    ctx->pc = 0x255db0u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x255db4: 0xdfb50060  ld          $s5, 0x60($sp)
    ctx->pc = 0x255db4u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x255db8: 0xdfb40050  ld          $s4, 0x50($sp)
    ctx->pc = 0x255db8u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x255dbc: 0xdfb30040  ld          $s3, 0x40($sp)
    ctx->pc = 0x255dbcu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x255dc0: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x255dc0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x255dc4: 0xdfb10020  ld          $s1, 0x20($sp)
    ctx->pc = 0x255dc4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x255dc8: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x255dc8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x255dcc: 0x3e00008  jr          $ra
    ctx->pc = 0x255DCCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x255DD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x255DCCu;
        // 0x255dd0: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x255DCCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x255DD4u;
    // 0x255dd4: 0x0  nop
    ctx->pc = 0x255dd4u;
    // NOP
}
