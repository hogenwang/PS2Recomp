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

// Function: sub_002188C0
// Address: 0x2188c0 - 0x218be8
void sub_002188C0_0x2188c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002188C0_0x2188c0");
#endif

    switch (ctx->pc) {
        case 0x2188dcu: goto label_2188dc;
        case 0x2188ecu: goto label_2188ec;
        case 0x21896cu: goto label_21896c;
        case 0x218984u: goto label_218984;
        case 0x2189c0u: goto label_2189c0;
        case 0x2189d0u: goto label_2189d0;
        case 0x218a10u: goto label_218a10;
        case 0x218a20u: goto label_218a20;
        case 0x218a6cu: goto label_218a6c;
        case 0x218aa8u: goto label_218aa8;
        case 0x218b3cu: goto label_218b3c;
        case 0x218b54u: goto label_218b54;
        case 0x218b80u: goto label_218b80;
        case 0x218b8cu: goto label_218b8c;
        case 0x218bb4u: goto label_218bb4;
        case 0x218bbcu: goto label_218bbc;
        default: break;
    }

    ctx->pc = 0x2188c0u;

label_2188c0:
    // 0x2188c0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2188c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2188c4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2188c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2188c8: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x2188c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x2188cc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2188ccu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2188d0: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x2188d0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    // 0x2188d4: 0xc043e52  jal         func_10F948
    ctx->pc = 0x2188D4u;
    SET_GPR_U32(ctx, 31, 0x2188DCu);
    ctx->pc = 0x2188D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2188D4u;
    // 0x2188d8: 0x24841100  addiu       $a0, $a0, 0x1100 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4352));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F948u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F948u, 0x2188D4u, 0x2188DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2188DCu;
label_2188dc:
    // 0x2188dc: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x2188dcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2188e0: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x2188e0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    // 0x2188e4: 0xc043e52  jal         func_10F948
    ctx->pc = 0x2188E4u;
    SET_GPR_U32(ctx, 31, 0x2188ECu);
    ctx->pc = 0x2188E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2188E4u;
    // 0x2188e8: 0x24841120  addiu       $a0, $a0, 0x1120 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4384));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F948u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F948u, 0x2188E4u, 0x2188ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2188ECu;
label_2188ec:
    // 0x2188ec: 0x8e050004  lw          $a1, 0x4($s0)
    ctx->pc = 0x2188ecu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x2188f0: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x2188f0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    // 0x2188f4: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x2188f4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2188f8: 0x248410f0  addiu       $a0, $a0, 0x10F0
    ctx->pc = 0x2188f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4336));
    // 0x2188fc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2188fcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x218900: 0x8043e52  j           func_10F948
    ctx->pc = 0x218900u;
    ctx->pc = 0x218904u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x218900u;
    // 0x218904: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F948u;
    sub_0010F948_0x10f948(rdram, ctx, runtime); return;
    ctx->pc = 0x218908u;
    // 0x218908: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x218908u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x21890c: 0x240effff  addiu       $t6, $zero, -0x1
    ctx->pc = 0x21890cu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x218910: 0xffb40030  sd          $s4, 0x30($sp)
    ctx->pc = 0x218910u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 20));
    // 0x218914: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x218914u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x218918: 0x3c14003a  lui         $s4, 0x3A
    ctx->pc = 0x218918u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)58 << 16));
    // 0x21891c: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x21891cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x218920: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x218920u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x218924: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x218924u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x218928: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x218928u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
    // 0x21892c: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x21892cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x218930: 0xffbf0058  sd          $ra, 0x58($sp)
    ctx->pc = 0x218930u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 31));
    // 0x218934: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x218934u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x218938: 0xffb50038  sd          $s5, 0x38($sp)
    ctx->pc = 0x218938u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 21));
    // 0x21893c: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x21893cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x218940: 0xffb60040  sd          $s6, 0x40($sp)
    ctx->pc = 0x218940u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 22));
    // 0x218944: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x218944u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x218948: 0xffb70048  sd          $s7, 0x48($sp)
    ctx->pc = 0x218948u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 23));
    // 0x21894c: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x21894cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x218950: 0xffbe0050  sd          $fp, 0x50($sp)
    ctx->pc = 0x218950u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 30));
    // 0x218954: 0xae80ab58  sw          $zero, -0x54A8($s4)
    ctx->pc = 0x218954u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 4294945624), GPR_U32(ctx, 0));
    // 0x218958: 0x8cad0000  lw          $t5, 0x0($a1)
    ctx->pc = 0x218958u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x21895c: 0xafae0000  sw          $t6, 0x0($sp)
    ctx->pc = 0x21895cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 14));
    // 0x218960: 0xafad0004  sw          $t5, 0x4($sp)
    ctx->pc = 0x218960u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 13));
    // 0x218964: 0xc0844dc  jal         func_211370
    ctx->pc = 0x218964u;
    SET_GPR_U32(ctx, 31, 0x21896Cu);
    ctx->pc = 0x218968u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x218964u;
    // 0x218968: 0x8e550000  lw          $s5, 0x0($s2) (Delay Slot)
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x211370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x211370u, 0x218964u, 0x21896Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21896Cu;
label_21896c:
    // 0x21896c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x21896cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x218970: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x218970u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x218974: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x218974u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x218978: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x218978u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21897c: 0xc084520  jal         func_211480
    ctx->pc = 0x21897Cu;
    SET_GPR_U32(ctx, 31, 0x218984u);
    ctx->pc = 0x218980u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21897Cu;
    // 0x218980: 0x3a0402d  daddu       $t0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x211480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x211480u, 0x21897Cu, 0x218984u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x218984u;
