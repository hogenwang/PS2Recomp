#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00210918
// Address: 0x210918 - 0x210be0
void sub_00210918_0x210918(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00210918_0x210918");
#endif

    switch (ctx->pc) {
        case 0x210918u: goto label_210918;
        case 0x21091cu: goto label_21091c;
        case 0x210920u: goto label_210920;
        case 0x210924u: goto label_210924;
        case 0x210928u: goto label_210928;
        case 0x21092cu: goto label_21092c;
        case 0x210930u: goto label_210930;
        case 0x210934u: goto label_210934;
        case 0x210938u: goto label_210938;
        case 0x21093cu: goto label_21093c;
        case 0x210940u: goto label_210940;
        case 0x210944u: goto label_210944;
        case 0x210948u: goto label_210948;
        case 0x21094cu: goto label_21094c;
        case 0x210950u: goto label_210950;
        case 0x210954u: goto label_210954;
        case 0x210958u: goto label_210958;
        case 0x21095cu: goto label_21095c;
        case 0x210960u: goto label_210960;
        case 0x210964u: goto label_210964;
        case 0x210968u: goto label_210968;
        case 0x21096cu: goto label_21096c;
        case 0x210970u: goto label_210970;
        case 0x210974u: goto label_210974;
        case 0x210978u: goto label_210978;
        case 0x21097cu: goto label_21097c;
        case 0x210980u: goto label_210980;
        case 0x210984u: goto label_210984;
        case 0x210988u: goto label_210988;
        case 0x21098cu: goto label_21098c;
        case 0x210990u: goto label_210990;
        case 0x210994u: goto label_210994;
        case 0x210998u: goto label_210998;
        case 0x21099cu: goto label_21099c;
        case 0x2109a0u: goto label_2109a0;
        case 0x2109a4u: goto label_2109a4;
        case 0x2109a8u: goto label_2109a8;
        case 0x2109acu: goto label_2109ac;
        case 0x2109b0u: goto label_2109b0;
        case 0x2109b4u: goto label_2109b4;
        case 0x2109b8u: goto label_2109b8;
        case 0x2109bcu: goto label_2109bc;
        case 0x2109c0u: goto label_2109c0;
        case 0x2109c4u: goto label_2109c4;
        case 0x2109c8u: goto label_2109c8;
        case 0x2109ccu: goto label_2109cc;
        case 0x2109d0u: goto label_2109d0;
        case 0x2109d4u: goto label_2109d4;
        case 0x2109d8u: goto label_2109d8;
        case 0x2109dcu: goto label_2109dc;
        case 0x2109e0u: goto label_2109e0;
        case 0x2109e4u: goto label_2109e4;
        case 0x2109e8u: goto label_2109e8;
        case 0x2109ecu: goto label_2109ec;
        case 0x2109f0u: goto label_2109f0;
        case 0x2109f4u: goto label_2109f4;
        case 0x2109f8u: goto label_2109f8;
        case 0x2109fcu: goto label_2109fc;
        case 0x210a00u: goto label_210a00;
        case 0x210a04u: goto label_210a04;
        case 0x210a08u: goto label_210a08;
        case 0x210a0cu: goto label_210a0c;
        case 0x210a10u: goto label_210a10;
        case 0x210a14u: goto label_210a14;
        case 0x210a18u: goto label_210a18;
        case 0x210a1cu: goto label_210a1c;
        case 0x210a20u: goto label_210a20;
        case 0x210a24u: goto label_210a24;
        case 0x210a28u: goto label_210a28;
        case 0x210a2cu: goto label_210a2c;
        case 0x210a30u: goto label_210a30;
        case 0x210a34u: goto label_210a34;
        case 0x210a38u: goto label_210a38;
        case 0x210a3cu: goto label_210a3c;
        case 0x210a40u: goto label_210a40;
        case 0x210a44u: goto label_210a44;
        case 0x210a48u: goto label_210a48;
        case 0x210a4cu: goto label_210a4c;
        case 0x210a50u: goto label_210a50;
        case 0x210a54u: goto label_210a54;
        case 0x210a58u: goto label_210a58;
        case 0x210a5cu: goto label_210a5c;
        case 0x210a60u: goto label_210a60;
        case 0x210a64u: goto label_210a64;
        case 0x210a68u: goto label_210a68;
        case 0x210a6cu: goto label_210a6c;
        case 0x210a70u: goto label_210a70;
        case 0x210a74u: goto label_210a74;
        case 0x210a78u: goto label_210a78;
        case 0x210a7cu: goto label_210a7c;
        case 0x210a80u: goto label_210a80;
        case 0x210a84u: goto label_210a84;
        case 0x210a88u: goto label_210a88;
        case 0x210a8cu: goto label_210a8c;
        case 0x210a90u: goto label_210a90;
        case 0x210a94u: goto label_210a94;
        case 0x210a98u: goto label_210a98;
        case 0x210a9cu: goto label_210a9c;
        case 0x210aa0u: goto label_210aa0;
        case 0x210aa4u: goto label_210aa4;
        case 0x210aa8u: goto label_210aa8;
        case 0x210aacu: goto label_210aac;
        case 0x210ab0u: goto label_210ab0;
        case 0x210ab4u: goto label_210ab4;
        case 0x210ab8u: goto label_210ab8;
        case 0x210abcu: goto label_210abc;
        case 0x210ac0u: goto label_210ac0;
        case 0x210ac4u: goto label_210ac4;
        case 0x210ac8u: goto label_210ac8;
        case 0x210accu: goto label_210acc;
        case 0x210ad0u: goto label_210ad0;
        case 0x210ad4u: goto label_210ad4;
        case 0x210ad8u: goto label_210ad8;
        case 0x210adcu: goto label_210adc;
        case 0x210ae0u: goto label_210ae0;
        case 0x210ae4u: goto label_210ae4;
        case 0x210ae8u: goto label_210ae8;
        case 0x210aecu: goto label_210aec;
        case 0x210af0u: goto label_210af0;
        case 0x210af4u: goto label_210af4;
        case 0x210af8u: goto label_210af8;
        case 0x210afcu: goto label_210afc;
        case 0x210b00u: goto label_210b00;
        case 0x210b04u: goto label_210b04;
        case 0x210b08u: goto label_210b08;
        case 0x210b0cu: goto label_210b0c;
        case 0x210b10u: goto label_210b10;
        case 0x210b14u: goto label_210b14;
        case 0x210b18u: goto label_210b18;
        case 0x210b1cu: goto label_210b1c;
        case 0x210b20u: goto label_210b20;
        case 0x210b24u: goto label_210b24;
        case 0x210b28u: goto label_210b28;
        case 0x210b2cu: goto label_210b2c;
        case 0x210b30u: goto label_210b30;
        case 0x210b34u: goto label_210b34;
        case 0x210b38u: goto label_210b38;
        case 0x210b3cu: goto label_210b3c;
        case 0x210b40u: goto label_210b40;
        case 0x210b44u: goto label_210b44;
        case 0x210b48u: goto label_210b48;
        case 0x210b4cu: goto label_210b4c;
        case 0x210b50u: goto label_210b50;
        case 0x210b54u: goto label_210b54;
        case 0x210b58u: goto label_210b58;
        case 0x210b5cu: goto label_210b5c;
        case 0x210b60u: goto label_210b60;
        case 0x210b64u: goto label_210b64;
        case 0x210b68u: goto label_210b68;
        case 0x210b6cu: goto label_210b6c;
        case 0x210b70u: goto label_210b70;
        case 0x210b74u: goto label_210b74;
        case 0x210b78u: goto label_210b78;
        case 0x210b7cu: goto label_210b7c;
        case 0x210b80u: goto label_210b80;
        case 0x210b84u: goto label_210b84;
        case 0x210b88u: goto label_210b88;
        case 0x210b8cu: goto label_210b8c;
        case 0x210b90u: goto label_210b90;
        case 0x210b94u: goto label_210b94;
        case 0x210b98u: goto label_210b98;
        case 0x210b9cu: goto label_210b9c;
        case 0x210ba0u: goto label_210ba0;
        case 0x210ba4u: goto label_210ba4;
        case 0x210ba8u: goto label_210ba8;
        case 0x210bacu: goto label_210bac;
        case 0x210bb0u: goto label_210bb0;
        case 0x210bb4u: goto label_210bb4;
        case 0x210bb8u: goto label_210bb8;
        case 0x210bbcu: goto label_210bbc;
        case 0x210bc0u: goto label_210bc0;
        case 0x210bc4u: goto label_210bc4;
        case 0x210bc8u: goto label_210bc8;
        case 0x210bccu: goto label_210bcc;
        case 0x210bd0u: goto label_210bd0;
        case 0x210bd4u: goto label_210bd4;
        case 0x210bd8u: goto label_210bd8;
        case 0x210bdcu: goto label_210bdc;
        default: break;
    }

    ctx->pc = 0x210918u;

label_210918:
    // 0x210918: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x210918u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_21091c:
    // 0x21091c: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x21091cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
label_210920:
    // 0x210920: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x210920u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
label_210924:
    // 0x210924: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x210924u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
label_210928:
    // 0x210928: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x210928u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
label_21092c:
    // 0x21092c: 0x908e0028  lbu         $t6, 0x28($a0)
    ctx->pc = 0x21092cu;
    SET_GPR_U32(ctx, 14, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 40)));