label_218984:
    // 0x218984: 0x8fae0000  lw          $t6, 0x0($sp)
    ctx->pc = 0x218984u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x218988: 0x29cf0033  slti        $t7, $t6, 0x33
    ctx->pc = 0x218988u;
    SET_GPR_U64(ctx, 15, ((int64_t)GPR_S64(ctx, 14) < (int64_t)(int32_t)51) ? 1 : 0);
    // 0x21898c: 0x11e00047  beqz        $t7, . + 4 + (0x47 << 2)
    ctx->pc = 0x21898Cu;
    {
        const bool branch_taken_0x21898c = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x218990u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21898Cu;
        // 0x218990: 0x240dffff  addiu       $t5, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21898c) {
            ctx->pc = 0x218AACu;
            goto label_218aac;
        }
    }
    ctx->pc = 0x218994u;
    // 0x218994: 0x5c10003  bgez        $t6, . + 4 + (0x3 << 2)
    ctx->pc = 0x218994u;
    {
        const bool branch_taken_0x218994 = (GPR_S32(ctx, 14) >= 0);
        if (branch_taken_0x218994) {
            ctx->pc = 0x2189A4u;
            goto label_2189a4;
        }
    }
    ctx->pc = 0x21899Cu;
    // 0x21899c: 0x240e0032  addiu       $t6, $zero, 0x32
    ctx->pc = 0x21899cu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 50));
    // 0x2189a0: 0xafae0000  sw          $t6, 0x0($sp)
    ctx->pc = 0x2189a0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 14));
label_2189a4:
    // 0x2189a4: 0x19c0002c  blez        $t6, . + 4 + (0x2C << 2)
    ctx->pc = 0x2189A4u;
    {
        const bool branch_taken_0x2189a4 = (GPR_S32(ctx, 14) <= 0);
        ctx->pc = 0x2189A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2189A4u;
        // 0x2189a8: 0x29cf0032  slti        $t7, $t6, 0x32 (Delay Slot)
        SET_GPR_U64(ctx, 15, ((int64_t)GPR_S64(ctx, 14) < (int64_t)(int32_t)50) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2189a4) {
            ctx->pc = 0x218A58u;
            goto label_218a58;
        }
    }
    ctx->pc = 0x2189ACu;
    // 0x2189ac: 0x280b02d  daddu       $s6, $s4, $zero
    ctx->pc = 0x2189acu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2189b0: 0x241effff  addiu       $fp, $zero, -0x1
    ctx->pc = 0x2189b0u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2189b4: 0x3c14003a  lui         $s4, 0x3A
    ctx->pc = 0x2189b4u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)58 << 16));
    // 0x2189b8: 0x2c0b82d  daddu       $s7, $s6, $zero
    ctx->pc = 0x2189b8u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2189bc: 0xae80ab60  sw          $zero, -0x54A0($s4)
    ctx->pc = 0x2189bcu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 4294945632), GPR_U32(ctx, 0));