label_210930:
    // 0x210930: 0x25cf0002  addiu       $t7, $t6, 0x2
    ctx->pc = 0x210930u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 14), 2));
label_210934:
    // 0x210934: 0x31ef00ff  andi        $t7, $t7, 0xFF
    ctx->pc = 0x210934u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) & (uint64_t)(uint16_t)255);
label_210938:
    // 0x210938: 0x2def0002  sltiu       $t7, $t7, 0x2
    ctx->pc = 0x210938u;
    SET_GPR_U64(ctx, 15, ((uint64_t)GPR_U64(ctx, 15) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
label_21093c:
    // 0x21093c: 0x15e000a4  bnez        $t7, . + 4 + (0xA4 << 2)
label_210940:
    if (ctx->pc == 0x210940u) {
        ctx->pc = 0x210940u;
            // 0x210940: 0x80902d  daddu       $s2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x210944u;
        goto label_210944;
    }
    ctx->pc = 0x21093Cu;
    {
        const bool branch_taken_0x21093c = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        ctx->pc = 0x210940u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21093Cu;
            // 0x210940: 0x80902d  daddu       $s2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21093c) {
            ctx->pc = 0x210BD0u;
            goto label_210bd0;
        }
    }
    ctx->pc = 0x210944u;
label_210944:
    // 0x210944: 0xe1600  sll         $v0, $t6, 24
    ctx->pc = 0x210944u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 14), 24));
label_210948:
    // 0x210948: 0x240f0005  addiu       $t7, $zero, 0x5
    ctx->pc = 0x210948u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_21094c:
    // 0x21094c: 0x21603  sra         $v0, $v0, 24
    ctx->pc = 0x21094cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 24));
label_210950:
    // 0x210950: 0x144f0007  bne         $v0, $t7, . + 4 + (0x7 << 2)
label_210954:
    if (ctx->pc == 0x210954u) {
        ctx->pc = 0x210958u;
        goto label_210958;
    }
    ctx->pc = 0x210950u;
    {
        const bool branch_taken_0x210950 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 15));
        if (branch_taken_0x210950) {
            ctx->pc = 0x210970u;
            goto label_210970;
        }
    }
    ctx->pc = 0x210958u;
label_210958:
    // 0x210958: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x210958u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_21095c:
    // 0x21095c: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x21095cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_210960:
    // 0x210960: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x210960u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_210964:
    // 0x210964: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x210964u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
label_210968:
    // 0x210968: 0x3e00008  jr          $ra
label_21096c:
    if (ctx->pc == 0x21096Cu) {
        ctx->pc = 0x21096Cu;
            // 0x21096c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x210970u;
        goto label_210970;
    }
    ctx->pc = 0x210968u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21096Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x210968u;
            // 0x21096c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x210970u;
label_210970:
    // 0x210970: 0xc08917a  jal         func_2245E8
label_210974:
    if (ctx->pc == 0x210974u) {
        ctx->pc = 0x210974u;
            // 0x210974: 0x8c840000  lw          $a0, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->pc = 0x210978u;
        goto label_210978;
    }
    ctx->pc = 0x210970u;
    SET_GPR_U32(ctx, 31, 0x210978u);
    ctx->pc = 0x210974u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x210970u;
            // 0x210974: 0x8c840000  lw          $a0, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2245E8u;
    if (runtime->hasFunction(0x2245E8u)) {
        auto targetFn = runtime->lookupFunction(0x2245E8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x210978u; }
        if (ctx->pc != 0x210978u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002245E8_0x2245e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x210978u; }
        if (ctx->pc != 0x210978u) { return; }
    }
    ctx->pc = 0x210978u;
label_210978:
    // 0x210978: 0x240f0001  addiu       $t7, $zero, 0x1
    ctx->pc = 0x210978u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_21097c:
    // 0x21097c: 0x104f0087  beq         $v0, $t7, . + 4 + (0x87 << 2)
label_210980:
    if (ctx->pc == 0x210980u) {
        ctx->pc = 0x210980u;
            // 0x210980: 0x284f0002  slti        $t7, $v0, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 15, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->pc = 0x210984u;
        goto label_210984;
    }
    ctx->pc = 0x21097Cu;
    {
        const bool branch_taken_0x21097c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 15));
        ctx->pc = 0x210980u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21097Cu;
            // 0x210980: 0x284f0002  slti        $t7, $v0, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 15, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x21097c) {
            ctx->pc = 0x210B9Cu;
            goto label_210b9c;
        }
    }
    ctx->pc = 0x210984u;
label_210984:
    // 0x210984: 0x11e0007e  beqz        $t7, . + 4 + (0x7E << 2)
label_210988:
    if (ctx->pc == 0x210988u) {
        ctx->pc = 0x210988u;
            // 0x210988: 0x240fffff  addiu       $t7, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x21098Cu;
        goto label_21098c;
    }
    ctx->pc = 0x210984u;
    {
        const bool branch_taken_0x210984 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x210988u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x210984u;
            // 0x210988: 0x240fffff  addiu       $t7, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x210984) {
            ctx->pc = 0x210B80u;
            goto label_210b80;
        }
    }
    ctx->pc = 0x21098Cu;
label_21098c:
    // 0x21098c: 0x104f0071  beq         $v0, $t7, . + 4 + (0x71 << 2)
label_210990:
    if (ctx->pc == 0x210990u) {
        ctx->pc = 0x210990u;
            // 0x210990: 0x2644003c  addiu       $a0, $s2, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 60));
        ctx->pc = 0x210994u;
        goto label_210994;
    }
    ctx->pc = 0x21098Cu;
    {
        const bool branch_taken_0x21098c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 15));
        ctx->pc = 0x210990u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21098Cu;
            // 0x210990: 0x2644003c  addiu       $a0, $s2, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 60));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21098c) {
            ctx->pc = 0x210B54u;
            goto label_210b54;
        }
    }
    ctx->pc = 0x210994u;
label_210994:
    // 0x210994: 0xc08918c  jal         func_224630
label_210998:
    if (ctx->pc == 0x210998u) {
        ctx->pc = 0x210998u;
            // 0x210998: 0x8e440000  lw          $a0, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->pc = 0x21099Cu;
        goto label_21099c;
    }
    ctx->pc = 0x210994u;
    SET_GPR_U32(ctx, 31, 0x21099Cu);
    ctx->pc = 0x210998u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x210994u;
            // 0x210998: 0x8e440000  lw          $a0, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x224630u;
    if (runtime->hasFunction(0x224630u)) {
        auto targetFn = runtime->lookupFunction(0x224630u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21099Cu; }
        if (ctx->pc != 0x21099Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00224630_0x224630(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21099Cu; }
        if (ctx->pc != 0x21099Cu) { return; }
    }
    ctx->pc = 0x21099Cu;
label_21099c:
    // 0x21099c: 0x240f0005  addiu       $t7, $zero, 0x5
    ctx->pc = 0x21099cu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_2109a0:
    // 0x2109a0: 0x544f0010  bnel        $v0, $t7, . + 4 + (0x10 << 2)
label_2109a4:
    if (ctx->pc == 0x2109A4u) {
        ctx->pc = 0x2109A4u;
            // 0x2109a4: 0x8e4f0074  lw          $t7, 0x74($s2) (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 116)));
        ctx->pc = 0x2109A8u;
        goto label_2109a8;
    }
    ctx->pc = 0x2109A0u;
    {
        const bool branch_taken_0x2109a0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 15));
        if (branch_taken_0x2109a0) {
            ctx->pc = 0x2109A4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2109A0u;
            // 0x2109a4: 0x8e4f0074  lw          $t7, 0x74($s2) (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 116)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2109E4u;
            goto label_2109e4;
        }
    }
    ctx->pc = 0x2109A8u;
label_2109a8:
    // 0x2109a8: 0x8e500024  lw          $s0, 0x24($s2)
    ctx->pc = 0x2109a8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 36)));
label_2109ac:
    // 0x2109ac: 0x240f0001  addiu       $t7, $zero, 0x1
    ctx->pc = 0x2109acu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2109b0:
    // 0x2109b0: 0x560f000c  bnel        $s0, $t7, . + 4 + (0xC << 2)
label_2109b4:
    if (ctx->pc == 0x2109B4u) {
        ctx->pc = 0x2109B4u;
            // 0x2109b4: 0x8e4f0074  lw          $t7, 0x74($s2) (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 116)));
        ctx->pc = 0x2109B8u;
        goto label_2109b8;
    }
    ctx->pc = 0x2109B0u;
    {
        const bool branch_taken_0x2109b0 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 15));
        if (branch_taken_0x2109b0) {
            ctx->pc = 0x2109B4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2109B0u;
            // 0x2109b4: 0x8e4f0074  lw          $t7, 0x74($s2) (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 116)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2109E4u;
            goto label_2109e4;
        }
    }
    ctx->pc = 0x2109B8u;
label_2109b8:
    // 0x2109b8: 0x240f0002  addiu       $t7, $zero, 0x2
    ctx->pc = 0x2109b8u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_2109bc:
    // 0x2109bc: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2109bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2109c0:
    // 0x2109c0: 0xae4f0024  sw          $t7, 0x24($s2)
    ctx->pc = 0x2109c0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 36), GPR_U32(ctx, 15));
label_2109c4:
    // 0x2109c4: 0xc083c8c  jal         func_20F230
label_2109c8:
    if (ctx->pc == 0x2109C8u) {
        ctx->pc = 0x2109C8u;
            // 0x2109c8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x2109CCu;
        goto label_2109cc;
    }
    ctx->pc = 0x2109C4u;
    SET_GPR_U32(ctx, 31, 0x2109CCu);
    ctx->pc = 0x2109C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2109C4u;
            // 0x2109c8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x20F230u;
    if (runtime->hasFunction(0x20F230u)) {
        auto targetFn = runtime->lookupFunction(0x20F230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2109CCu; }
        if (ctx->pc != 0x2109CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0020F230_0x20f230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2109CCu; }
        if (ctx->pc != 0x2109CCu) { return; }
    }
    ctx->pc = 0x2109CCu;
label_2109cc:
    // 0x2109cc: 0x240f000c  addiu       $t7, $zero, 0xC
    ctx->pc = 0x2109ccu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_2109d0:
    // 0x2109d0: 0xa250002b  sb          $s0, 0x2B($s2)
    ctx->pc = 0x2109d0u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 43), (uint8_t)GPR_U32(ctx, 16));
label_2109d4:
    // 0x2109d4: 0xae4f0068  sw          $t7, 0x68($s2)
    ctx->pc = 0x2109d4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 104), GPR_U32(ctx, 15));
label_2109d8:
    // 0x2109d8: 0xae40006c  sw          $zero, 0x6C($s2)
    ctx->pc = 0x2109d8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 108), GPR_U32(ctx, 0));
label_2109dc:
    // 0x2109dc: 0xae400074  sw          $zero, 0x74($s2)
    ctx->pc = 0x2109dcu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 116), GPR_U32(ctx, 0));
label_2109e0:
    // 0x2109e0: 0x8e4f0074  lw          $t7, 0x74($s2)
    ctx->pc = 0x2109e0u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 116)));
label_2109e4:
    // 0x2109e4: 0x19e00017  blez        $t7, . + 4 + (0x17 << 2)
label_2109e8:
    if (ctx->pc == 0x2109E8u) {
        ctx->pc = 0x2109E8u;
            // 0x2109e8: 0x25ef0001  addiu       $t7, $t7, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 1));
        ctx->pc = 0x2109ECu;
        goto label_2109ec;
    }
    ctx->pc = 0x2109E4u;
    {
        const bool branch_taken_0x2109e4 = (GPR_S32(ctx, 15) <= 0);
        ctx->pc = 0x2109E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2109E4u;
            // 0x2109e8: 0x25ef0001  addiu       $t7, $t7, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2109e4) {
            ctx->pc = 0x210A44u;
            goto label_210a44;
        }
    }
    ctx->pc = 0x2109ECu;