label_2189c0:
    // 0x2189c0: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2189c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2189c4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2189c4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2189c8: 0xc084ae8  jal         func_212BA0
    ctx->pc = 0x2189C8u;
    SET_GPR_U32(ctx, 31, 0x2189D0u);
    ctx->pc = 0x2189CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2189C8u;
    // 0x2189cc: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x212BA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x212BA0u, 0x2189C8u, 0x2189D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2189D0u;
label_2189d0:
    // 0x2189d0: 0x4400036  bltz        $v0, . + 4 + (0x36 << 2)
    ctx->pc = 0x2189D0u;
    {
        const bool branch_taken_0x2189d0 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x2189D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2189D0u;
        // 0x2189d4: 0x682d  daddu       $t5, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2189d0) {
            ctx->pc = 0x218AACu;
            goto label_218aac;
        }
    }
    ctx->pc = 0x2189D8u;
    // 0x2189d8: 0x8e8fab60  lw          $t7, -0x54A0($s4)
    ctx->pc = 0x2189d8u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4294945632)));
    // 0x2189dc: 0x11e00019  beqz        $t7, . + 4 + (0x19 << 2)
    ctx->pc = 0x2189DCu;
    {
        const bool branch_taken_0x2189dc = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x2189E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2189DCu;
        // 0x2189e0: 0x8fae0000  lw          $t6, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2189dc) {
            ctx->pc = 0x218A44u;
            goto label_218a44;
        }
    }
    ctx->pc = 0x2189E4u;
    // 0x2189e4: 0x8ecdab58  lw          $t5, -0x54A8($s6)
    ctx->pc = 0x2189e4u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4294945624)));
    // 0x2189e8: 0x31af0003  andi        $t7, $t5, 0x3
    ctx->pc = 0x2189e8u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 13) & (uint64_t)(uint16_t)3);
    // 0x2189ec: 0x11e0003c  beqz        $t7, . + 4 + (0x3C << 2)
    ctx->pc = 0x2189ECu;
    {
        const bool branch_taken_0x2189ec = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x2189F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2189ECu;
        // 0x2189f0: 0x25af0003  addiu       $t7, $t5, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 13), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2189ec) {
            ctx->pc = 0x218AE0u;
            goto label_218ae0;
        }
    }
    ctx->pc = 0x2189F4u;
    // 0x2189f4: 0x29ae0000  slti        $t6, $t5, 0x0
    ctx->pc = 0x2189f4u;
    SET_GPR_U64(ctx, 14, ((int64_t)GPR_S64(ctx, 13) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x2189f8: 0x1ae780a  movz        $t7, $t5, $t6
    ctx->pc = 0x2189f8u;
    if (GPR_U64(ctx, 14) == 0) SET_GPR_VEC(ctx, 15, GPR_VEC(ctx, 13));
    // 0x2189fc: 0xf7883  sra         $t7, $t7, 2
    ctx->pc = 0x2189fcu;
    SET_GPR_S32(ctx, 15, SRA32(GPR_S32(ctx, 15), 2));
    // 0x218a00: 0xf7880  sll         $t7, $t7, 2
    ctx->pc = 0x218a00u;
    SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 15), 2));
    // 0x218a04: 0x1af7823  subu        $t7, $t5, $t7
    ctx->pc = 0x218a04u;
    SET_GPR_S32(ctx, 15, (int32_t)SUB32(GPR_U32(ctx, 13), GPR_U32(ctx, 15)));
    // 0x218a08: 0x240d0004  addiu       $t5, $zero, 0x4
    ctx->pc = 0x218a08u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x218a0c: 0x1af7023  subu        $t6, $t5, $t7
    ctx->pc = 0x218a0cu;
    SET_GPR_S32(ctx, 14, (int32_t)SUB32(GPR_U32(ctx, 13), GPR_U32(ctx, 15)));