label_2109ec:
    // 0x2109ec: 0x8e4e0070  lw          $t6, 0x70($s2)
    ctx->pc = 0x2109ecu;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 112)));
label_2109f0:
    // 0x2109f0: 0xae4f0074  sw          $t7, 0x74($s2)
    ctx->pc = 0x2109f0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 116), GPR_U32(ctx, 15));
label_2109f4:
    // 0x2109f4: 0x1ee782a  slt         $t7, $t7, $t6
    ctx->pc = 0x2109f4u;
    SET_GPR_U64(ctx, 15, ((int64_t)GPR_S64(ctx, 15) < (int64_t)GPR_S64(ctx, 14)) ? 1 : 0);
label_2109f8:
    // 0x2109f8: 0x55e00013  bnel        $t7, $zero, . + 4 + (0x13 << 2)
label_2109fc:
    if (ctx->pc == 0x2109FCu) {
        ctx->pc = 0x2109FCu;
            // 0x2109fc: 0x8e4e0024  lw          $t6, 0x24($s2) (Delay Slot)
        SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 36)));
        ctx->pc = 0x210A00u;
        goto label_210a00;
    }
    ctx->pc = 0x2109F8u;
    {
        const bool branch_taken_0x2109f8 = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        if (branch_taken_0x2109f8) {
            ctx->pc = 0x2109FCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2109F8u;
            // 0x2109fc: 0x8e4e0024  lw          $t6, 0x24($s2) (Delay Slot)
        SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 36)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x210A48u;
            goto label_210a48;
        }
    }
    ctx->pc = 0x210A00u;
label_210a00:
    // 0x210a00: 0xae400074  sw          $zero, 0x74($s2)
    ctx->pc = 0x210a00u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 116), GPR_U32(ctx, 0));
label_210a04:
    // 0x210a04: 0x2644003c  addiu       $a0, $s2, 0x3C
    ctx->pc = 0x210a04u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 60));
label_210a08:
    // 0x210a08: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x210a08u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_210a0c:
    // 0x210a0c: 0xc049cb6  jal         func_1272D8
label_210a10:
    if (ctx->pc == 0x210A10u) {
        ctx->pc = 0x210A10u;
            // 0x210a10: 0x24060010  addiu       $a2, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->pc = 0x210A14u;
        goto label_210a14;
    }
    ctx->pc = 0x210A0Cu;
    SET_GPR_U32(ctx, 31, 0x210A14u);
    ctx->pc = 0x210A10u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x210A0Cu;
            // 0x210a10: 0x24060010  addiu       $a2, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1272D8u;
    if (runtime->hasFunction(0x1272D8u)) {
        auto targetFn = runtime->lookupFunction(0x1272D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x210A14u; }
        if (ctx->pc != 0x210A14u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001272D8_0x1272d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x210A14u; }
        if (ctx->pc != 0x210A14u) { return; }
    }
    ctx->pc = 0x210A14u;
label_210a14:
    // 0x210a14: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x210a14u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_210a18:
    // 0x210a18: 0x2644004c  addiu       $a0, $s2, 0x4C
    ctx->pc = 0x210a18u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 76));
label_210a1c:
    // 0x210a1c: 0xc049cb6  jal         func_1272D8
label_210a20:
    if (ctx->pc == 0x210A20u) {
        ctx->pc = 0x210A20u;
            // 0x210a20: 0x24060010  addiu       $a2, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->pc = 0x210A24u;
        goto label_210a24;
    }
    ctx->pc = 0x210A1Cu;
    SET_GPR_U32(ctx, 31, 0x210A24u);
    ctx->pc = 0x210A20u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x210A1Cu;
            // 0x210a20: 0x24060010  addiu       $a2, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1272D8u;
    if (runtime->hasFunction(0x1272D8u)) {
        auto targetFn = runtime->lookupFunction(0x1272D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x210A24u; }
        if (ctx->pc != 0x210A24u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001272D8_0x1272d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x210A24u; }
        if (ctx->pc != 0x210A24u) { return; }
    }
    ctx->pc = 0x210A24u;
label_210a24:
    // 0x210a24: 0xc089014  jal         func_224050
label_210a28:
    if (ctx->pc == 0x210A28u) {
        ctx->pc = 0x210A28u;
            // 0x210a28: 0x8e440000  lw          $a0, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->pc = 0x210A2Cu;
        goto label_210a2c;
    }
    ctx->pc = 0x210A24u;
    SET_GPR_U32(ctx, 31, 0x210A2Cu);
    ctx->pc = 0x210A28u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x210A24u;
            // 0x210a28: 0x8e440000  lw          $a0, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x224050u;
    if (runtime->hasFunction(0x224050u)) {
        auto targetFn = runtime->lookupFunction(0x224050u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x210A2Cu; }
        if (ctx->pc != 0x210A2Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00224050_0x224050(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x210A2Cu; }
        if (ctx->pc != 0x210A2Cu) { return; }
    }
    ctx->pc = 0x210A2Cu;
label_210a2c:
    // 0x210a2c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x210a2cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_210a30:
    // 0x210a30: 0x2405fffe  addiu       $a1, $zero, -0x2
    ctx->pc = 0x210a30u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
label_210a34:
    // 0x210a34: 0xc083c8c  jal         func_20F230
label_210a38:
    if (ctx->pc == 0x210A38u) {
        ctx->pc = 0x210A3Cu;
        goto label_210a3c;
    }
    ctx->pc = 0x210A34u;
    SET_GPR_U32(ctx, 31, 0x210A3Cu);
    ctx->pc = 0x20F230u;
    if (runtime->hasFunction(0x20F230u)) {
        auto targetFn = runtime->lookupFunction(0x20F230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x210A3Cu; }
        if (ctx->pc != 0x210A3Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0020F230_0x20f230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x210A3Cu; }
        if (ctx->pc != 0x210A3Cu) { return; }
    }
    ctx->pc = 0x210A3Cu;
label_210a3c:
    // 0x210a3c: 0x1000ffc6  b           . + 4 + (-0x3A << 2)
label_210a40:
    if (ctx->pc == 0x210A40u) {
        ctx->pc = 0x210A40u;
            // 0x210a40: 0x82420028  lb          $v0, 0x28($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 40)));
        ctx->pc = 0x210A44u;
        goto label_210a44;
    }
    ctx->pc = 0x210A3Cu;
    {
        const bool branch_taken_0x210a3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x210A40u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x210A3Cu;
            // 0x210a40: 0x82420028  lb          $v0, 0x28($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 40)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x210a3c) {
            ctx->pc = 0x210958u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_210958;
        }
    }
    ctx->pc = 0x210A44u;
label_210a44:
    // 0x210a44: 0x8e4e0024  lw          $t6, 0x24($s2)
    ctx->pc = 0x210a44u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 36)));
label_210a48:
    // 0x210a48: 0x240f0001  addiu       $t7, $zero, 0x1
    ctx->pc = 0x210a48u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_210a4c:
    // 0x210a4c: 0x11cf0003  beq         $t6, $t7, . + 4 + (0x3 << 2)
label_210a50:
    if (ctx->pc == 0x210A50u) {
        ctx->pc = 0x210A50u;
            // 0x210a50: 0x240f0003  addiu       $t7, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->pc = 0x210A54u;
        goto label_210a54;
    }
    ctx->pc = 0x210A4Cu;
    {
        const bool branch_taken_0x210a4c = (GPR_U64(ctx, 14) == GPR_U64(ctx, 15));
        ctx->pc = 0x210A50u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x210A4Cu;
            // 0x210a50: 0x240f0003  addiu       $t7, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x210a4c) {
            ctx->pc = 0x210A5Cu;
            goto label_210a5c;
        }
    }
    ctx->pc = 0x210A54u;
label_210a54:
    // 0x210a54: 0x15cf0006  bne         $t6, $t7, . + 4 + (0x6 << 2)
label_210a58:
    if (ctx->pc == 0x210A58u) {
        ctx->pc = 0x210A58u;
            // 0x210a58: 0x240f0002  addiu       $t7, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->pc = 0x210A5Cu;
        goto label_210a5c;
    }
    ctx->pc = 0x210A54u;
    {
        const bool branch_taken_0x210a54 = (GPR_U64(ctx, 14) != GPR_U64(ctx, 15));
        ctx->pc = 0x210A58u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x210A54u;
            // 0x210a58: 0x240f0002  addiu       $t7, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x210a54) {
            ctx->pc = 0x210A70u;
            goto label_210a70;
        }
    }
    ctx->pc = 0x210A5Cu;
label_210a5c:
    // 0x210a5c: 0x82450028  lb          $a1, 0x28($s2)
    ctx->pc = 0x210a5cu;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 40)));
label_210a60:
    // 0x210a60: 0xc083c8c  jal         func_20F230
label_210a64:
    if (ctx->pc == 0x210A64u) {
        ctx->pc = 0x210A64u;
            // 0x210a64: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x210A68u;
        goto label_210a68;
    }
    ctx->pc = 0x210A60u;
    SET_GPR_U32(ctx, 31, 0x210A68u);
    ctx->pc = 0x210A64u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x210A60u;
            // 0x210a64: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x20F230u;
    if (runtime->hasFunction(0x20F230u)) {
        auto targetFn = runtime->lookupFunction(0x20F230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x210A68u; }
        if (ctx->pc != 0x210A68u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0020F230_0x20f230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x210A68u; }
        if (ctx->pc != 0x210A68u) { return; }
    }
    ctx->pc = 0x210A68u;
label_210a68:
    // 0x210a68: 0x8e4e0024  lw          $t6, 0x24($s2)
    ctx->pc = 0x210a68u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 36)));
label_210a6c:
    // 0x210a6c: 0x240f0002  addiu       $t7, $zero, 0x2
    ctx->pc = 0x210a6cu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_210a70:
    // 0x210a70: 0x55cfffb9  bnel        $t6, $t7, . + 4 + (-0x47 << 2)
label_210a74:
    if (ctx->pc == 0x210A74u) {
        ctx->pc = 0x210A74u;
            // 0x210a74: 0x82420028  lb          $v0, 0x28($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 40)));
        ctx->pc = 0x210A78u;
        goto label_210a78;
    }
    ctx->pc = 0x210A70u;
    {
        const bool branch_taken_0x210a70 = (GPR_U64(ctx, 14) != GPR_U64(ctx, 15));
        if (branch_taken_0x210a70) {
            ctx->pc = 0x210A74u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x210A70u;
            // 0x210a74: 0x82420028  lb          $v0, 0x28($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 40)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x210958u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_210958;
        }
    }
    ctx->pc = 0x210A78u;
label_210a78:
    // 0x210a78: 0x924e002a  lbu         $t6, 0x2A($s2)
    ctx->pc = 0x210a78u;
    SET_GPR_U32(ctx, 14, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 42)));
label_210a7c:
    // 0x210a7c: 0x55c00029  bnel        $t6, $zero, . + 4 + (0x29 << 2)
label_210a80:
    if (ctx->pc == 0x210A80u) {
        ctx->pc = 0x210A80u;
            // 0x210a80: 0xe7600  sll         $t6, $t6, 24 (Delay Slot)
        SET_GPR_S32(ctx, 14, (int32_t)SLL32(GPR_U32(ctx, 14), 24));
        ctx->pc = 0x210A84u;
        goto label_210a84;
    }
    ctx->pc = 0x210A7Cu;
    {
        const bool branch_taken_0x210a7c = (GPR_U64(ctx, 14) != GPR_U64(ctx, 0));
        if (branch_taken_0x210a7c) {
            ctx->pc = 0x210A80u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x210A7Cu;
            // 0x210a80: 0xe7600  sll         $t6, $t6, 24 (Delay Slot)
        SET_GPR_S32(ctx, 14, (int32_t)SLL32(GPR_U32(ctx, 14), 24));
        ctx->in_delay_slot = false;
            ctx->pc = 0x210B24u;
            goto label_210b24;
        }
    }
    ctx->pc = 0x210A84u;
label_210a84:
    // 0x210a84: 0x8e4d0078  lw          $t5, 0x78($s2)
    ctx->pc = 0x210a84u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 120)));
label_210a88:
    // 0x210a88: 0x55a00005  bnel        $t5, $zero, . + 4 + (0x5 << 2)
label_210a8c:
    if (ctx->pc == 0x210A8Cu) {
        ctx->pc = 0x210A8Cu;
            // 0x210a8c: 0x8e4c007c  lw          $t4, 0x7C($s2) (Delay Slot)
        SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 124)));
        ctx->pc = 0x210A90u;
        goto label_210a90;
    }
    ctx->pc = 0x210A88u;
    {
        const bool branch_taken_0x210a88 = (GPR_U64(ctx, 13) != GPR_U64(ctx, 0));
        if (branch_taken_0x210a88) {
            ctx->pc = 0x210A8Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x210A88u;
            // 0x210a8c: 0x8e4c007c  lw          $t4, 0x7C($s2) (Delay Slot)
        SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 124)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x210AA0u;
            goto label_210aa0;
        }
    }
    ctx->pc = 0x210A90u;
label_210a90:
    // 0x210a90: 0x240f0e10  addiu       $t7, $zero, 0xE10
    ctx->pc = 0x210a90u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 3600));
label_210a94:
    // 0x210a94: 0x240d0e10  addiu       $t5, $zero, 0xE10
    ctx->pc = 0x210a94u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 0), 3600));
label_210a98:
    // 0x210a98: 0xae4f0078  sw          $t7, 0x78($s2)
    ctx->pc = 0x210a98u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 120), GPR_U32(ctx, 15));
label_210a9c:
    // 0x210a9c: 0x8e4c007c  lw          $t4, 0x7C($s2)
    ctx->pc = 0x210a9cu;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 124)));
label_210aa0:
    // 0x210aa0: 0x18d782a  slt         $t7, $t4, $t5
    ctx->pc = 0x210aa0u;
    SET_GPR_U64(ctx, 15, ((int64_t)GPR_S64(ctx, 12) < (int64_t)GPR_S64(ctx, 13)) ? 1 : 0);
label_210aa4:
    // 0x210aa4: 0x15e00029  bnez        $t7, . + 4 + (0x29 << 2)