label_218a10:
    // 0x218a10: 0x25ceffff  addiu       $t6, $t6, -0x1
    ctx->pc = 0x218a10u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 4294967295));
    // 0x218a14: 0x51de000a  beql        $t6, $fp, . + 4 + (0xA << 2)
    ctx->pc = 0x218A14u;
    {
        const bool branch_taken_0x218a14 = (GPR_U64(ctx, 14) == GPR_U64(ctx, 30));
        if (branch_taken_0x218a14) {
            ctx->pc = 0x218A18u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x218A14u;
            // 0x218a18: 0xaee0ab58  sw          $zero, -0x54A8($s7) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 23), 4294945624), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x218A40u;
            goto label_218a40;
        }
    }
    ctx->pc = 0x218A1Cu;
    // 0x218a1c: 0x240dffff  addiu       $t5, $zero, -0x1
    ctx->pc = 0x218a1cu;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_218a20:
    // 0x218a20: 0x8e0f0000  lw          $t7, 0x0($s0)
    ctx->pc = 0x218a20u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x218a24: 0x25ceffff  addiu       $t6, $t6, -0x1
    ctx->pc = 0x218a24u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 4294967295));
    // 0x218a28: 0xa1e00000  sb          $zero, 0x0($t7)
    ctx->pc = 0x218a28u;
    WRITE8(ADD32(GPR_U32(ctx, 15), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x218a2c: 0x25ef0001  addiu       $t7, $t7, 0x1
    ctx->pc = 0x218a2cu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 1));
    // 0x218a30: 0x0  nop
    ctx->pc = 0x218a30u;
    // NOP
    // 0x218a34: 0x15cdfffa  bne         $t6, $t5, . + 4 + (-0x6 << 2)
    ctx->pc = 0x218A34u;
    {
        const bool branch_taken_0x218a34 = (GPR_U64(ctx, 14) != GPR_U64(ctx, 13));
        ctx->pc = 0x218A38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x218A34u;
        // 0x218a38: 0xae0f0000  sw          $t7, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 15));
        ctx->in_delay_slot = false;
        if (branch_taken_0x218a34) {
            ctx->pc = 0x218A20u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_218a20;
        }
    }
    ctx->pc = 0x218A3Cu;
    // 0x218a3c: 0xaee0ab58  sw          $zero, -0x54A8($s7)
    ctx->pc = 0x218a3cu;
    WRITE32(ADD32(GPR_U32(ctx, 23), 4294945624), GPR_U32(ctx, 0));
label_218a40:
    // 0x218a40: 0x8fae0000  lw          $t6, 0x0($sp)
    ctx->pc = 0x218a40u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_218a44:
    // 0x218a44: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x218a44u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x218a48: 0x22e782a  slt         $t7, $s1, $t6
    ctx->pc = 0x218a48u;
    SET_GPR_U64(ctx, 15, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 14)) ? 1 : 0);
    // 0x218a4c: 0x55e0ffdc  bnel        $t7, $zero, . + 4 + (-0x24 << 2)
    ctx->pc = 0x218A4Cu;
    {
        const bool branch_taken_0x218a4c = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        if (branch_taken_0x218a4c) {
            ctx->pc = 0x218A50u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x218A4Cu;
            // 0x218a50: 0xae80ab60  sw          $zero, -0x54A0($s4) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 20), 4294945632), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2189C0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2189c0;
        }
    }
    ctx->pc = 0x218A54u;
    // 0x218a54: 0x29cf0032  slti        $t7, $t6, 0x32
    ctx->pc = 0x218a54u;
    SET_GPR_U64(ctx, 15, ((int64_t)GPR_S64(ctx, 14) < (int64_t)(int32_t)50) ? 1 : 0);
label_218a58:
    // 0x218a58: 0x11e0000d  beqz        $t7, . + 4 + (0xD << 2)
    ctx->pc = 0x218A58u;
    {
        const bool branch_taken_0x218a58 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x218A5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x218A58u;
        // 0x218a5c: 0x1c0882d  daddu       $s1, $t6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 14) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x218a58) {
            ctx->pc = 0x218A90u;
            goto label_218a90;
        }
    }
    ctx->pc = 0x218A60u;
    // 0x218a60: 0x3c0c003a  lui         $t4, 0x3A
    ctx->pc = 0x218a60u;
    SET_GPR_S32(ctx, 12, (int32_t)((uint32_t)58 << 16));
    // 0x218a64: 0x8e0d0000  lw          $t5, 0x0($s0)
    ctx->pc = 0x218a64u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x218a68: 0x8d8eab58  lw          $t6, -0x54A8($t4)
    ctx->pc = 0x218a68u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 4294945624)));