label_210aa8:
    if (ctx->pc == 0x210AA8u) {
        ctx->pc = 0x210AA8u;
            // 0x210aa8: 0x258f0001  addiu       $t7, $t4, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 12), 1));
        ctx->pc = 0x210AACu;
        goto label_210aac;
    }
    ctx->pc = 0x210AA4u;
    {
        const bool branch_taken_0x210aa4 = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        ctx->pc = 0x210AA8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x210AA4u;
            // 0x210aa8: 0x258f0001  addiu       $t7, $t4, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 12), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x210aa4) {
            ctx->pc = 0x210B4Cu;
            goto label_210b4c;
        }
    }
    ctx->pc = 0x210AACu;
label_210aac:
    // 0x210aac: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x210aacu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_210ab0:
    // 0x210ab0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x210ab0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_210ab4:
    // 0x210ab4: 0xc049cb6  jal         func_1272D8
label_210ab8:
    if (ctx->pc == 0x210AB8u) {
        ctx->pc = 0x210AB8u;
            // 0x210ab8: 0x2406000c  addiu       $a2, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->pc = 0x210ABCu;
        goto label_210abc;
    }
    ctx->pc = 0x210AB4u;
    SET_GPR_U32(ctx, 31, 0x210ABCu);
    ctx->pc = 0x210AB8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x210AB4u;
            // 0x210ab8: 0x2406000c  addiu       $a2, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1272D8u;
    if (runtime->hasFunction(0x1272D8u)) {
        auto targetFn = runtime->lookupFunction(0x1272D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x210ABCu; }
        if (ctx->pc != 0x210ABCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001272D8_0x1272d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x210ABCu; }
        if (ctx->pc != 0x210ABCu) { return; }
    }
    ctx->pc = 0x210ABCu;
label_210abc:
    // 0x210abc: 0x8e500000  lw          $s0, 0x0($s2)
    ctx->pc = 0x210abcu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_210ac0:
    // 0x210ac0: 0x240f0010  addiu       $t7, $zero, 0x10
    ctx->pc = 0x210ac0u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_210ac4:
    // 0x210ac4: 0xa3af0003  sb          $t7, 0x3($sp)
    ctx->pc = 0x210ac4u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 3), (uint8_t)GPR_U32(ctx, 15));
label_210ac8:
    // 0x210ac8: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x210ac8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_210acc:
    // 0x210acc: 0x8e02106c  lw          $v0, 0x106C($s0)
    ctx->pc = 0x210accu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4204)));
label_210ad0:
    // 0x210ad0: 0x2406000c  addiu       $a2, $zero, 0xC
    ctx->pc = 0x210ad0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_210ad4:
    // 0x210ad4: 0x40f809  jalr        $v0
label_210ad8:
    if (ctx->pc == 0x210AD8u) {
        ctx->pc = 0x210AD8u;
            // 0x210ad8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x210ADCu;
        goto label_210adc;
    }
    ctx->pc = 0x210AD4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x210ADCu);
        ctx->pc = 0x210AD8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x210AD4u;
            // 0x210ad8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x210ADCu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x210ADCu; }
            if (ctx->pc != 0x210ADCu) { return; }
        }
        }
    }
    ctx->pc = 0x210ADCu;
label_210adc:
    // 0x210adc: 0xae40007c  sw          $zero, 0x7C($s2)
    ctx->pc = 0x210adcu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 124), GPR_U32(ctx, 0));
label_210ae0:
    // 0x210ae0: 0xc0990d8  jal         func_264360
label_210ae4:
    if (ctx->pc == 0x210AE4u) {
        ctx->pc = 0x210AE4u;
            // 0x210ae4: 0x9e040018  lwu         $a0, 0x18($s0) (Delay Slot)
        SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 24)));
        ctx->pc = 0x210AE8u;
        goto label_210ae8;
    }
    ctx->pc = 0x210AE0u;
    SET_GPR_U32(ctx, 31, 0x210AE8u);
    ctx->pc = 0x210AE4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x210AE0u;
            // 0x210ae4: 0x9e040018  lwu         $a0, 0x18($s0) (Delay Slot)
        SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 24)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x264360u;
    if (runtime->hasFunction(0x264360u)) {
        auto targetFn = runtime->lookupFunction(0x264360u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x210AE8u; }
        if (ctx->pc != 0x210AE8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00264360_0x264360(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x210AE8u; }
        if (ctx->pc != 0x210AE8u) { return; }
    }
    ctx->pc = 0x210AE8u;
label_210ae8:
    // 0x210ae8: 0x96040016  lhu         $a0, 0x16($s0)
    ctx->pc = 0x210ae8u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 22)));
label_210aec:
    // 0x210aec: 0xc08b60c  jal         func_22D830
label_210af0:
    if (ctx->pc == 0x210AF0u) {
        ctx->pc = 0x210AF0u;
            // 0x210af0: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x210AF4u;
        goto label_210af4;
    }
    ctx->pc = 0x210AECu;
    SET_GPR_U32(ctx, 31, 0x210AF4u);
    ctx->pc = 0x210AF0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x210AECu;
            // 0x210af0: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22D830u;
    if (runtime->hasFunction(0x22D830u)) {
        auto targetFn = runtime->lookupFunction(0x22D830u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x210AF4u; }
        if (ctx->pc != 0x210AF4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022D830_0x22d830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x210AF4u; }
        if (ctx->pc != 0x210AF4u) { return; }
    }
    ctx->pc = 0x210AF4u;
label_210af4:
    // 0x210af4: 0x8e08000c  lw          $t0, 0xC($s0)
    ctx->pc = 0x210af4u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_210af8:
    // 0x210af8: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x210af8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
label_210afc:
    // 0x210afc: 0x3c07003f  lui         $a3, 0x3F
    ctx->pc = 0x210afcu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)63 << 16));
label_210b00:
    // 0x210b00: 0x40502d  daddu       $t2, $v0, $zero
    ctx->pc = 0x210b00u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_210b04:
    // 0x210b04: 0x24840150  addiu       $a0, $a0, 0x150
    ctx->pc = 0x210b04u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 336));
label_210b08:
    // 0x210b08: 0x24e70168  addiu       $a3, $a3, 0x168
    ctx->pc = 0x210b08u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 360));
label_210b0c:
    // 0x210b0c: 0x220482d  daddu       $t1, $s1, $zero
    ctx->pc = 0x210b0cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_210b10:
    // 0x210b10: 0x240503e1  addiu       $a1, $zero, 0x3E1
    ctx->pc = 0x210b10u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 993));
label_210b14:
    // 0x210b14: 0xc0897d6  jal         func_225F58
label_210b18:
    if (ctx->pc == 0x210B18u) {
        ctx->pc = 0x210B18u;
            // 0x210b18: 0x24060008  addiu       $a2, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->pc = 0x210B1Cu;
        goto label_210b1c;
    }
    ctx->pc = 0x210B14u;
    SET_GPR_U32(ctx, 31, 0x210B1Cu);
    ctx->pc = 0x210B18u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x210B14u;
            // 0x210b18: 0x24060008  addiu       $a2, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x225F58u;
    if (runtime->hasFunction(0x225F58u)) {
        auto targetFn = runtime->lookupFunction(0x225F58u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x210B1Cu; }
        if (ctx->pc != 0x210B1Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00225F58_0x225f58(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x210B1Cu; }
        if (ctx->pc != 0x210B1Cu) { return; }
    }
    ctx->pc = 0x210B1Cu;
label_210b1c:
    // 0x210b1c: 0x924e002a  lbu         $t6, 0x2A($s2)
    ctx->pc = 0x210b1cu;
    SET_GPR_U32(ctx, 14, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 42)));
label_210b20:
    // 0x210b20: 0xe7600  sll         $t6, $t6, 24
    ctx->pc = 0x210b20u;
    SET_GPR_S32(ctx, 14, (int32_t)SLL32(GPR_U32(ctx, 14), 24));
label_210b24:
    // 0x210b24: 0x240f0001  addiu       $t7, $zero, 0x1
    ctx->pc = 0x210b24u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_210b28:
    // 0x210b28: 0xe7603  sra         $t6, $t6, 24
    ctx->pc = 0x210b28u;
    SET_GPR_S32(ctx, 14, SRA32(GPR_S32(ctx, 14), 24));
label_210b2c:
    // 0x210b2c: 0x15cf0003  bne         $t6, $t7, . + 4 + (0x3 << 2)
label_210b30:
    if (ctx->pc == 0x210B30u) {
        ctx->pc = 0x210B34u;
        goto label_210b34;
    }
    ctx->pc = 0x210B2Cu;
    {
        const bool branch_taken_0x210b2c = (GPR_U64(ctx, 14) != GPR_U64(ctx, 15));
        if (branch_taken_0x210b2c) {
            ctx->pc = 0x210B3Cu;
            goto label_210b3c;
        }
    }
    ctx->pc = 0x210B34u;
label_210b34:
    // 0x210b34: 0xc083f2c  jal         func_20FCB0
label_210b38:
    if (ctx->pc == 0x210B38u) {
        ctx->pc = 0x210B38u;
            // 0x210b38: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x210B3Cu;
        goto label_210b3c;
    }
    ctx->pc = 0x210B34u;
    SET_GPR_U32(ctx, 31, 0x210B3Cu);
    ctx->pc = 0x210B38u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x210B34u;
            // 0x210b38: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x20FCB0u;
    if (runtime->hasFunction(0x20FCB0u)) {
        auto targetFn = runtime->lookupFunction(0x20FCB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x210B3Cu; }
        if (ctx->pc != 0x210B3Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0020FCB0_0x20fcb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x210B3Cu; }
        if (ctx->pc != 0x210B3Cu) { return; }
    }
    ctx->pc = 0x210B3Cu;
label_210b3c:
    // 0x210b3c: 0xc0840fa  jal         func_2103E8
label_210b40:
    if (ctx->pc == 0x210B40u) {
        ctx->pc = 0x210B40u;
            // 0x210b40: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x210B44u;
        goto label_210b44;
    }
    ctx->pc = 0x210B3Cu;
    SET_GPR_U32(ctx, 31, 0x210B44u);
    ctx->pc = 0x210B40u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x210B3Cu;
            // 0x210b40: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2103E8u;
    if (runtime->hasFunction(0x2103E8u)) {
        auto targetFn = runtime->lookupFunction(0x2103E8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x210B44u; }
        if (ctx->pc != 0x210B44u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002103E8_0x2103e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x210B44u; }
        if (ctx->pc != 0x210B44u) { return; }
    }
    ctx->pc = 0x210B44u;
label_210b44:
    // 0x210b44: 0x1000ff84  b           . + 4 + (-0x7C << 2)
label_210b48:
    if (ctx->pc == 0x210B48u) {
        ctx->pc = 0x210B48u;
            // 0x210b48: 0x82420028  lb          $v0, 0x28($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 40)));
        ctx->pc = 0x210B4Cu;
        goto label_210b4c;
    }
    ctx->pc = 0x210B44u;
    {
        const bool branch_taken_0x210b44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x210B48u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x210B44u;
            // 0x210b48: 0x82420028  lb          $v0, 0x28($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 40)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x210b44) {
            ctx->pc = 0x210958u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_210958;
        }
    }
    ctx->pc = 0x210B4Cu;
label_210b4c:
    // 0x210b4c: 0x1000fff4  b           . + 4 + (-0xC << 2)
label_210b50:
    if (ctx->pc == 0x210B50u) {
        ctx->pc = 0x210B50u;
            // 0x210b50: 0xae4f007c  sw          $t7, 0x7C($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 124), GPR_U32(ctx, 15));
        ctx->pc = 0x210B54u;
        goto label_210b54;
    }
    ctx->pc = 0x210B4Cu;
    {
        const bool branch_taken_0x210b4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x210B50u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x210B4Cu;
            // 0x210b50: 0xae4f007c  sw          $t7, 0x7C($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 124), GPR_U32(ctx, 15));
        ctx->in_delay_slot = false;
        if (branch_taken_0x210b4c) {
            ctx->pc = 0x210B20u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_210b20;
        }
    }
    ctx->pc = 0x210B54u;
label_210b54:
    // 0x210b54: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x210b54u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_210b58:
    // 0x210b58: 0xc049cb6  jal         func_1272D8
label_210b5c:
    if (ctx->pc == 0x210B5Cu) {
        ctx->pc = 0x210B5Cu;
            // 0x210b5c: 0x24060010  addiu       $a2, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->pc = 0x210B60u;
        goto label_210b60;
    }
    ctx->pc = 0x210B58u;
    SET_GPR_U32(ctx, 31, 0x210B60u);
    ctx->pc = 0x210B5Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x210B58u;
            // 0x210b5c: 0x24060010  addiu       $a2, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1272D8u;
    if (runtime->hasFunction(0x1272D8u)) {
        auto targetFn = runtime->lookupFunction(0x1272D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x210B60u; }
        if (ctx->pc != 0x210B60u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001272D8_0x1272d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x210B60u; }
        if (ctx->pc != 0x210B60u) { return; }
    }
    ctx->pc = 0x210B60u;
label_210b60:
    // 0x210b60: 0x2644004c  addiu       $a0, $s2, 0x4C
    ctx->pc = 0x210b60u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 76));
label_210b64:
    // 0x210b64: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x210b64u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_210b68:
    // 0x210b68: 0xc049cb6  jal         func_1272D8
label_210b6c:
    if (ctx->pc == 0x210B6Cu) {
        ctx->pc = 0x210B6Cu;
            // 0x210b6c: 0x24060010  addiu       $a2, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->pc = 0x210B70u;
        goto label_210b70;
    }
    ctx->pc = 0x210B68u;
    SET_GPR_U32(ctx, 31, 0x210B70u);
    ctx->pc = 0x210B6Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x210B68u;
            // 0x210b6c: 0x24060010  addiu       $a2, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1272D8u;
    if (runtime->hasFunction(0x1272D8u)) {
        auto targetFn = runtime->lookupFunction(0x1272D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x210B70u; }
        if (ctx->pc != 0x210B70u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001272D8_0x1272d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x210B70u; }
        if (ctx->pc != 0x210B70u) { return; }
    }
    ctx->pc = 0x210B70u;