label_218a6c:
    // 0x218a6c: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x218a6cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x218a70: 0x25ad0184  addiu       $t5, $t5, 0x184
    ctx->pc = 0x218a70u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), 388));
    // 0x218a74: 0x2a2f0032  slti        $t7, $s1, 0x32
    ctx->pc = 0x218a74u;
    SET_GPR_U64(ctx, 15, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)50) ? 1 : 0);
    // 0x218a78: 0x0  nop
    ctx->pc = 0x218a78u;
    // NOP
    // 0x218a7c: 0x0  nop
    ctx->pc = 0x218a7cu;
    // NOP
    // 0x218a80: 0x15e0fffa  bnez        $t7, . + 4 + (-0x6 << 2)
    ctx->pc = 0x218A80u;
    {
        const bool branch_taken_0x218a80 = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        ctx->pc = 0x218A84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x218A80u;
        // 0x218a84: 0x25ce0184  addiu       $t6, $t6, 0x184 (Delay Slot)
        SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 388));
        ctx->in_delay_slot = false;
        if (branch_taken_0x218a80) {
            ctx->pc = 0x218A6Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_218a6c;
        }
    }
    ctx->pc = 0x218A88u;
    // 0x218a88: 0xad8eab58  sw          $t6, -0x54A8($t4)
    ctx->pc = 0x218a88u;
    WRITE32(ADD32(GPR_U32(ctx, 12), 4294945624), GPR_U32(ctx, 14));
    // 0x218a8c: 0xae0d0000  sw          $t5, 0x0($s0)
    ctx->pc = 0x218a8cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 13));
label_218a90:
    // 0x218a90: 0x8e4f0000  lw          $t7, 0x0($s2)
    ctx->pc = 0x218a90u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x218a94: 0x240effff  addiu       $t6, $zero, -0x1
    ctx->pc = 0x218a94u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x218a98: 0x8fa40004  lw          $a0, 0x4($sp)
    ctx->pc = 0x218a98u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x218a9c: 0xafae0000  sw          $t6, 0x0($sp)
    ctx->pc = 0x218a9cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 14));
    // 0x218aa0: 0xc086230  jal         func_2188C0
    ctx->pc = 0x218AA0u;
    SET_GPR_U32(ctx, 31, 0x218AA8u);
    ctx->pc = 0x218AA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x218AA0u;
    // 0x218aa4: 0x2afa823  subu        $s5, $s5, $t7 (Delay Slot)
    SET_GPR_S32(ctx, 21, (int32_t)SUB32(GPR_U32(ctx, 21), GPR_U32(ctx, 15)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2188C0u;
    goto label_2188c0;
    ctx->pc = 0x218AA8u;
label_218aa8:
    // 0x218aa8: 0x2a0682d  daddu       $t5, $s5, $zero
    ctx->pc = 0x218aa8u;
    SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_218aac:
    // 0x218aac: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x218aacu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x218ab0: 0x1a0102d  daddu       $v0, $t5, $zero
    ctx->pc = 0x218ab0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 13) + (uint64_t)GPR_U64(ctx, 0));
    // 0x218ab4: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x218ab4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x218ab8: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x218ab8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x218abc: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x218abcu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x218ac0: 0xdfb40030  ld          $s4, 0x30($sp)
    ctx->pc = 0x218ac0u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x218ac4: 0xdfb50038  ld          $s5, 0x38($sp)
    ctx->pc = 0x218ac4u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x218ac8: 0xdfb60040  ld          $s6, 0x40($sp)
    ctx->pc = 0x218ac8u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x218acc: 0xdfb70048  ld          $s7, 0x48($sp)
    ctx->pc = 0x218accu;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x218ad0: 0xdfbe0050  ld          $fp, 0x50($sp)
    ctx->pc = 0x218ad0u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x218ad4: 0xdfbf0058  ld          $ra, 0x58($sp)
    ctx->pc = 0x218ad4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x218ad8: 0x3e00008  jr          $ra
    ctx->pc = 0x218AD8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x218ADCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x218AD8u;
        // 0x218adc: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x218AD8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x218AE0u;
label_218ae0:
    // 0x218ae0: 0x1000ffcb  b           . + 4 + (-0x35 << 2)
    ctx->pc = 0x218AE0u;
    {
        const bool branch_taken_0x218ae0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x218AE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x218AE0u;
        // 0x218ae4: 0x702d  daddu       $t6, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 14, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x218ae0) {
            ctx->pc = 0x218A10u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_218a10;
        }
    }
    ctx->pc = 0x218AE8u;
    // 0x218ae8: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x218ae8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x218aec: 0x240effff  addiu       $t6, $zero, -0x1
    ctx->pc = 0x218aecu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x218af0: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x218af0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x218af4: 0x3c0f003a  lui         $t7, 0x3A
    ctx->pc = 0x218af4u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)58 << 16));
    // 0x218af8: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x218af8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x218afc: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x218afcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x218b00: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x218b00u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x218b04: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x218b04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
    // 0x218b08: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x218b08u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x218b0c: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x218b0cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x218b10: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x218b10u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x218b14: 0xafae0000  sw          $t6, 0x0($sp)
    ctx->pc = 0x218b14u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 14));
    // 0x218b18: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x218b18u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x218b1c: 0xffb40030  sd          $s4, 0x30($sp)
    ctx->pc = 0x218b1cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 20));
    // 0x218b20: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x218b20u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x218b24: 0xffb50038  sd          $s5, 0x38($sp)
    ctx->pc = 0x218b24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 21));
    // 0x218b28: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x218b28u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x218b2c: 0xade0ab5c  sw          $zero, -0x54A4($t7)
    ctx->pc = 0x218b2cu;
    WRITE32(ADD32(GPR_U32(ctx, 15), 4294945628), GPR_U32(ctx, 0));
    // 0x218b30: 0x8c950000  lw          $s5, 0x0($a0)
    ctx->pc = 0x218b30u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x218b34: 0xc084612  jal         func_211848
    ctx->pc = 0x218B34u;
    SET_GPR_U32(ctx, 31, 0x218B3Cu);
    ctx->pc = 0x218B38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x218B34u;
    // 0x218b38: 0x8cb40000  lw          $s4, 0x0($a1) (Delay Slot)
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x211848u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x211848u, 0x218B34u, 0x218B3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x218B3Cu;
label_218b3c:
    // 0x218b3c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x218b3cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x218b40: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x218b40u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x218b44: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x218b44u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x218b48: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x218b48u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x218b4c: 0xc084654  jal         func_211950
    ctx->pc = 0x218B4Cu;
    SET_GPR_U32(ctx, 31, 0x218B54u);
    ctx->pc = 0x218B50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x218B4Cu;
    // 0x218b50: 0x3a0402d  daddu       $t0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x211950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x211950u, 0x218B4Cu, 0x218B54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x218B54u;
label_218b54:
    // 0x218b54: 0x8fae0000  lw          $t6, 0x0($sp)
    ctx->pc = 0x218b54u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x218b58: 0x29cf0033  slti        $t7, $t6, 0x33
    ctx->pc = 0x218b58u;
    SET_GPR_U64(ctx, 15, ((int64_t)GPR_S64(ctx, 14) < (int64_t)(int32_t)51) ? 1 : 0);
    // 0x218b5c: 0x11e00017  beqz        $t7, . + 4 + (0x17 << 2)
    ctx->pc = 0x218B5Cu;
    {
        const bool branch_taken_0x218b5c = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x218B60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x218B5Cu;
        // 0x218b60: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x218b5c) {
            ctx->pc = 0x218BBCu;
            goto label_218bbc;
        }
    }
    ctx->pc = 0x218B64u;
    // 0x218b64: 0x5c10003  bgez        $t6, . + 4 + (0x3 << 2)
    ctx->pc = 0x218B64u;
    {
        const bool branch_taken_0x218b64 = (GPR_S32(ctx, 14) >= 0);
        if (branch_taken_0x218b64) {
            ctx->pc = 0x218B74u;
            goto label_218b74;
        }
    }
    ctx->pc = 0x218B6Cu;
    // 0x218b6c: 0x240e0032  addiu       $t6, $zero, 0x32
    ctx->pc = 0x218b6cu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 50));
    // 0x218b70: 0xafae0000  sw          $t6, 0x0($sp)
    ctx->pc = 0x218b70u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 14));