label_210b70:
    // 0x210b70: 0xa240002b  sb          $zero, 0x2B($s2)
    ctx->pc = 0x210b70u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 43), (uint8_t)GPR_U32(ctx, 0));
label_210b74:
    // 0x210b74: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x210b74u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_210b78:
    // 0x210b78: 0x1000ffae  b           . + 4 + (-0x52 << 2)
label_210b7c:
    if (ctx->pc == 0x210B7Cu) {
        ctx->pc = 0x210B7Cu;
            // 0x210b7c: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x210B80u;
        goto label_210b80;
    }
    ctx->pc = 0x210B78u;
    {
        const bool branch_taken_0x210b78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x210B7Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x210B78u;
            // 0x210b7c: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x210b78) {
            ctx->pc = 0x210A34u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_210a34;
        }
    }
    ctx->pc = 0x210B80u;
label_210b80:
    // 0x210b80: 0x240f0002  addiu       $t7, $zero, 0x2
    ctx->pc = 0x210b80u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_210b84:
    // 0x210b84: 0x144fff83  bne         $v0, $t7, . + 4 + (-0x7D << 2)
label_210b88:
    if (ctx->pc == 0x210B88u) {
        ctx->pc = 0x210B88u;
            // 0x210b88: 0x240f0003  addiu       $t7, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->pc = 0x210B8Cu;
        goto label_210b8c;
    }
    ctx->pc = 0x210B84u;
    {
        const bool branch_taken_0x210b84 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 15));
        ctx->pc = 0x210B88u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x210B84u;
            // 0x210b88: 0x240f0003  addiu       $t7, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x210b84) {
            ctx->pc = 0x210994u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_210994;
        }
    }
    ctx->pc = 0x210B8Cu;
label_210b8c:
    // 0x210b8c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x210b8cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_210b90:
    // 0x210b90: 0xae4f0024  sw          $t7, 0x24($s2)
    ctx->pc = 0x210b90u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 36), GPR_U32(ctx, 15));
label_210b94:
    // 0x210b94: 0x1000ffa7  b           . + 4 + (-0x59 << 2)
label_210b98:
    if (ctx->pc == 0x210B98u) {
        ctx->pc = 0x210B98u;
            // 0x210b98: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x210B9Cu;
        goto label_210b9c;
    }
    ctx->pc = 0x210B94u;
    {
        const bool branch_taken_0x210b94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x210B98u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x210B94u;
            // 0x210b98: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x210b94) {
            ctx->pc = 0x210A34u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_210a34;
        }
    }
    ctx->pc = 0x210B9Cu;
label_210b9c:
    // 0x210b9c: 0x2644003c  addiu       $a0, $s2, 0x3C
    ctx->pc = 0x210b9cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 60));
label_210ba0:
    // 0x210ba0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x210ba0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_210ba4:
    // 0x210ba4: 0xc049cb6  jal         func_1272D8
label_210ba8:
    if (ctx->pc == 0x210BA8u) {
        ctx->pc = 0x210BA8u;
            // 0x210ba8: 0x24060010  addiu       $a2, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->pc = 0x210BACu;
        goto label_210bac;
    }
    ctx->pc = 0x210BA4u;
    SET_GPR_U32(ctx, 31, 0x210BACu);
    ctx->pc = 0x210BA8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x210BA4u;
            // 0x210ba8: 0x24060010  addiu       $a2, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1272D8u;
    if (runtime->hasFunction(0x1272D8u)) {
        auto targetFn = runtime->lookupFunction(0x1272D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x210BACu; }
        if (ctx->pc != 0x210BACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001272D8_0x1272d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x210BACu; }
        if (ctx->pc != 0x210BACu) { return; }
    }
    ctx->pc = 0x210BACu;
label_210bac:
    // 0x210bac: 0x2644004c  addiu       $a0, $s2, 0x4C
    ctx->pc = 0x210bacu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 76));
label_210bb0:
    // 0x210bb0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x210bb0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_210bb4:
    // 0x210bb4: 0xc049cb6  jal         func_1272D8
label_210bb8:
    if (ctx->pc == 0x210BB8u) {
        ctx->pc = 0x210BB8u;
            // 0x210bb8: 0x24060010  addiu       $a2, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->pc = 0x210BBCu;
        goto label_210bbc;
    }
    ctx->pc = 0x210BB4u;
    SET_GPR_U32(ctx, 31, 0x210BBCu);
    ctx->pc = 0x210BB8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x210BB4u;
            // 0x210bb8: 0x24060010  addiu       $a2, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1272D8u;
    if (runtime->hasFunction(0x1272D8u)) {
        auto targetFn = runtime->lookupFunction(0x1272D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x210BBCu; }
        if (ctx->pc != 0x210BBCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001272D8_0x1272d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x210BBCu; }
        if (ctx->pc != 0x210BBCu) { return; }
    }
    ctx->pc = 0x210BBCu;
label_210bbc:
    // 0x210bbc: 0x240f0004  addiu       $t7, $zero, 0x4
    ctx->pc = 0x210bbcu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_210bc0:
    // 0x210bc0: 0xa240002b  sb          $zero, 0x2B($s2)
    ctx->pc = 0x210bc0u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 43), (uint8_t)GPR_U32(ctx, 0));
label_210bc4:
    // 0x210bc4: 0xae4f0024  sw          $t7, 0x24($s2)
    ctx->pc = 0x210bc4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 36), GPR_U32(ctx, 15));
label_210bc8:
    // 0x210bc8: 0x1000fff2  b           . + 4 + (-0xE << 2)
label_210bcc:
    if (ctx->pc == 0x210BCCu) {
        ctx->pc = 0x210BCCu;
            // 0x210bcc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x210BD0u;
        goto label_210bd0;
    }
    ctx->pc = 0x210BC8u;
    {
        const bool branch_taken_0x210bc8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x210BCCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x210BC8u;
            // 0x210bcc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x210bc8) {
            ctx->pc = 0x210B94u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_210b94;
        }
    }
    ctx->pc = 0x210BD0u;
label_210bd0:
    // 0x210bd0: 0xe1600  sll         $v0, $t6, 24
    ctx->pc = 0x210bd0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 14), 24));
label_210bd4:
    // 0x210bd4: 0x1000ff60  b           . + 4 + (-0xA0 << 2)
label_210bd8:
    if (ctx->pc == 0x210BD8u) {
        ctx->pc = 0x210BD8u;
            // 0x210bd8: 0x21603  sra         $v0, $v0, 24 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 24));
        ctx->pc = 0x210BDCu;
        goto label_210bdc;
    }
    ctx->pc = 0x210BD4u;
    {
        const bool branch_taken_0x210bd4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x210BD8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x210BD4u;
            // 0x210bd8: 0x21603  sra         $v0, $v0, 24 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x210bd4) {
            ctx->pc = 0x210958u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_210958;
        }
    }
    ctx->pc = 0x210BDCu;
label_210bdc:
    // 0x210bdc: 0x0  nop
    ctx->pc = 0x210bdcu;
    // NOP
    ctx->pc = 0x210be0u;
}