label_218b74:
    // 0x218b74: 0x19c0000c  blez        $t6, . + 4 + (0xC << 2)
    ctx->pc = 0x218B74u;
    {
        const bool branch_taken_0x218b74 = (GPR_S32(ctx, 14) <= 0);
        ctx->pc = 0x218B78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x218B74u;
        // 0x218b78: 0x240effff  addiu       $t6, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x218b74) {
            ctx->pc = 0x218BA8u;
            goto label_218ba8;
        }
    }
    ctx->pc = 0x218B7Cu;
    // 0x218b7c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x218b7cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_218b80:
    // 0x218b80: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x218b80u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x218b84: 0xc084b36  jal         func_212CD8
    ctx->pc = 0x218B84u;
    SET_GPR_U32(ctx, 31, 0x218B8Cu);
    ctx->pc = 0x218B88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x218B84u;
    // 0x218b88: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x212CD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x212CD8u, 0x218B84u, 0x218B8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x218B8Cu;
label_218b8c:
    // 0x218b8c: 0x4400014  bltz        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x218B8Cu;
    {
        const bool branch_taken_0x218b8c = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x218B90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x218B8Cu;
        // 0x218b90: 0x8faf0000  lw          $t7, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x218b8c) {
            ctx->pc = 0x218BE0u;
            goto label_218be0;
        }
    }
    ctx->pc = 0x218B94u;
    // 0x218b94: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x218b94u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x218b98: 0x22f782a  slt         $t7, $s1, $t7
    ctx->pc = 0x218b98u;
    SET_GPR_U64(ctx, 15, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 15)) ? 1 : 0);
    // 0x218b9c: 0x15e0fff8  bnez        $t7, . + 4 + (-0x8 << 2)
    ctx->pc = 0x218B9Cu;
    {
        const bool branch_taken_0x218b9c = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        ctx->pc = 0x218BA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x218B9Cu;
        // 0x218ba0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x218b9c) {
            ctx->pc = 0x218B80u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_218b80;
        }
    }
    ctx->pc = 0x218BA4u;
    // 0x218ba4: 0x240effff  addiu       $t6, $zero, -0x1
    ctx->pc = 0x218ba4u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_218ba8:
    // 0x218ba8: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x218ba8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x218bac: 0xc086230  jal         func_2188C0
    ctx->pc = 0x218BACu;
    SET_GPR_U32(ctx, 31, 0x218BB4u);
    ctx->pc = 0x218BB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x218BACu;
    // 0x218bb0: 0xafae0000  sw          $t6, 0x0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 14));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2188C0u;
    goto label_2188c0;
    ctx->pc = 0x218BB4u;
label_218bb4:
    // 0x218bb4: 0x8e6f0000  lw          $t7, 0x0($s3)
    ctx->pc = 0x218bb4u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x218bb8: 0x1f41023  subu        $v0, $t7, $s4
    ctx->pc = 0x218bb8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 15), GPR_U32(ctx, 20)));
label_218bbc:
    // 0x218bbc: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x218bbcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x218bc0: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x218bc0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x218bc4: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x218bc4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x218bc8: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x218bc8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x218bcc: 0xdfb40030  ld          $s4, 0x30($sp)
    ctx->pc = 0x218bccu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x218bd0: 0xdfb50038  ld          $s5, 0x38($sp)
    ctx->pc = 0x218bd0u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x218bd4: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x218bd4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x218bd8: 0x3e00008  jr          $ra
    ctx->pc = 0x218BD8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x218BDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x218BD8u;
        // 0x218bdc: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x218BD8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x218BE0u;
label_218be0:
    // 0x218be0: 0x1000fff6  b           . + 4 + (-0xA << 2)
    ctx->pc = 0x218BE0u;
    {
        const bool branch_taken_0x218be0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x218BE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x218BE0u;
        // 0x218be4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x218be0) {
            ctx->pc = 0x218BBCu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_218bbc;
        }
    }
    ctx->pc = 0x218BE8u;
}
